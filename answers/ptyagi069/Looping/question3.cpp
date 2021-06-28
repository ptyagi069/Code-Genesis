#include<iostream>
using namespace std;

int main ()
{
    int rows, i,space ,symbol;
    cout<<" \n Enter the number of rows ";
    cin>>rows;
    for ( i = 1 ; i<= rows ; i++)
        
        {   // for space
            for(space =1  ; space <= rows - i ; space ++ )
                {
                    cout<<" " ;
                }
            //for symbol
            for( symbol=1 ; symbol <= ((2 * i) -1) ; symbol++ )                  
              {
                cout<<"*";
             }
            cout<<endl;

        }

    for ( i=1 ; i<= rows - 1; i++)
    {
        // for space
        for ( space = 1; space<= i; space ++)
        cout<<" ";
        //for symbol
        for (space =1 ; space <= ( 2 * ( rows - i) - 1) ; space++  )
        cout<<"*";

        
        cout<<endl;
        
    }
        
return 0;

}