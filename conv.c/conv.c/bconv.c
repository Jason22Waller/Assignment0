#include <stdio.h>


void main()
{
	char bNum[20] =
	{ 
		'0','1','2','3','4','5','6','7','8','9',
	'A','B','C','D','E','F','G','H','I','J'};

	// Variables
	int final_number[100];
	long int Num;
	int remain;
    int  base,index = 0;
	
	
		printf("enter number: "); 
		scanf_s("%ld", &Num); // Gets user input(expects an int) for a number to be converted
		printf("\n\Enter base number: ");
		scanf_s("%d", &base);// gets input for desired base


		while (Num != 0) 
		{
			remain = Num % base; // gets the remander of user input's
			Num = Num / base; // divides user input
			final_number[index] = remain; // sets the final number to the remainder
			index++;
		}
		getchar();// program ends if this isn't here 

		index--;
		printf("\n\Converted = ");

		for (; index >= 0; index--) //goes through the array and prints out the converted number
		{
			printf("%c", bNum[final_number[index]]);// breck point here to see how the number is outputed 
		}
		getchar(); // program ends if this isn't here 

	

		  // Jason Waller Assignment0
/*/

these samples helped me with the base conversion and getting input using scanf_s

https://www.cs.umd.edu/class/sum2003/cmsc311/Notes/Data/toBaseK.html
http://www.phanderson.com/C/baseprnt.html
ftp://gd.tuwien.ac.at/languages/c/programming-bbrown/c_016.htm
https://www.tutorialspoint.com/cprogramming/c_input_output.htm
*/

}