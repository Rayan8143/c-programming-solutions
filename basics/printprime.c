#include <stdio.h>

int main() {
  int n, c=0;
scanf("%d",&n);
for(int i=2 ; i<=n ; i++){
for(int j=1; j<=i ; j++){
if(j%i == 0) c++;
}
if(c==2) printf("%d ",i);
c=0;
}
return 0;
}
