#include<iostream>
using namespace std;
int main()
{
    int n1 , n2, count=0, j; 
    cin>>n1;
    cin>>n2;
    for(int i=n1 ; i<= n2 ; i++,count=0)
    {   
        for(j=1 ; j<=i ; j++)
        {    
            if(i% j== 0)
            {
                count++;
            }

        }  
        if(count==2)
        {
            cout<<i<<" ";
        }
       
    }
    return 0;
}
