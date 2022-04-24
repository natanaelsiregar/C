#include <stdio.h>

/**
 * This program accepts as input two real numbers a and b, then the program displays to the screen four menu options to be selected by the user, namely:
 * 1. Summation
 * 2. Multiplication
 * 3. Subtraction
 * 4. Division
 * @author natgharz
 */

int main()
{
	char option;
	float a, b, result;
	
	printf("Input a : "); scanf("%f", &a);			// Input A
    printf("Input b : "); scanf("%f", &b);			// Input B
  	
	printf("\n===== MENU ===== \n1. Penjumlahan \n2. Perkalian \n3. Pengurangan \n4. Pembagian\n:  "); 
    scanf("%d", &option);
  	
  	switch(option)
  	{
  		case 1:
  			result = a + b;							// Summation
            printf("\nHasil = %.2f", result);
  			break;
  		case 2:
  			result = a * b;							// Multiplication
            printf("\nHasil = %.2f", result);
  			break;  			
  		case 3:
  			result = a - b;							// Subtraction
            printf("\nHasil = %.2f", result);
  			break;
			  
  		case 4:
  			result = a / b;							// Division
            printf("\nHasil = %.2f", result);
  			break;
        
		default:
			printf("\nOpsi Tidak Valid!");				    			
	}
	
  	return 0;
}