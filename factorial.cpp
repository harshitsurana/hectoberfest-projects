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
       {fact*=num;     //n!=n(n-1)(n-2)(n-3)(n-4).....(1)
   --num;
       }   //formula to reduce the number and multiply it with previous one
    cout<<"\n"<<"Factorial of"<<i<<"is:"<<fact;
    getch();
}
