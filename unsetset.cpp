#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,pos;
    cout<<"Enter the number to find bit position:";
    cin>>num;
    cout<<"Enter the bit position to unset:";
    cin>>pos;
num=num^(1<<(pos-1));
cout<<"Unset bits:"<<num;

}
