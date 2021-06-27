#include<iostream>
#include<string>
using namespace std;
int main()
{   
    int vol;
    string name , id;
    float charge;

    cout<<"Input Customer ID";
    getline(cin,id);
    cout<<"Input the name of the customer";
    getline(cin,name);
    cout<<"Input the litres consumed by the customer";
    cin>>vol;
    cout<<endl;
    
    if(vol<200)
    {charge= (float) vol*3;}
        else if (vol>=200 && vol<=400)
        {charge= (float) vol*3.35;}
            else if (vol>=400 && vol<=600)
            {charge=vol*4.80;}
                else if(vol>=600)
                {charge= (float) vol*5.10;}
    
    if(charge>1250)
    {
        charge = charge + ((0.15)*charge );
    }

    cout<<id<<endl<<name<<endl<<vol<<endl<<charge;
     
    return 0;
}