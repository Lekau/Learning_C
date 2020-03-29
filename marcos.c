#include <unistd.h>
#define ONE "you have passed one argument \n"
#define TWO "You have passed two arguments \n"
#define NO "You have passed NO arguments \n"
#define TOO_MANY "You have passed more than 2 arguments \n"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *string)
{
    int i = 0;
    while (string[i] != '\0')
    {
        ft_putchar(string[i]);
        i++;
    }
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_putstr(ONE);
    }
    else if(argc == 3) 
    {
        ft_putstr(TWO);
    }
    else if (argc >= 4)
    {
        ft_putstr(TOO_MANY);
    }
    else 
    {
        ft_putstr(NO);
    }
    return (0);
}
