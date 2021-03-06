#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

unsigned long int tri(unsigned long int n)
{return n*(n+1)/2;}

int ndivs(double n)
{
int count=0;
for(double j=2;j<sqrt(n);j++)
	{
	if(fmod(n,j)==0)
		count++;
	}
return 2*(count+1);
}

int main(){
clock_t ti=clock();
double i;
//cout<<ndivs(1000000000000)<<endl;
for(i=1;;i++)
	{
	if(ndivs(i*(i+1)/2)>500)
	break;
	}
cout<<fixed<<"The "<<i<<"th triangular number: "<<tri(i)<<" has over 500 divisors"<<endl;
cout<<"Time taken to execute this program: "<<(double)(clock() - ti)/CLOCKS_PER_SEC<<endl;
}
