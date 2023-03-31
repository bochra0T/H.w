#include<stdio.h>
void tri_i(int t[],int n) {
int i,j,b;
for (i = 1; i < n; i++) {
b= t[i];
j = i - 1;
while (j >= 0 && t[j] < b) {
t[j+1] = t[j];
j--;
}
t[j+1] = b;
}
}
int main(){
    int x=100,n;
int j,i,u[x];
printf(" entrer la la taill de u");
scanf("%d",&n);
printf(" les elem de u est \n");
for (i=0;i<n;i++){
printf(" u[%d]",i);
scanf("%d",&u[i]);
}
printf("*****");
printf("tri par insertion  ");
printf("*****");
printf("\n");
tri_i(u,n) ;
for (i=0;i<n;i++){
printf(" u[%d]=%d \n",i,u[i]);
}
return 0;
}