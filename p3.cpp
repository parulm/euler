#include <iostream>
#include <math.h>
using namespace std;

int isprime(double a)
{
int flag=0;
for(double i=2;i<sqrt(a);i++)
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
double n,lp;
cout<<"Enter the number whose largest prime factor you want: ";
cin>>n;
for (double i=floor(sqrt(n));i>1;i--)
{
if(fmod(n,i)==0 && isprime(i)==1)
	{
	 lp=i;
	 break;
	}
}
cout<<"The largest prime factor of "<<n<<" is: "<<lp<<endl;
}
