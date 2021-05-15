#include<iostream>
using namespace std;
int main()
{
	int a,b,low,lcm;
	cout<<"Enter the two number:";
	cin>>a>>b;
	low=(a<b)?a:b;
	while(1)
	{
	if(low%a==0&&low%b==0)
	{
	lcm=low;
	break;
    }
    low++;
   }
    cout<<"lcm ="<<low;
}
