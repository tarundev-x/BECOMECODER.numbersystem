#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	int i;
    cin>>num1>>num2;
    if(num1<num2)
    {
    	swap(num1,num2);
    }
 for(i=num1;i<=num1*num2;i++)
  {
  	cout<<i;
  	break;
  }
  i++;
}
