#include <iostream>
using namespace std;
int main(){
long int sum=117;
//long int sum=0;
for(int i=20;i<1000;i++)
	{
	int temp=i, ones, tens, hundreds;
	ones=temp%10;
	if(ones==1||ones==2||ones==6)
		sum+=3;
	if(ones==4||ones==5||ones==9)
		sum+=4;
	if(ones==3||ones==7||ones==8)
		sum+=5;
	temp=temp/10;
	tens=temp%10;
	if(tens==4||tens==6||tens==5)
		sum+=5;
	if(tens==2||tens==3||tens==8||tens==9)
		sum+=6;
	if(tens==7)
		sum+=7;
	temp=temp/10;
	hundreds=temp%10;
	if(hundreds!=0)
		{
		sum+=10;
		ones=hundreds;
		if(ones==1||ones==2||ones==6)
			sum+=3;
		if(ones==4||ones==5||ones==9)
			sum+=4;
		if(ones==3||ones==7||ones==8)
			sum+=5;
		}
	
	}
cout<<sum<<endl;
}
