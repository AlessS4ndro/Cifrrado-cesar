#include<iostream>
#include<string>

using namespace std;

int module(int,int);

class CifCesar
{
	int key;
	string message;
public:
	CifCesar(){}
	CifCesar(string message){this->message=message;}
	void cifrar(string );
	void descifrar();

};

void CifCesar::cifrar(string message)
{
	//key=
}

int main(int argc,char **argv)
{
	int value=atoi(argv[1]);
	int modulo=atoi(argv[2]);

	cout<<"el modulo "<<modulo<<" de "<<value<<" es: "<<module(value,modulo);


	return 0;
}

int module(int value,int modulo)
{
	int multiplo=modulo;
	bool positivo=true;

		if(value<0){value*=-1;positivo=false;}	////// volvemos positivo

		while(multiplo<value){
			multiplo+=modulo;	
		}
		
		if(value==multiplo)
			return 0;
		if(positivo){
			multiplo-=modulo;
			return value-multiplo;
		}
		cout<<"ultima linea";
		return multiplo-value;
	
}
