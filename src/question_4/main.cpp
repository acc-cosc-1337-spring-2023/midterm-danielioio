#include"question4.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
    auto result = 0; auto choice = 'n';

    do
    {
    
    auto num1 = 0, num2 = 0; 

    cout<<"Enter two numbers between 1 and 200: ""\n";
    cin>>num1>>num2;

    if(num1 >= 1 && num1 <= 200 && num2 >= 1 && num2 <= 200) 
    {
    result = find_gcd(num1, num2);
    cout<<"The Greatest Common Divisor is: "<<result<<"\n";
    cout<<"Enter y to continue or n to exit: ""\n";
    cin>>choice;
    }
    else
    {
        cout<<"The numbers are out of range.""\n";
    }
    }

    while(choice == 'y');
    

return result;

}