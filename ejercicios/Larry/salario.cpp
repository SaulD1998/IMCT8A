#include <iostream>
using namespace std;
int main(int argc,char*argv[]){
	float saldo[12];
	float promedio=0;
	float GP[5];
	float total;
if(argc == 18){
	saldo[0]=stof(argv[1]);
	saldo[1]=stof(argv[2]);
	saldo[2]=stof(argv[3]);
        saldo[3]=stof(argv[4]);
        saldo[4]=stof(argv[5]);
        saldo[5]=stof(argv[6]);
        saldo[6]=stof(argv[7]);
        saldo[7]=stof(argv[8]);
        saldo[8]=stof(argv[9]);
        saldo[9]=stof(argv[10]);
        saldo[10]=stof(argv[11]);
        saldo[11]=stof(argv[12]);
	
	GP[0]=stof(argv[1]);
        GP[1]=stof(argv[2]);
        GP[2]=stof(argv[3]);
        GP[3]=stof(argv[4]);
        GP[4]=stof(argv[5]);


}
	 
promedio =(saldo[0]+saldo[1]+saldo[2]+saldo[3]+saldo[4]+saldo[5]+saldo[6]+saldo[7]+saldo[8]+saldo[9]+saldo[10]+saldo[11])/12;

total=GP[0]+GP[1]+GP[2]+GP[3]+GP[4];


cout<<"Saldo promedio: "<<promedio<<endl;
cout<<"Total de gastos y ganancias: "<<total<<endl;
return 0;
}
