#include<stdio.h>

main()
{
	char s1[100],s2[100];
	
	printf("Enter a string:-");
	gets(s1);
	
	strcpy(s2,s1);
	strrev(s2);
	
	
	printf("---------------------------------");
	if(strcmpi(s1,s2)==0)
	printf("\n %s is a palindrome" , s1);
	else
	printf("\n %s is not a palindrome" , s1);

}
