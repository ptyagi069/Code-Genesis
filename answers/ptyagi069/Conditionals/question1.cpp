#include <iostream>
using namespace std;
int main() 
{
int basic;
char grade ; 
float allow;

 cin>> basic;
 cout<<" ";
 cin>>grade;
 cout<<endl;

 float hra = (0.2) *(float) basic ;
 float da = (0.5) *(float) basic ;
 float pf = (0.11) *(float) basic ;
 
 if(grade=='A'|| grade=='a')
    allow = 1700;

 else if(grade=='B'|| grade=='b')
    allow = 1500;
 
 else 
    allow=1300;

float totalsalary = ((float) basic + hra + da + allow)-pf;

 cout<<totalsalary;

 return 0; 
}