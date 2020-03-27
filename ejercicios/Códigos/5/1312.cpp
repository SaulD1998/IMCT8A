#include <iostream>
using namespace std;
int main(){

	double R1;
	double R2;
	double S;
	cin>>R1>>S;

	if((R1>=-1000)&&(R1<=1000)&&(S>=-1000)&&(S<=1000))
	R2=(S*2)-R1;	
	 

cout<<R2<<endl;
return 0;
}
