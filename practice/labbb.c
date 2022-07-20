#include<stdio.h>
#include<conio.h>
int main(){
int a[10],b[10],n,i,j,m;
int c[10];
printf("Enter the size of array A\n");
scanf("%d",&n);
printf("Enter the element of First array A\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
printf("Enter the size of array B\n");
scanf("%d",&m);

printf("Enter the elements of array B\n");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}

printf("A B OR\n");
{
for(i=0;i<n;i++)
if(a[i]+b[i] == 2)
{
c[i] ==0;
printf("%d %d %d", a[i],b[i],c[i]);
}
else{
c[i]=a[i]+b[i];
printf ("%d %d %d", a[i],b[i],c[i]);
printf("\n");
}}
printf("\n");
printf("A B AND\n");
for(i=0;i<n;i++)
{
c[i]=a[i]*b[i];
printf("%d %d %d",a[i], b[i], c[i]);

printf("\n");

}
printf("A !A\n");
for(i=0;i<=1;i++)
{
c[i] = 1-b[i];
if(b[i]==0)
{
printf("%d %d",b[i],c[i]);
printf("\n");
}
else
printf("%d %d",b[i], c[i]);

}
return 0;
}
