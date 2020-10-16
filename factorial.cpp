#include <bits/stdc++.h>
using namespace std;

long long int factorial(int n){
    if (n==1) return 1;
    return n*factorial(n-1);
}

int main()
{
    int i,num;
    cout << "Enter a number whose factorial need to be calculated: ";
    cin>>num;
    cout<<"\n"<<"Factorial of "<<num<<" is: "<<factorial(num)<<endl;
    return 0;
}
