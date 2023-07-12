int ft_fibonacci (int index)
{
    if (index < 0)
    {
        return (0);
    }
    if (index == 0)
    {
        return (0);
    }
    if (index == 1)
    {
        return (1);
    }
    return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

#include <stdio.h>

int main()
{
    printf ("%d", ft_fibonacci(0));
    printf ("%d", ft_fibonacci(1));
    printf ("%d", ft_fibonacci(1));
    printf ("%d", ft_fibonacci(2));
    printf ("%d", ft_fibonacci(3));
    printf ("%d", ft_fibonacci(4));
    printf ("%d", ft_fibonacci(5));
    printf ("%d", ft_fibonacci(6));
}
