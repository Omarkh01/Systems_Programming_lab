#include <stdio.h>

int main()
{
	
	int n, m = 0 ;
	printf("Enter an integer: ");
	scanf("%d", &n);
	while (n != 0)
	{
	    m = m * 10;
	    m = m + n%10;
	    n = n/10;
	}
	
	if (n == m)
		printf("Palindrome!");
		
	else
		printf("Not palindrome!");	
	
	return 0;
}
