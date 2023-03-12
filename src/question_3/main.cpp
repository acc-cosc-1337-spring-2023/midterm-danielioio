#include "question3.h"

using std::cout; using std::cin;

int main()
{
     auto option = 'n';

    do
    {
    
    auto user_num = 0; auto result = 0;

    cout<<"Enter a number: ""\n";
    cin>>user_num;

    if(user_num >= 1 && user_num <= 60)

    {
        result = get_primes(user_num);
        cout<<"The list of prime numbers is: "<<result<<"\n";
        cout<<"Enter y to continue or n to exit: ""\n";
        cin>>option;
    }

    }
    while(option == 'y');
    
return 0;
}