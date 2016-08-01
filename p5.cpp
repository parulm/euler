#include <iostream>
using namespace std;
int main(){
long int n,i;
for (n=20;;n++)
	{
	int flag=0;
	for(i=1;i<=20;i++)
		{
		if(n%i!=0)
			flag=1;
		}
	if(flag==0)
		break;
	}
cout<<"The smallest good number is: "<<n<<endl;
}
