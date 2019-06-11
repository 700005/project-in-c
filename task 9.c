#include<stdio.h>

main()
{
    int n,i,f=1;
    
    
    printf("Enter the no.:-");
    scanf("%d",&n);
    
    
    printf("--------------------------------");
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    
    printf("\nFactorial of %d is %d",n,f);
}
