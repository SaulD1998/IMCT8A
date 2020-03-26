#include <iostream>
#include <iostream>
#include <ctime>

using namespace std;
int main(){
	srand(time(NULL));
	int inf=0; 
	int sup=50;
	float M=0;
	float n;
	float sum=0;

for(int i=1;i<=50;i++){
	n=inf+rand()%(sup+1-inf);
	cout<<n<<endl;
	sum+=n;
}

M=(sum/50);

cout<<"La media es "<<M<<endl;
	return 0; 
} 
