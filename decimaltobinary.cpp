//converting decimal to binary
#include<iostream>
using namespace std;
int main()
{
	int n,i,r,binary;
	int count=0;
	cin>>n;
	 i=0; 
    int a[32]={0};
	while(n!=0)
	{
		a[i]=n%2;//1001
		n=n/2;
		i++;//1+1+1+1
	}
	for(int j=i;j>=0;j--)
	{
		binary=a[j];
		cout<<binary;
	}
	
}
