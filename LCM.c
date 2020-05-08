#include <stdio.h>

int main(){
	
	int num1, num2, MAX;
	printf("Enter integer 1: ");
	scanf("%d", &num1);
	printf("Enter integer 2: ");
	scanf("%d", &num2);
	
	if (num1 > num2)
		MAX = num1;
	else
		MAX = num2;
	
	
	int i;
	for (i = MAX; i <= num1 * num2; i++){
		
		if (i % num1 == 0 && i % num2 == 0)
			printf("Least Common Multiplier is: %d", MAX);
			break;		
	}
	return 0;
}
