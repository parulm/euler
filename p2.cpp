#include <iostream>
using namespace std;
int fibonacci(int n)
{
int r;
if(n==1|| n==0)
	r = 1;
else
	r = fibonacci(n-1) + fibonacci(n-2);
return r;
}


int main(){
int sum=0;
for(int i=0;;i++)
	{
	if(fibonacci(i)>4000000)
		break;
	else
		{
		if(fibonacci(i)%2==0)
			sum+=fibonacci(i);
		}
	}
cout<<"The sum of even terms is: "<<sum<<endl;
}
