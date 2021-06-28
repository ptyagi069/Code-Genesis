#include<iostream>
using namespace std;
int main()
{
    int num , temp , sqrt;
    cin>>num;
    
    sqrt = num/2;
    temp=0;

    while(sqrt!=temp)
    {
        temp=sqrt;
        sqrt= ((num/temp)+ temp ) / 2;
    }

    cout<<"Input: "<<num<<endl;
    cout<<"Output: "<<sqrt<<endl;
   
    return 0;
}