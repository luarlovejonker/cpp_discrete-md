
//proj2.cpp
#include <iostream>
using namespace std;

char *GetNum(char *src, char *buf)
{
    while (*src != '\0')
    {
        if (isdigit(*src))
            break;
        src++;
    }
    if (*src == '\0')
        //********found********
        return NULL;
    while (*src != '\0' && isdigit(*src))
    {
        //********found********
        *buf = *src;
        buf++;
        src++;
    }
    *buf = '\0';
    return src;
}

int main()
{
    char str[100], digits[20];
    cin.getline(str, 100);
    char *p = str;
    int i = 1;
    while ((p = GetNum(p, digits)) != NULL)
    {
        cout << "Digit string " << i << " is " << digits << endl;
        //********found********
        i++;
    }
    return 0;
}
