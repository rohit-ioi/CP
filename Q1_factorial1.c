#include<stdio.h>
int fac(int n){
    if(n==0 || n==1 ) return 1;
    return n * fac(n-1);
}

int main(){
    int x;
    printf("Enter the value of number: ");
    scanf("%d", &x);
    int ans = fac(x);
    printf("%d", ans);
    return 0;
}



