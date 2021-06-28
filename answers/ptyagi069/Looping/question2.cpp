#include <iostream>
using namespace std;
int main()
{
 
  int i,j,n;
  char initial = 'A', temp = 'A';

  cin>>n;
 
   for(i=n;i>=1;i--)
     {  initial = temp + i-1 ; 
         for(j=i;j<=n;j++)
         {
             cout<<initial;
             initial++;
         }
 
         cout<<endl;
     }
 
  return 0;
}
