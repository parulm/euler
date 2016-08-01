#include <iostream>
#include <math.h>
using namespace std;

int isprime(double a)
{
int flag=0;
for(double i=2;i<=sqrt(a);i++)
	{
	if(fmod(a,i)==0)
		{flag=1;
		break;}
	}
if(flag==0)
	return 1;
else
	return 0;
}

int main(){
double n=2000000, sum=0;
for (double i=2;i<n;i++)
	{
	if(isprime(i)==1)
		{sum+=i;}
	}
cout<<fixed<<"Sum of all primes below "<<n<<" is: "<<sum<<endl;
}
