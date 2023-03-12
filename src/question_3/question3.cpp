#include "question3.h"
#include<iostream>
#include<cmath>



bool test_config()
{
    return true;
}

bool is_prime(int num)
{
    auto x = sqrt(num); 
    double result = 0;

    for(int i = 2; i <= x; i++)
    {
        if(num % i == 0)
        result = true;

        else

        if(!(num % i))
        result = false;
    }

return result;
}

vector <int> get_primes(int num)
{
    for(auto i = 2; i < num; i++)
    {
        if(is_prime(i))
        get_primes.push_back(i);
    }
    
return 0;
    
}