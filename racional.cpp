#include "racional.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cstdio>
using std::string;
using std::stringstream;
using std::cout;

racional::racional(int num, int den){
	if(den<0 && num>0){
		den=den*-1;
		num=num*-1;	
	}else{

		if(den<0 && num<0){
			den=den*-1;
			num=num*-1;	
		}	
	}
	if(den==0){
		den=1;
	}
	if (num>den){
		if(den==1){
		
		}else{
			int b=2;
			while(b<=abs(den)){
				if(den %b==0 && num%b==0){
					den=den/b;
					num=num/b;
				}else{
					b++;
				}
			
			}
	
		}
	}else{
		if(den==1){
		
		}else{
			int b=2;
			while(b<=abs(num)){
				if(den % b==0 && num % b==0){
					den=den/b;
					num=num/b;
				}else{
					b++;
				}
			}
	
		}
	}
	if(num==den){
		num=1;
		den=1;	
	}	
	this -> num = num;
	this -> den = den;
	
}

const string racional::toString()const{
	stringstream ss;
	if (den>1){
		ss<< num << "/" << den;
	}else{
		ss<< num;	
	}
	return ss.str();
} 



const racional& racional::operator =(const racional& r){
	num = r.num;
	den = r.den;
	return *this;
}

const racional racional::operator +(const racional& r)const{
	
	if (den == r.den){
		return racional(num + r.num, den);
	}else{
		return racional(((num * r.den) + (den * r.num)), den * r.den);
	}
}

const racional racional::operator -(const racional& r)const{
	if (den == r.den){
		return racional(num - r.num, den);
	}else{
		return racional(((num * r.den) - (den * r.num)), den * r.den);
	}
}
	
const racional racional::operator *(const racional& r) const{
	return racional(num * r.num, den * r.den);
}

const racional racional::operator /(const racional& r)const{
	if(r.num==0){
		throw(" error al dividor no puede ser 0");	
	}		
	return racional(num * r.den, den * r.num);
}




 void racional::simplificar(){
	if(den<0 && num>0){
		den=den*-1;
		num=num*-1;	
	}else{

		if(den<0 && num<0){
			den=den*-1;
			num=num*-1;	
		}	
	}
	if(den==0){
		den=1;
	}
	if (num>den){
		if(den==1){
		
		}else{
			int b=2;
			while(b<=den){
				if(den %b==0 && num%b==0){
					den=den/b;
					num=num/b;
				}else{
					b++;
				}
			
			}
	
		}
	}else{
		if(den==1){
		
		}else{
			int b=2;
			while(b<=num){
				if(den % b==0 && num % b==0){
					den=den/b;
					num=num/b;
				}else{
					b++;
				}
			}
	
		}
	}
}
ostream& operator<<(ostream& output, const racional& c){
	
	if(c.num==0){
		output<<"0";
	}else if(c.den==1){
		output<< c.num;		
	}else if(c.den==c.num){
		output<<"1";
	}else{
		output<< c.num << "/" << c.den;
	}
	
	return output;
}
