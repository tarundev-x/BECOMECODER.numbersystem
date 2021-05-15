#include<iostream>
using namespace std;
int main()
{
	int space,n,no;
	cout<<"Enter te number of rows-";
	cin>>n;
    for(int i=0;i<n;i++)	
    {
    	for(space=0;space<(n-i);space++)
		{
			cout<<" ";
		}
		no=1;
		for(int j=0;j<=i;j++)
		{
			cout<<no<<" ";
			no=no*(i-j)/(j+1);
		}
	   cout<<"\n";
	}
}
