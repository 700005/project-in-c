#include<stdio.h>

main()
{
    char firstname[200]={'\0'};
    char lastname[100]={'\0'};
    char c[10]={" "};
    
    printf("\nEnter your first name :-");
    scanf("%s",firstname);
    printf("\nEnter your last name :-");
    scanf("%s",lastname);
    
    
    strcat(firstname,c);
    strcat(firstname,lastname);
    
    
    printf("----------------------------------\n");
    printf("Your full name is %s", firstname);
    
}
