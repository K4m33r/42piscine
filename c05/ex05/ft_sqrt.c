int ft_sqrt(int nb)
{
    long b;
    long index;
    
    b = nb;

    if (b <= 0)
    {
        return(0);
    }
    if (b == 1)
    {
        return(b);
    }
    index = 2;
    if (b >= 2)
    {
        while (index * index <= b)
        {
            if (index * index == b)
            {
                return(index);

            }
            index++;
        }

    }
    return(0);
}
#include <stdio.h>
int main()
{
    printf("%d", ft_sqrt(256));   
}