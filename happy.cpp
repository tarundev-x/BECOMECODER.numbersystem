#include<iostream>
using namespace std;
int main()
{
	int r,n,sum=0;
	cout<<"Enter the number";
	cin>>n;
	while(n>=10)
	{
		r=n%10;
		n=n/10;
		sum=sum+r*r;
	if(n==0)
	{
		n=sum;
		//sum=0;
	}
	if(n==1)
	{
		cout<<"happy number";
		break;
	}
    if(n!=1)
	{
		cout<<"Not a happy number";
		break;
	}
	
}
	
}
