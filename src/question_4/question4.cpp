#include"question4.h"


bool test_config()
{
    return true;
}

int find_gcd(int num1, int num2)
{
    auto n1 = 0, n2 = 0, temp = 0;
    
    if(n2 > n1)
    {
    temp = n2;
    n2 = n1;
    n1 = temp;
    }

for(auto i = 1; i <= n2; i++)
{
    auto gcd = 0, not_gcd = 0;

    if(n1 % i == 0 && n2 % i == 0)
    {
    gcd = i;
    }
    else 
    {
    not_gcd  = -1;
    
    }
}
return 0;
}