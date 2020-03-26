#include <iostream>
using namespace std;

	int Sp=0;
	int Si=0;

void Suma(){

	for(int i=1; i<=200; i++){
       		 if (i%2==0)
       			 Sp+=i;
               	else
        		Si+=i;
	}
}

int main(){
Suma();
	cout<<"La suma de los pares es: "<<Sp<<endl;
	cout<<"La suma de los impares es: "<<Si<<endl;
return 0;

}
