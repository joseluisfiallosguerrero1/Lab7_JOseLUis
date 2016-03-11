#include<iostream>
#include<string>
#include"racional.h"
#include<vector>
#include<sstream>
using namespace std;

int main(int argc, char*argv[]){
	int seguir=0;
	int num=0;
	int den=1;
	int pos1,pos2;
	vector<racional> fracciones;
	vector<string> impresion;
	while(seguir != 7){
		cout<<"1. crear"<<endl<<" 2.sumar"<<endl<<"3. restar "<<endl<<"4 multiplicar "<<endl<<"5 division"<<endl<<"6 mostrar operaciones"<<endl;
		cin>>seguir;
		if(seguir==1){
			cout<<"ingrese el numerador"<<endl;
			cin>>num;
			cout<<"ingrese el numerador"<<endl;
			cin>>den;
			racional temp(num,den);
			fracciones.push_back(temp);
		}	
		if(seguir==2){
			racional respuesta(1,1);
			for(int x=0;x<fracciones.size();x++){
				cout<<x<<" . "<<fracciones[x]<<endl;
				
			}
			cout<<"ingrese primera fraccion"<<endl;
			cin>>pos1;
			cout<<"ingrese primera fraccion"<<endl;
			cin>>pos2;
			respuesta=fracciones[pos1] + fracciones[pos2];
			respuesta.simplificar();
			cout<<" respuesta" << respuesta;
				
			stringstream ss;
			ss << fracciones[pos1] << "+" << fracciones[pos2] << " = " <<respuesta ;
			impresion.push_back(ss.str());
		}
		if(seguir==3){
			racional respuesta(1,1);
			for(int x=0;x<fracciones.size();x++){
				cout<<x<<" . "<<fracciones[x]<<endl;
				
			}
			cout<<"ingrese primera fraccion"<<endl;
			cin>>pos1;
			cout<<"ingrese primera fraccion"<<endl;
			cin>>pos2;
			respuesta=fracciones[pos1] - fracciones[pos2];
				
			cout<<" respuesta" << respuesta;
			stringstream ss;
			ss << fracciones[pos1] << "-" << fracciones[pos2] << " = " <<respuesta ;
			impresion.push_back(ss.str());
		}
		if(seguir==4){
			racional respuesta(1,1);
			for(int x=0;x<fracciones.size();x++){
				cout<<x<<" . "<<fracciones[x]<<endl;
				
			}
			cout<<"ingrese primera fraccion"<<endl;
			cin>>pos1;
			cout<<"ingrese primera fraccion"<<endl;
			cin>>pos2;
			respuesta=fracciones[pos1] * fracciones[pos2];
						
			cout<<" respuesta" << respuesta;
			stringstream ss;
			ss << fracciones[pos1] << "*" << fracciones[pos2] << " = " <<respuesta ;
			impresion.push_back(ss.str());
			
		}
		if(seguir==5){
			racional respuesta(1,1);
			for(int x=0;x<fracciones.size();x++){
				cout<<x<<" . "<<fracciones[x]<<endl;
				
			}
			cout<<"ingrese primera fraccion"<<endl;
			cin>>pos1;
			cout<<"ingrese primera fraccion"<<endl;
			cin>>pos2;
			respuesta=fracciones[pos1] / fracciones[pos2];
			
			cout<<" respuesta" << respuesta;
			stringstream ss;
			ss << fracciones[pos1] << " / " << fracciones[pos2] << " = " <<respuesta ;
			impresion.push_back(ss.str());
		}
		if(seguir==6){
			racional respuesta(1,1);
			for(int x=0;x<impresion.size();x++){
				cout<<impresion[x];
							
			}			
			cout<<endl;
		}		
	}
	cout<<endl;
	cout<<"1. crear"<<endl<<" 2.sumar"<<endl<<"3. restar "<<endl<<"4 multiplicar "<<endl<<"5 division"<<"6 mostrar operaciones"<<endl;
	cin>>seguir;
}




