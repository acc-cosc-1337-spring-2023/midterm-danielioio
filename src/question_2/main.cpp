#include"question2.h"

using std::cout; using std::cin;

int main()
{
    auto choice = 'n';

    do
    {
        auto result = 0; auto user_num = 0;
        
        cout<<"Enter a number: ""\n";

        if(user_num >= 1 && user_num <= 15)
        {
            result = get_fib_number(user_num);
            cout<<"The Fibonacci number is: "<<result<<"\n";
            cout<<"Enter y to continue or n to exit: ""\n";
            cin>>choice;
        }  

    }
    while(choice == 'y');
    

return 0;
}