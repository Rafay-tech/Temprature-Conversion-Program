#include<stdio.h>
#include<conio.h>

int main()
{
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	
	// %d dispays the integer value of a character
	// %c displays the actual character
	printf("ASCII value of %c=%d",c,c);
	return 0;
}
