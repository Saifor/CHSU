#include <iostream>
#include <fstream>
#include <list>
#include <random>
#include <ctime>

using namespace std;

// Класс хеш-таблицы
class HashTable {
private:
    int B, a, c;
    int collisions;
    int longest_chain;
    list<int>* table;
    int hash_function(int key) {
        return (a * key + c) % B;
    }
public:
    HashTable(int B, int a, int c) : B(B), a(a), c(c), collisions(0), longest_chain(0) {
        table = new list<int>[B];
    }

    ~HashTable() {
        delete[] table;
    }

    void insert(int key) {
        int index = hash_function(key);
        table[index].push_front(key);
        collisions += (table[index].size() > 1);
        longest_chain = max(longest_chain, (int)table[index].size());
    }

    int search(int key) {
        int index = hash_function(key);
        for (int k : table[index]) {
            if (k == key) {
                return index;
            }
        }
        return 0;
    }

    void col(int l_c) {
        for (int i = 0; i < B; ++i) {
            if (table[i].size() == l_c) {
                for (int k : table[i]) {
                    cout << k << " ";
                }
                return;
            }
        }
    }

    void print_table() {
        for (int i = 0; i < B; ++i) {
            cout << i << ". [ ";
            for (int k : table[i]) {
                cout << k << " ";
            }
            cout << "]" << endl;
        }
    }

    void get_stats() {
        int filled_classes = 0;
        for (int i = 0; i < B; ++i) {
            if (!table[i].empty()) {
                filled_classes++;
            }
        }
        cout << "Коллизии: " << collisions << endl;
        cout << "Самая длинная цепочка: " << longest_chain << " ( ";
        col(longest_chain);
        cout << ")" << endl;
        cout << "Процент заполнения: " << (double)filled_classes / B * 100 << "%" << endl;
    }
};

HashTable read(const string& filename, int B, int a, int c) {
    HashTable table(B, a, c);
    ifstream file(filename);
    int num;
    while (file >> num) {
        table.insert(num);
    }
    file.close();
    return table;
}

//void create_random_file(const string& filename, int count) {
//    ofstream file(filename);
//    srand(time(0));
//    for (int i = 0; i < count; ++i) {
//        file << rand() % 500000 << endl;
//    }
//    file.close();
//}

int main() {
    setlocale(LC_ALL, "RUS");
    //create_random_file("input.txt", 40000);
    int B;
    cout << "Введите количество классов (до 50000): "; cin >> B;
    if (B <= 30) {
        HashTable table = read("input.txt", B, 1, 0);
        table.print_table();
        table.get_stats();
        int tmp;
        cout << "Введите искомое: "; cin >> tmp;
        tmp = table.search(tmp);
        if (tmp) {
            cout << "Присутствует на позиции позиции: " << tmp << endl;
        }
        else 
            cout << "Не обнаружен" << endl;
    }
    else {
        int a, c;
        cout << "Введите коэффициент a: "; cin >> a;
        cout << "Введите коэффициент c: "; cin >> c;
        HashTable table = read("input.txt", B, a, c);
        table.get_stats();
        int tmp;
        cout << "Введите искомое: "; cin >> tmp;
        tmp = table.search(tmp);
        if (tmp) {
            cout << "Присутствует на позиции позиции: " << tmp << endl;
        }
        else
            cout << "Не обнаружен" << endl;
    }
    return 0;
}