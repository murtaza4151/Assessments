# include<stdio.h>
int main()
{
    int a[10][10],b[10][10],ans[10][10];
    int size,i,j,num1;
    printf("\nenter the size of array=");
    scanf("%d",&size);
    printf("\nMatrix A");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("\nenter the array a [%d],[%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Matrix B");
      for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("\nenter the array b [%d],[%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n multiplication of matrix---------\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            ans[i][j]=a[i][j] * b[i][j];
            printf("%d ",ans[i][j]);
       }
       printf("\n");
    }
    return 0;
}