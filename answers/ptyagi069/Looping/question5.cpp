#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp,dup=0;
    
    cin>>n;
    int a[n];
    
    for( i =0 ; i<n ; i++)
    {
        cin>>a[i];
    }  
        
    for(i=0; i<n ; i++)
    {
            for(j=i+1 ; j<n ;j++)
            {
                if(a[i]>a[j])
                {
                temp= a[i];
                a[i]= a[j];
                a[j] =temp;
                }

                if(a[i]==a[j])
                {
                    dup++;
                }   
            }
    }
    
    if(dup==0)
    {
    cout<<a[n-2];
    }
        else if(dup>0)
        {
            cout<<INT_MIN;
        }
    return 0;
}