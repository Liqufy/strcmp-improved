int len(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

int strcmpi(const char *dest, const char *str)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    {
        j = 0;
        while (dest[i + j] == str[j])
        {
            j++;
        }
        if (len(str) == j)
            return 1;
        i++;
    }
    return 0;
}

#include <iostream>

int main()
{
    const char *a = "iasdjh Discord qweee";
    const char *b = "discord";
    const char *c = "Discord";


    std::cout << strcmpi(a, b);
    std::cout << strcmpi(a, c) << std::endl;

    return 0;
}