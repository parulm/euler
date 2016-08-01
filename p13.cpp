#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main(){
ifstream myfile;
myfile.open("hundrednos.txt");
double x[100][50];
for(int i=0;i<100;i++)
	{
	for(int j=0;j<50;j++)
		{
		double n = myfile.get();
		if(isdigit(n))
			{
			n = n - '0';
			}
		else
			cout<<"not a digit"<<endl;
		x[i][j]=n;

		}
	}
/*for(int i=0;i<100;i++)
	{
	for(int j=0;j<50;j++)
		{
		cout<<x[i][j];
		}
	cout<<endl;
	}
*/
double val=0;
for (int j=0;j<20;j++)
	{
	double sum=0;
	for(int i=0;i<100;i++)
		{
		sum+=x[i][j];
		}
	val+=sum*pow(10,20-j);
	//cout<<sum<<" "<<val<<endl;
	}
cout<<fixed<<"first ten digits: "<<val<<endl;
myfile.close();
}
