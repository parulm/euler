#include <iostream>
#include <math.h>
using namespace std;

bool ispyth(long int a, long int b, long int c)
{
bool r;
if(pow(c,2)==(pow(a,2)+pow(b,2)))
	r = true;
else 
	r = false;
return r;
}

int main(){
long int a,b,c;
for (a=1;a<1000;a++)
	{
	for(b=1;b<1000-a;b++)
		{
		c = 1000-(a+b);
		if(ispyth(a,b,c))
			goto label;
		}
	}
label: cout<<"That triplet is: "<<a<<", "<<b<<", "<<c<<"=>"<<a*b*c<<endl;
}
