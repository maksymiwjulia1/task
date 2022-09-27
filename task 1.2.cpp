#include<iostream>
#include<math.h>
using namespace std;
void binary(int num)
{
    int a=num,k,y,amask;
    for(y=0;num>0;y++,num/=2);
    for(int i=y-1;i>=0;i--)
    {
        amask=1<<i;
        k=a&amask;
        k==0?cout<<"0":cout<<"1";
    }
}
int main()
{
    int choice,a,n;
    cout<<"***MAIN MENU***";
    cout<<"\n1.) Set a Bit\n2.) Clear a Bit\n3.) Check a bit\n4.) Toggle a Bit\nEnter your choice ";
    cin>>choice;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"Enter the value of n : ";
    cin>>n;
    switch(choice)
    {
    case 1:
        cout<<"Before Setting nth bit : ";
        binary(a);
        a=a|(1<<n);
        cout<<"\nAfter Setting nth bit : ";
        binary(a);
        break;
    case 2:
        cout<<"Before Clearing nth bit : ";
        binary(a);
        a=a&(~(1<<n));
        cout<<"\nAfter Clearing nth bit : ";
        binary(a);
        break;
    case 3:
        cout<<n<<"th bit is : ";
        a=a&(1<<n);
        a==0?cout<<0:cout<<1;
        break;
    case 4:
        cout<<"Before Toggling nth bit : ";
        binary(a);
        a=a^(1<<n);
        cout<<"\nAfter Toggling nth bit : ";
        binary(a);
        break;
    default:
        cout<<"Wrong choice";
    }
    return 0;
}
