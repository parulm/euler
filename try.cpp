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

int main(){
cout<<fixed<<sqrt(76576500)<<endl;
}
