#include <stdio.h>

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



/**
 * @author natgharz
 */