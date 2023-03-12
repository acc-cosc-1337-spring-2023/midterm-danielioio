#include "question1.h"
#include<iostream>


bool test_config()
{
    return true;
}
string get_fib_sequence(int num)
{
    auto n = 0, num1 = 0, num2 = 1, next_num = 0;

    for(int i = 1; i <= n; i++)
    {
        next_num = num1 + num2;
        num1 = num2;
        num2 = next_num;
    }

return 0;
}