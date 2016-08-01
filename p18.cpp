#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
ifstream myfile;
myfile.open("triangle.txt");
int x[15][15];
for (int i=0;i<15;i++)
	{
	for (int j=0;j<=i;j++)
		{
		myfile>>x[i][j];
		}
	}
int n=pow(2,14);
int prod[n];
for(int i=0;i<n;i++)
	prod[i]=1;
int j=0;
for (int i=0;i<15;i++)
	{
	
	}

/*for (int i=0;i<15;i++)
	{
	for (int j=0;j<=i;j++)
		{
		cout<<x[i][j]<<" ";
		}
	cout<<endl;
	}*/

myfile.close();
}
