#include<stdio.h>
void tri_b(int t[],int n) {
int i, j, a;
for (i = 0; i < n; i++) {
for (j = 0; j < n-i-1; j++) {
if (t[j] < t[j+1]) {
a = t[j];
t[j] = t[j+1];
t[j+1] = a;
}
}
}
}
int main(){
    int x=100;
int j,i,u[x],n;
printf("entrer la taill de u ");
scanf("%d",&n);
printf(" les elem de u est \n");
for (i=0;i<n;i++){
printf("u[%d]",i);
scanf("%d",&u[i]);
}
printf("*****");
printf("tri par bulles ");
printf("*****");
printf("\n");
tri_b(u,n);
for (i=0;i<n;i++){
printf(" u[%d]=%d \n",i,u[i]);
}
return 0;
}
