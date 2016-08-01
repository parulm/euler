#include <iostream>
#include <fstream>
using namespace std;
int main(){
ifstream myfile;
myfile.open("grid.txt");
double x[20][20], large=0;
for(int i=0;i<20;i++)
	{
	for(int j=0;j<20;j++)
		{
		myfile>>x[i][j];
		}
	}
//scanning horizontally
for(int i=0;i<20;i++)
	{
	for(int j=0;j<17;j++)
		{
		double prod=1;
		prod=x[i][j]*x[i][j+1]*x[i][j+2]*x[i][j+3];
		if(prod>large)
			large=prod;
		}
	}
//scanning vertically
for(int i=0;i<20;i++)
	{
	for(int j=0;j<17;j++)
		{
		double prod=1;
		prod=x[j][i]*x[j+1][i]*x[j+2][i]*x[j+3][i];
		if(prod>large)
			large=prod;
		}
	}
	
//scanning diagonally forward
for(int i=0;i<17;i++)
	{
	for(int j=0;j<17;j++)
		{
		double prod=1;
		prod=x[j][i]*x[j+1][i+1]*x[j+2][i+2]*x[j+3][i+3];
		if(prod>large)
			large=prod;
		}
	}

//scanning diagonally backward
for(int i=3;i<20;i++)
	{
	for(int j=0;j<17;j++)
		{
		double prod=1;
		prod=x[j][i]*x[j+1][i-1]*x[j+2][i-2]*x[j+3][i-3];
		if(prod>large)
			large=prod;
		}
	}

cout<<fixed<<"The largest product is: "<<large<<endl;
myfile.close();
}
