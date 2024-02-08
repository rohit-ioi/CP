#include<stdio.h>
#include<string.h>

void reverse( int n, char str[n]){
    if(n<0)  return;
    printf("%d\t",n);
    printf("%s\n",str);
    printf("%c", str[n]);
    reverse(n-1, str[n-1]);

}


int main(){
    char str[100];
    printf("Enter the string: ");
    gets(str);
    int  a = strlen(str);
    printf("%d\n",a);
    reverse(a , str);
    printf("%d\n",a);
    return 0;
}