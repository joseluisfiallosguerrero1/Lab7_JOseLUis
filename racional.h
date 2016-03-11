#ifndef RACIONAL_H
#define RACIONAL_H
#include <string>
#include<iostream>
#include<sstream>
using namespace std;
using std::string;

class racional{
	int  num, den;
	public:
		racional(int, int);
		const string toString()const;
		const racional& operator =(const racional&);
		const racional operator +(const racional&)const;
		const racional operator -(const racional&)const;
		const racional operator *(const racional&)const;
		const racional operator /(const racional&)const;
		 void simplificar();
		friend ostream& operator<<(ostream&, const racional&);

};
#endif


