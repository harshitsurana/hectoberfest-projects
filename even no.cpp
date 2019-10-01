#include <iostream>
#include<math.h>
using namespace std;

int main()
{int number,remainder;
    cout << "Enter a number:" ;
    cin>>number;
    remainder=number%2;
    if(remainder==0)
        cout<<"It is a even number.";
    else
        cout<<"It is a odd number.";
    return 0;
}
