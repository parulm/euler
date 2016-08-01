#include <iostream>
#include <math.h>
using namespace std;

int isprime(long double a)
{
int flag=0;
for(long double i=2;i<=sqrt(a);i++)
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
long double n;
int count=1;
for (n=3;;n=n+2)
	{
	if(isprime(n)==1)
		{
		count++;
		}
	if(count==10001)
		break;
	}
cout<<"The desired number is: "<<n<<endl;
}
