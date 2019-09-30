#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <process.h>
using namespace std;

int main()
{
    char ch,ch1;
    float a,area,peri,l,b,diagonal;
    cout << "Mathematical Operator World:" <<"\n";
    cout << "1.Area" <<"\n";
    cout << "2.Perimeter" <<"\n";
    cout << "3.Diagonal" <<"\n";
    cout << "4.Other Information" <<"\n";
    cout << "5.About Us" <<"\n";
    cout << "6.Exit" <<"\n";

    cout << "\n Enter Your Choice:";
    do
    {
        cin>>ch;
        if(ch=='1'||ch=='2'||ch=='3')
            {cout<<"\nEnter the length of rectangle:";
            cin>>l;
        cout<<"Enter the breadth of rectangle:";
        cin>>b;}
        switch(ch)
        {
            case'1':area=l*b;
                    cout<<"Area Is : "<<area<<"\n";
                    break;
            case'2':peri=2*(l+b);
                    cout<<"Perimeter Is : "<<peri<<"\n";
                    break;
            case'3':diagonal=sqrt((l*l)+(b*b));
                    cout<<"Diagonal Is : "<<diagonal<<"\n";
                    break;
            case'4':cout<<"\n1.Rectangle has four sides."<<"\n";
                    cout<<"\n2.Rectangle has equal diagonals."<<"\n";
                    cout<<"\n3.Rectangle has four angles each equal to 90."<<"\n";
                    cout<<"\n4.Area of Rectangle is = length*breadth."<<"\n";
                    cout<<"\n5.Perimeter of Rectangle is = 2*(length+breadth)."<<"\n";
                    cout<<"\n6.Diagonal of Rectangle is = squareroot of [(length)^2 + (breadth)^2]."<<"\n";
                    break;
            case'5':cout<<"\n About Us: "<<"\n";
                     cout<<"\n Rectangle Operator World "<<"\n";
                     cout<<" Version 1.09 "<<"\n";
                     cout<<"\n Harshit Surana"<<"\n";
                     cout<<" Eatta Soft Pvt.Ltd. "<<"\n";
                     cout<<"\n THANKS "<<"\n";
                    break;

             case '6': cout<<"\n Exiting.........";
                        cout<<" Press any key (Recommended-h) to exit"<<"\n";
                        exit(0);
            default :cout<<"Wrong Choice"<<"\n";
                    cout<<"Enter a valid one."<<"\n";
                    break;
        }
    cout<<"\n Want to enter more(Y/N)?:";
    cin>>ch1;
    if(ch1=='y'||ch1=='Y')
        cout<<"Again enter your choice : (1-6):";
    }
    while(ch1=='y'||ch1=='Y');


    return 0;
}
