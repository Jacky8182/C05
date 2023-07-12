int ft_sqrt(int nb)
{
    int i;
    int count;

    i = 2;
    count = 0;   
    while (nb != 0)
    {
        if (nb < 0)
        {
            return (0);
        }
        nb = nb - i;
        i += 2;
        count++;
    }
    return (count);
    
}

#include <stdio.h>

int main()
{
    printf ("%d", ft_sqrt(16));
    printf ("%d", ft_sqrt(0));
    printf ("%d", ft_sqrt(1));
    printf ("%d", ft_sqrt(8));
    printf ("%d", ft_sqrt(5));
    printf ("%d", ft_sqrt(-4));
}
