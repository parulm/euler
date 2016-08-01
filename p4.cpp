#include <iostream>
using namespace std;
int ispali(long int a)
{
int len=0;
long int b=a, c=a;
while(b)
{
b = b/10;
len++;
}
long int x[len];
for (int i=0;i<len;i++)
	{
	x[i]=c%10;
	c=c/10;
	}
int flag=0;
for (int i=0;i<=len/2+1;i++)
	{
	if(x[i]!=x[len-1-i])
		flag=1;
	}
return flag;
}

int main(){
long int i,j,lp=0;
for(i=999;i>99;i--)
	{
	for(j=999;j>99;j--)
		{
		if(ispali(i*j)==0 && i*j>lp)
			{ lp=i*j;
			}
		}
	}
cout<<lp<<endl;
}
