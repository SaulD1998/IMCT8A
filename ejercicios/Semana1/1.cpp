#include <iostream>
using namespace std;
int operacion(int a);

int main(){
	int n;
	cin>>n;

if(n>0 && n<100000){	
		cout<<n<<"->";
	
	while(n!=1)
	n=operacion(n);
	}
	

return 0;
}


int operacion(int a){
	int p;
	if(a%2==0){
		 p=a/2;
	cout<<p<<"->";
    }
    
	else{
		p=(a*3)+1;
	cout<<p<<"->";	 
    }
	return p;
}



