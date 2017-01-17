#include <stdio.h>


void main()
{
	char bNum[20] =
	{ 
		'0','1','2','3','4','5','6','7','8','9',
	'A','B','C','D','E','F','G','H','I','J'};

	int final_number[100];
	long int Num;
	int remain;
    int nextNum, base,index = 0;

	printf("enter number: ");
	scanf_s("%ld", &Num);
	//Num =  getchar();
	//printf("You've entered: ");
   // putchar(Num);
	//getchar(); // commeted out code dosse not work
	printf("\n\Enter base number: ");
	scanf_s("%d", &base);
	//base = getchar();
	//printf("\n\You've entered: ");
	//putchar(base);


	while (Num != 0)
	{
		remain = Num % base;
		Num = Num / base;
		final_number[index] = remain;
		++index;
	}
	getchar();

	index--;
	printf("\n\Converted = ");

	for (; index >= 0; index--)
	{
		printf("%c", bNum[final_number[index]]);
	}
	getchar();
	//return 0;
}