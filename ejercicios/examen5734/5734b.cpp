#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	   srand(time(NULL));
        int inf=1;
        int sup=100;
        int tortuga=0;
        int liebre=0;

for(int i=1;i<=1000;i++){
int valor=inf+rand()%(sup+1-inf);
		if(valor<30)
			 tortuga+=1;  
		else	
			 liebre+=1;
	}

cout<<"La tortuga gano "<<tortuga<<" veces"<<endl;
cout<<"La liebre gano "<<liebre<<" veces"<<endl;
return 0;
}
