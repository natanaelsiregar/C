#include <stdio.h>

/**
 * This program will classify body condition humans based on their body temperature. 
 * The program accepts one real number T, thermometer reading results, in degrees Celsius, 
 * and write to the text screen the results of the classification.
 * Input: nilai suhu
 * Proses:  T < 36 : Hipotermia
 *          36 <= T <= 37,5 : Normal
 *          37,5 < T <= 39 : Demam
 *          T > 39 : Hipertermia
 * Output: hasil klasifikasi
 * @author natgharz
 */

int main()
{
    float suhu;
    printf("Input nilai suhu : ");
    scanf("%f", &suhu);
    
    if (suhu < 36 ){
      printf("Hipotermia", suhu);
    }
    else if (suhu >= 36 && suhu <= 37.5 ) {
      printf("Normal", suhu);
    }
    else if (suhu > 37.5 && suhu <= 39) {
      printf("Demam", suhu);
    }
    else if (suhu > 39) {
      printf("Hipertermia", suhu);
    }
      
    return 0;
}