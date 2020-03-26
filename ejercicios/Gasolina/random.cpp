#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	srand(time(NULL));
	int lim_inf = 50;
	int lim_sup =150;

for(int i=0;i<2000;i++){
	int valor =lim_inf + rand()%(lim_sup + 1 - lim_inf);
if(valor<=100)
        cout<<"Velocidad: "<<valor<<" Precio: "<<(valor*10*19)<<endl;
if(valor>100)
        cout<<"Velocidad: "<<valor<<" Precio: "<<(valor*12*19)<<endl;

/*	cout<<valor<<endl;*/
}
 int valor=rand()%149;
/*if(valor<=100)
	cout<<"Velocidad: "<<valor<<" Precio: "<<(valor*10*19)<<endl;
if(valor>100)
	cout<<"Velocidad: "<<valor<<" Precio: "<<(valor*12*19)<<endl;
*/

return 0;
} 

