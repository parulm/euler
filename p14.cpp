#include <iostream>
#include <time.h>
using namespace std;

int main(){
clock_t ti=clock();
long int large=0, count, seq, opt;
long int size[1000000];
for(long int i=1;i<1000000;i++)
{
count=0;
seq=i;
while(seq!=1)
	{
	if(seq%2==0)
		seq = seq/2;
	else
		seq = 3*seq+1;
	count++;
	if(seq<i)
		{count+=size[seq];break;}
	}
size[i]=count;
if(count>large)
	{large=count; opt=i;}
}
cout<<"Optimized value of starting point "<<opt<<" with length "<<large<<endl;
cout<<"Time taken to execute this program: "<<(double)(clock() - ti)/CLOCKS_PER_SEC<<endl;
}



/*long int collatz(long int n, long int a)
{
if(n==1)
	return a;
else {
	if(collatz(n-1,a)%2==0)
		return collatz(n-1,a)/2;
	else
		return (3*collatz(n-1,a)+1);
     }
}

int size_collatz(long int a)
{
int size=0;
while(1){
	size++;
	if(collatz(size,a)==1)
		break;
	}
return size;
}

int main(){
long int i;
int large=0;
for(i=90;i<100;i++)
	{
	if(size_collatz(i)>large)
		large=i;
	}
cout<<"The optimized starting number is "<<large<<endl;
}*/
