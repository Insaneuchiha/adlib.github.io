#include <stdio.h>
int main()
{
    int m,n,p,q,i,j,k,a[10][10],b[10][10],c[10][10];
    printf("enter the number of rows and columns in matrix A");
    scanf("%d%d",&m,&n);
    printf("Enter the umber of rows and columns in matrix b");
    scanf("%d%d",&p,&q);
    printf("Enter the elemnets of matrix A");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("Enter the elemn-ents of matrix B");
    for(i=0;i<p;i++)
    for(j=0;j<q;j++)
    scanf("%d",b[i][j]);
    for(i=0;i<m;i++){
    for(j=0;j<q;j++){
    c[i][j]=0;
    for(k=0;k<p;k++)
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }}
    printf("Elements of matrix a are");
    for(i=0;i<m;i++){
    for(j=0;j<n;j++)
    printf("%d",a[i][j]);
    printf("/n");}
    printf("Elements of matrix b are");
    for(i=0;i<p;i++){
    for(j=0;j<q;j++)
    printf("%d",b[i][j]);
    printf("/n");}
    printf("Resultant vector is ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        printf("%d",c[i][j]);
        printf("\n")
    }
    return 0;
    


}
