#include <stdio.h>

int sumOfTwo(int a ,int  b);
int maxOfThree(int int1,int int2,int int3);
char* monthName(int a);
void allEvenNums();
void sumOdds();

int main()
{
	int int1, int2, int3, sum, max, month;
	printf("Enter an integer 1: ");
	scanf("%d", &int1);
	printf("Enter an integer 2: ");
	scanf("%d", &int2);
	printf("Enter an integer 3: ");
	scanf("%d", &int3);
	printf("Input a number between 1 to 12 to get the month name: ");
	scanf("%d", &month);
	
	sum = sumOfTwo(int1, int2);
	max = maxOfThree(int1 ,int2, int3);
	char* nameStr = monthName(month);
	printf("Sum of the first 2 integers: %d\n",sum);
	printf("Max value of these 3 integers: %d\n",max);
	printf("The month you entered is: %s\n", nameStr);
	allEvenNums();
	sumOdds();
	return 0;
}
//1
int sumOfTwo(int a ,int  b){
	return a+b;
}
//2
int maxOfThree(int int1,int int2,int int3)
{
	if(int1 > int2 && int1 > int3)
		return int1;
	else if(int2 > int1 && int2 > int3)
		return int2;
	else
		return int3;
}
//3
char* monthName(int a){
	if(a == 1)
		return "January";
	else if(a == 2)
		return "February";
	else if(a == 3)
		return "March";
	else if(a == 4)
		return "April";
	else if(a == 5)
		return "May";
	else if(a == 6)
		return "June";
	else if(a == 7)
		return "July";
	else if(a ==8)
		return "August";
	else if(a == 9)
		return "September";
	else if(a == 10)
		return "October";
	else if(a == 11)
		return "November";
	else if(a == 12)
		return "December";								
}

//4
void allEvenNums(){
	int arr[25];
	int i; 
	int loop;
	printf("Array of even numbers between 1 and 50:");
	for(i = 1; i <= 50; i++){
		if(i % 2 == 0)
			arr[i/2-1] = i;
	}
	for(loop = 0; loop < 25; loop++){
		printf(" %d ", arr[loop]);
	}
}
//5
void sumOdds(){
	int arr[5] ,n1 ,n2 ,n3 , n4, n5 ,c;
	int n = 5;
	int total = 0;
	printf("\nEnter %d elements: \n", n);	
	for (c = 0; c < n; c++)
    	scanf("%d", &arr[c]);
    for ( c = 0; c < 5; c++){
    	if (arr[c] % 2 == 1 )
    		total += arr[c];
	}
	printf("Sum of odd numbers: %d ", total);
}








