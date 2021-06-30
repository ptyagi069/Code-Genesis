#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{   
    int n,target,i,j,k,l;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]<-109 && a[i]>109)
        {
            abort();
        }
    }
    
    cin>>target;

    if((n>=1 && n<=200)&& (target>= -109 && target<=109))
    {
        for(i=0 ; i<n-3 ;i++)
        {   
            for(j=i+1; j<n-2 ; j++)
            {
                for(k=j+1; k<n-1;k++)
                {
                    for(l=k+1;l<n ;l++)
                    {
                        if(a[i]+a[j]+a[k]+a[l] == target)
                        {
                            cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<a[l]<<" ";
                        }
                    }
                }

            }

        }
    }
    return 0;

}