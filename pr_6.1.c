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
Input:
Enter any string: hello


Output:
Given string is not a Palindrome.
*/


#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int i,n,c=0;
 
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);
 
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
 	 
     
}

