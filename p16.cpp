//code did not work: needs a large int data type
#include <iostream>
#include <math.h>
#include <BigIntegerLibrary.h>
using namespace std;
int main(){
BigInteger n = pow(2,1000),sum=0;
//cout<<fixed<<n<<endl;
int i;
for(i=0;n!=0;i++)
	{
	cout<<fixed<<n<<endl;
	sum+=fmod(n,10);
	n=(n-fmod(n,10))/10;
	
	}
cout<<i<<" "<<sum<<endl;
cout<<fmod(4,3)<<endl;
}
