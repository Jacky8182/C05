int ft_is_prime(int nb)
{
    int i:
    int a;

    i = 1;
    r = 0;
    if (nb == 0 || nb == 1)
    {
        return (0)
    }
    while (i <= nb)
    {
        if (nb % i == 0)
        {
            a++;
        }
        i++;
    }
    if (a > 2)
    {
        return (0);
    }
    else    
    {
        return (1);
    }
}

int main()
{
    printf ("%d", ft_is_prime(0));
    printf ("%d", ft_is_prime(1));
    printf ("%d", ft_is_prime(5));
    printf ("%d", ft_is_prime(6));
    printf ("%d", ft_is_prime(7));
    printf ("%d", ft_is_prime(9));
}
