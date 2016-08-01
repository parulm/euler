#include <iostream>
#include <fstream>
using namespace std;
int main(){
ifstream myfile;
myfile.open("num.txt");
long int a[1000];
for(int i=0;i<1000;i++)
{
long int n = myfile.get();
if(isdigit(n))
	{
	n = n - '0';
	}
else
	cout<<"not a digit"<<endl;
a[i]=n;
}
long int prod,large=0,t=13;
for(int i=0; i<1000-t; i++)
	{
	prod = 1;
	for(int j=0;j<t;j++)
		{
		prod = prod*a[i+j];
		}
	//prod = a[i]*a[i+1]*a[i+2]*a[i+3];
	if(prod>large)
		large=prod;
	}
myfile.close();
cout<<"The largest product of "<<t<<" adjacent numbers is: "<<large<<endl;
}
