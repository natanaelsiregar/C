/**
 * @author natgharz
 * This program accepts Celsius input and converts it into reamur, fahrenheit, and kelvin.
 */
 
 #include<stdio.h>

int main()
{
	float celsius, fahrenheit, kelvin, reamur;

	// Input
	printf("Masukkan derajat celcius: ");
	scanf("%f", &celsius);		// temperature in Celsius

	// Process
    reamur = 0.8 * celsius;					// R = 4/5 * C
	fahrenheit = 1.8 * celsius + 32.0;		// F = 9/5 * C + 32
	kelvin = 273.15 + celsius;				// K = 273,15 + C
	
	// Output
    printf("%0.2f Celsius = %0.2f Reamur\n",celsius, reamur); 				// Print temperature in R
    printf("%0.2f Celsius = %0.2f Fahrenheit\n", celsius, fahrenheit);		// Print temperature in F
	printf("%0.2f Celsius = %0.2f Kelvin\n",celsius, kelvin);				// Print temperature in K
    
	return(0);
}
