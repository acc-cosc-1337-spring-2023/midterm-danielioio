#include"question1.h"
#include<iostream>

using std::cout; using std::cin;
using std::string;

int main()
{
    auto user_num = 0; string result = 0;
    auto choice = 'n';

    cout<<"Enter a number: ""\n";
    cin>>user_num;

    {
        for(int i = 0; i >= 1; i++)
        {
        
            if(i >= 1 && i <= 15)
        
            result = get_fib_sequence(user_num);
            cout<<"The Fibonacci sequence is: "<<result<<"\n";
            cout<<"Enter y to continue or n to exit: ""\n";
            cin>>choice;
        }  

    
    while(choice == 'y');
        
    }

    return 0;
}