#include<stdio.h>
struct lib{
    char title[30];
    char author[30];
    char genre[15];
}b1;
main()
{
    printf("Enter book title:");
    scanf("%s",b1.title);
    printf("Enter author's name:");
    scanf("%s",b1.author);
    printf("Enter genre:");
    scanf("%s",b1.genre);
    printf("Book details:\n");
    printf("Title:%s\n",b1.title);
    printf("Author:%s\n",b1.author);
    printf("Genre:%s",b1.genre);
    return 0;
}
