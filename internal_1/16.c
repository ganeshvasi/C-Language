//to print the pattern using numericals
#include<stdio.h>
int main()
 {
    int n,i,j,a=1;
    printf("Enter no.of lines \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}