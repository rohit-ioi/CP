#include<stdio.h>

void numbers(int m, int n){
    if(m>n) return;
    printf("%d",m);
    numbers(m+1, n);
    return;

}


int main(){

    int fn;
    printf("Enter the first number: ");
    scanf("%d", &fn);
    int sn;
    printf("Enter the second number: ");
    scanf("%d", &sn);
    numbers(fn, sn);
   
    


    return 0;
}