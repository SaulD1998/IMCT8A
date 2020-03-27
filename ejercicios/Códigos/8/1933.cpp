#include <iostream>
using namespace std;
int main(){

int l=0;
int r=0;
int c=0;

for(int i=1;i<=7;i++){
cin>>l>>r;
	if((l>=1)&&(r<=5)&&(l!=0)&&(r!=0)){
		c=l+r;
		cout<<c<<endl;	

	} 
}

return 0;
}
