#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main()
{
    int i,num,fact=1;
    cout << "Enter a number:";
    cin>>num;
    i=num;
    while(num)
       {fact*=num;
   --num;
       }
    cout<<"\n"<<"Factorial of"<<i<<"is:"<<fact;
    getch();
}
