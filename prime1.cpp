#include<iostream>
using namespace std;
int main()
{
	int n,flag=0;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		flag++;
		}
   }
   if(flag==2)
   {
   	cout<<"prime number";
   }
   else
   {
   	cout<<"not a prime number";
   }
}
