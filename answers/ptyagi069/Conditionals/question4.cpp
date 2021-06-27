#include<iostream>
using namespace std;
int main()
{
    double x , y;
    cin>>x;
    cout<<" ";
    cin>>y;
    cout<<endl;

    if(x>0 && y>0)
    {
        cout<<"Quadrant 1" ;
    }
        else if(x<0 && y>0)
        {
            cout<<"Quadrant 2";
        }
            else if(x<0 && y<0)
            {
                cout<<"Quadrant 3";
            }
                else if(x>0 && y<0)
                {
                    cout<<"Quadrant 4";
                }
                    else if (x==0 && y==0)
                    {
                        cout<<"Origin";
                    }
                        else if (x==0 && y!= 0)
                        {
                            cout<<"Y-Axis";
                        }
                            else if (x!=0 && y==0)
                            {
                                cout<<"X-Axis";
                            }
return 0;
}


