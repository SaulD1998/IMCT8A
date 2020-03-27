#include <iostream>
using namespace std;
int a;
int b;
void getRed(int ip[], int mask[])
{

    for(int i=0;i<4;i++){
        cout<<(ip[i]&mask[i])<<".";
    }
}

void getRed2(int ip[], int mask[], int ip2[])
{
int a=ip[2]&mask[2];
int b=ip2[2]&mask[2];
    if(((ip[0]&mask[0])==(ip2[0]&mask[0]))&&((ip[1]&mask[1])==(ip2[1]&mask[1]))&&(a==b)&&((ip[3]&mask[3])==(ip2[3]&mask[3])))
    cout<<"la direccion IP pertenece a la red"<<endl;
    else
    cout<<"la direccion IP no pertenece a la red"<<endl;


    

}
int main(int argc, char*argv[]){
    int ip[4];
    int mask[4];
    int ip2[4];

    if(argc=13){
        
        ip[0] = stoi (argv[1]);
        ip[1] = stoi (argv[2]);
        ip[2] = stoi (argv[3]);
        ip[3] = stoi (argv[4]);

        mask[0] = stoi (argv[5]);
        mask[1] = stoi (argv[6]);
        mask[2] = stoi (argv[7]);
        mask[3] = stoi (argv[8]);

        ip2[0] = stoi (argv[9]);
        ip2[1] = stoi (argv[10]);
        ip2[2] = stoi (argv[11]);
        ip2[3] = stoi (argv[12]);

    cout<<ip[0]<<"."<<ip[1]<<"."<<ip[2]<<"."<<ip[3]<<"."<<endl;
    cout<<mask[0]<<"."<<mask[1]<<"."<<mask[2]<<"."<<mask[3]<<"."<<endl;
    getRed(ip,mask);
    cout<<endl;
    getRed2(ip,mask,ip2);
    
    
    
    }

    
return 0;

}
