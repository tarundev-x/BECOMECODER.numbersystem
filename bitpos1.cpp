#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,pos;
    cout<<"Enter the number to find bit position:";
    cin>>num;
    cout<<"Enter the bit position to set:";
    cin>>pos;

        if(num&(1<<(pos-1)))
            cout<<"bit is set";

        else
            cout<<"not set";
        return 0;
}
