#include<iostream>
using namespace std;
int main()
{
	int r,n,res=0;
	int oc=0,ec=0,dig_count=0;
	cout<<"Enter the nuber:";
	cin>>n;
	while(n!=0)
	{
	r=n%10;
	n=n/10;
	dig_count++;
	if(r%2==0)
	{
		ec++;
	}
	else
	{
		oc++;
    }
	}
		cout<<ec<<oc;
	
    if(ec==dig_count)
	{
		cout<<"st even"<<endl;
	}
	else if(oc==dig_count)
	{
		cout<<"st 0dd"<<endl;
	}
	else
	{
		cout<<"mixed";
	}
return 0;
}
