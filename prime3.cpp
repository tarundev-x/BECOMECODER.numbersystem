#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
	     flag++;
		//break;
		}
   }
   if(flag!=0)
   {
   	cout<<"not prime number";
   }
   else
      {
   	    cout<<"prime number";
      }

}
