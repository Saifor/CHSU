#include <fstream>
#include <string>

#pragma once
struct HuffmanCode {
	char code;
	int code_size;
};

class HuffmanTree {
private:
	struct Node {
		double p; // probability
		char code; // symbol code
		Node *left, *right, *parent; // left for 0, right for 1
	};

	Node *trees[256], *symbols[256];
	int size;

public:
	HuffmanTree() {
		size = 256;
	}

	void make_tree(int col) {
		if (col > 1) {
			double minp1 = 1;
			int n1 = 0;

			for (int i = 1; i < size; i++) {
				if (trees[i] != NULL && trees[i]->p < minp1) {
					minp1 = trees[i]->p;
					n1 = i;
				}
			}
			double minp2 = 1; int n2 = 0;
			for (int i=0; i< size; i++) {
				if (trees[i] != NULL && trees[i]->p < minp2 & i!=n1) {
					minp2 = trees[i]->p;
					n2 = i;
				}
			}

			Node* tmp = new Node;
			tmp->left = trees[n1];
			tmp->right = trees[n2];
			trees[n1]->parent = NULL;
			trees[n2]->parent = NULL;
			tmp->p = trees[n1]->p + trees[n2]->p;
			make_tree(col - 1);
		}
	}

	void input_value_and_frequency(char value, double probability) {
		trees[value] = new Node;
		trees[value]->p = probability;
		trees[value]->left = NULL;
		trees[value]->right = NULL;
		trees[value]->parent = NULL;
		symbols[value] = trees[value];
	}

	HuffmanCode get_symbol_code(char symbol) {
		Node* tmp = symbols[symbol];
		char code = 0;
		int offset = 7;
		int size = 0;
		while (tmp->parent != NULL) {
			if (tmp->parent->left != tmp)
				code = code + (1 << offset);
			offset--;
			size++;
		}
		return HuffmanCode{code, size};
	}
};

class Archiver {
private:
	std::fstream input_file, output_file;
	HuffmanTree decoding_tree;
	__int64 file_size;
	char symbols_probabilities[256];

public:
	Archiver(
		std::string input_f,
		std::string output_f
	) {
		input_file.open(input_f, std::ios::binary | std::ios::in);
		output_file.open(output_f, std::ios::binary | std::ios::out);
		decoding_tree = HuffmanTree();
		// decoding_tree.make_tree(256);
		for (int i = 0; i < 256; i++)
			symbols_probabilities[i] = 0; // fill with zeros
	}

	void compress_file() {
		find_frequencies();
		write_file_header();
		for (int i = 0; i < 256; i++) { // go through all frequencies
			double probability = ((double)symbols_probabilities[i]) / file_size;
			decoding_tree.input_value_and_frequency(i, probability);
		}

		char enc_symbol;
		char output_byte;
		int written_bits = 0;
		while (!input_file.eof()) {
			input_file.get(enc_symbol);
			HuffmanCode code = decoding_tree.get_symbol_code(enc_symbol);
			if (written_bits == 7) {
				output_file.write(&output_byte, 1); // write 1 byte that been encoded
				written_bits = 0;
			}
			else {
				if (written_bits + code.code_size > 8) {
					
				}
				else {
					char tmp = code.code >> (8 - code.code_size);
					output_byte = output_byte << written_bits + tmp;
					written_bits += code.code_size;
				}
			}
			written_bits++;
		}
	}

	void decompress_file() {
		read_file_header();
	}

private:
	void read_file_header() {
		input_file >> file_size;
		for (int i = 0; i < 256; i++)
			input_file >> symbols_probabilities[i];
	}

	void write_file_header() {
		output_file << file_size;
		for (int i = 0; i < 256; i++)
			input_file << symbols_probabilities[i];
	}

	void find_frequencies() {
		char symbol;
		while (!input_file.eof()) {
			file_size++;
			input_file.get(symbol);
			symbols_probabilities[symbol]++;
		}
	};
};