#include<iostream>
using namespace std;
int main()
{
	int n1,n2,hcf;
	cout<<"Enter  the number-"<<endl;
	cin>>n1>>n2;
	while(n1!=n2)
{
	if(n1>n2)
	{
		n1=n1-n2;
	}
	if(n2>n1)
	{
		n2=n2-n1;
	}
}
	cout<<"gcd of two number is:"<<n2;
}
