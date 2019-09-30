#include <iostream>
#include<math.h>
using namespace std;

int main()
{int num,rem;
    cout << "Enter a number:" ;
    cin>>num;
    rem=num%2;
    if(rem==0)
        cout<<"It is a even number.";
    else
        cout<<"It is a odd number.";
    return 0;
}
