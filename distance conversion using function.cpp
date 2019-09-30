#include <iostream>
#include<stdlib.h>
using namespace std;
void convert(float&d,char&t,char ch)
{
   switch(ch)
   {
       case 'F':if(t=='I')
                {
                    d=d/12;
                    t='I';
                }
                break;
       case 'I':if(t=='F')
                {
                    d=d*12;
                    t='F';
                }
                break;
   }
}
int main()
{
    float d;
    char choice,type='F';
    cout << "Enter distance in feet:" ;
    cin>>d;
    cout << "\n Want to convert in feet or inches(F/I):" ;
    cout << "Enter your choice:" ;
    cin>>choice;
    switch(choice)
    {
        case 'F':convert(d,type,'F');
                break;
        case 'I':convert(d,type,'I');
                break;
    }
    cout<<"Distance="<<d<<""<<type<<"\n";
    return 0;
}
