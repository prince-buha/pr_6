/*
/*
Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
For example,
Input:
Enter any string: nayan

Output:
Given string is a Palindrome.

------------------------------------------------

For example,

Input
Enter any string: hello


Output:
Given string is not a Palindrome.
*/#include <string.h>
#include <string.h>
 
 main()
{
    char str[100];  
    int i,n,len=0;
 
    printf("Enter the string :- ");
    gets(str);
    n=strlen(str);
 
    for(i=0;i<2;i++)  
    {
    	if(str[i]==str[n-i-1])
    	len++;
 
 	}
 	if(len==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
 	 
     
}






