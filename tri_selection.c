#include<stdio.h>
void tri_s(int t[],int n){
int a,i,j;
for (i=0;i<n;i++){
for (j=i+1;j<n;j++){
if(t[i]<t[j]){
a=t[i];
t[i]=t[j];
t[j]=a;
}
}
}}
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
printf("tri par selection");
printf("*****");
printf("\n");
tri_s(u,n);
for (i=0;i<n;i++){
printf(" u[%d]=%d \n",i,u[i]);
}
return 0;
}
