#include<stdio.h>

main()
{
    int a,i,p;
    
    printf("Enter the no.:-");
    scanf("%d",&a);
    
    printf("---------------------------------");
    printf("\nThe multiplication table of %d is:-\n",a);
    for(i=1;i<=10;i++)
    {
        p=a*i;
        printf("\n%d*%d=%d",a,i,p);
    }
    printf("\n");
}
