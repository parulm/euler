#include <iostream>
#include <math.h>
using namespace std;

double fact(double n)
{
if(n==0||n==1)
	return 1;
else	
	return n*fact(n-1);
}

long int path(int n, int m)
{
if(n==1||m==1)
	return m+n;
//if(n==2&&m==1)
//	return 3;
return (path(n-1,m)+path(n,m-1));
}

int main(){
double n = fact(40)/(fact(20)*fact(20));
cout<<fixed<<n<<endl;
cout<<path(20,20)<<endl;
}
