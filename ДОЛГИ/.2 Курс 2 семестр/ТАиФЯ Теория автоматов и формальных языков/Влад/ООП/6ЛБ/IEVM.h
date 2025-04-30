#pragma once
#include <iostream>
#include <string>
using namespace std;

class IEVM {
protected:
	virtual void SetNameOfCorpus(string nameOfCorpus) = 0;
	virtual string GetNameOfCorpus() = 0;
	virtual void SetJadra(int jadra) = 0;
	virtual int GetJadra() = 0;
	virtual void SetChast(double chast) = 0;
	virtual double GetChast() = 0;
	virtual void print() = 0;
	virtual ~IEVM() = default;
};