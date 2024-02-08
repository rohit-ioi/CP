#include<stdio.h>
#include<string.h>

int stringLength(char *str)
{
    static int length=0;
    if(*str!=NULL)
    {
        length++;
        stringLength(++str);
    }
    else
    {
        return length;
    }
}


int main(){
    char str[100];
    printf("Enter the string: ");
    gets(str);
    int length;
    length = strlength(str);
    printf("The length of the string is %d", length);
    return 0;
}