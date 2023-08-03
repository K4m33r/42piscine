#include <stdio.h>
int ft_is_prime(int nb)
{
    int b;
    b = nb;

    if (b < 2)
    {
        return(0);
    }
    int i;
    i = 2;
    while (b > i)
    {
        if (b % i == 0)
        {
            return(0);
        }
        i++;
        
    }
    return(1);
}

int main()
{
    printf("%d", ft_is_prime(16));
}