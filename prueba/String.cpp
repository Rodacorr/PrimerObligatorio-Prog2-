#include "String.h"

int strlar (strings str)
{
    int i=0, a=0;
    do
    {
        if (str[i]!='\0')
        {
            a++;
            i++;
        }

    }
    while (i<MAX-1 && str[i]!='\0');
    return a-1;
}
void print (strings str)
{
    int i=0;
    do
    {
        printf("%c",str[i]);
        i++;
    }
    while (i<MAX-1 && str[i]!= '\0');
}


void scan(strings &str)
{
    int i=0;
    char c;
    scanf("%c",&c);
    str[i]=c;
    i=1;
    while(c != '\n' && i < MAX - 1)
    {
        scanf("%c",&c);
        str[i]=c;
        i++;
    }
    str[i]='\0';
}


boolean strmen (strings str, strings str2)
{
    int i=0;
    boolean alf;
    alf=FALSE;

    while(alf!=FALSE && str2[i]!='\0' && str[i]!='\0');
    {
        if (str[i]<=str2[i])
            alf=TRUE;
        else
            i++;
    }
    return alf;
}

boolean streq (strings str, strings str2)
{
    int i=0;
    boolean igual;
    igual = TRUE;
    do
    {
        if (str[i]!=str2[i])
            igual=FALSE;
        i++;
    }
    while(igual!=TRUE && i<MAX-1);
    return igual;
}

void strcop (strings str, strings &str2)
{
    int i=0;
    do
    {
        str2[i]=str[i];
        i++;
    }
    while(str[i]!='\0');
    str2[i]='\0';
}

void strcon (strings &str, strings str2)
{
    int i=0,j=0;
    i = strlar(str);
    do
    {
        str[i]=str2[j];
        j++;
        i++;
    }
    while(str2[j]!='\0');
    str[i]='\0';
}

void strswap(strings &str, strings &str2)
{
    int i=0;
    strings str3;
    do
    {
        if (str[i]!='\0')
            str3[i]=str[i];
        if (str[i]!='\0')
            str[i]=str2[i];
        if (str2[i]!='\0')
            str2[i]=str3[i];
        i++;
    }
    while(i<MAX-1 || str[i]!='\0' && str2[i]!='\0');
    str2[i]='\0';
    str[i]='\0';

}
