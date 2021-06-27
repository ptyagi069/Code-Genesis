#include <iostream>
using namespace std;
int main() 
{
int dd,mm,yy;

cin>>dd;
cout<<endl;
cin>>mm;
cout<<endl;
cin>>yy;
cout<<endl;

if (dd>=0 && dd<=31)
{
if (mm==01)
cout<<"January "<<dd<<" "<<yy;
else if  (mm==02)
cout<<"February "<<dd<<" "<<yy;
else if  (mm==03)
cout<<"March "<<dd<<" "<<yy;
else if  (mm==04)
cout<<"April "<<dd<<" "<<yy;
else if  (mm==05)
cout<<"May "<<dd<<" "<<yy;
else if  (mm==06)
cout<<"June "<<dd<<" "<<yy;
else if  (mm==07)
cout<<"July "<<dd<<" "<<yy;
else if  (mm== 8)
cout<<"August "<<dd<<" "<<yy;
else if  (mm== 9)
cout<<"September "<<dd<<" "<<yy;
else if  (mm== 10)
cout<<"October "<<dd<<" "<<yy;
else if  (mm== 11)
cout<<"November "<<dd<<" "<<yy;
else if  (mm== 12)
cout<<"December "<<dd<<" "<<yy;
}
else
cout<<"Invalid Date";

return 0;
}



