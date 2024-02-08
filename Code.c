#include<stdio.h>
int main(){

  int n; 
  scanf("%d", &n);
  int m;
  scanf("%d", &m);
  int k;
  scanf("%d", &k);
  int z;
  z = k/2;
  int a[n];
  int b[m];
  for(int i=0; i<n; i++){
      scanf("%d", &a[i]);
  }
  for(int j=0; j<m; j++){
      scanf("%d", &b[j]);
  }
  

  int count = 0;
  for(int i = 0; i<n ; i++){
        if(a[i]<k || a[i]==k)
        count++; 

  }
  
  if(count>z || count ==z){
    printf("Yes");
  }
  else printf("No");
 
 
  
}