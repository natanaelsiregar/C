#include <stdio.h>
 
int main()
{
	char option;
	float a, b, result;
	
	printf("Input a : "); scanf("%f", &a);
    printf("Input b : "); scanf("%f", &b);
  	
	printf("\n===== MENU ===== \n1. Penjumlahan \n2. Perkalian \n3. Pengurangan \n4. Pembagian\n:  "); 
    scanf("%d", &option);
  	
  	switch(option)
  	{
  		case 1:
  			result = a + b;
            printf("\nHasil = %.2f", result);
  			break;
  		case 2:
  			result = a * b;
            printf("\nHasil = %.2f", result);
  			break;  			
  		case 3:
  			result = a - b;
            printf("\nHasil = %.2f", result);
  			break;
			  
  		case 4:
  			result = a / b;
            printf("\nHasil = %.2f", result);
  			break;
        
		default:
			printf("\nOpsi Tidak Valid!");				    			
	}
	
  	return 0;
}



/**
 * @author natgharz
 */