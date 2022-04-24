#include <stdio.h>

/**
 * This program receives from the user three integers namely date, month, and year, then display to the screen the date, month and year, for the next day (next day).
 * Day, Month, Year separated by -
 * Input: 31-12-2017, Output : 1-1-2018
 * Input: 28-02-2019, Output : 1-3-2019
 * Input: 15-02-2017, Output : 16-02-2017
 * @author natgharz
 */

int main()
{
    int day, month, year, kabisat;

    printf("Input date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &day, &month, &year);

    // Cek Kabisat
    if(year %400==0 || year %4==0 && year %100!=0)
        kabisat=1;
    else
        kabisat=0;
    
    // Februari
    if(month==2){
        if(kabisat==1){                                             // Februari kabisat
            if(day<29){
                day++;
            }
            else if(day==29){
                month++;
                day=1;
            }
            else{
                printf("Invalid Date!");
                return 0;
            }
        }

        else{                                                       // Februari bukan kabisat
            if(day<28){
                day++;
            }
            else if(day==28){
                month++;
                day=1;
            }
            else{
                printf("Invalid Date!");
                return 0;
            }
        }
    }

    // Bulan 30 hari
    else if(month==4 || month==6 || month == 9 || month==11){
        if(day<30){
            day++;
        }        
        else if(day==30){
            month++;
            day=1;
        }
        else{
            printf("Invalid Date!");
            return 0;
        }
    }

    // Bulan 31 hari
    else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        if(month==12 && day==31){                                   // Tahun Baru
            year++;
            day=1;
            month=1;
        }
        else if(day<31){
            day++;
        }
        else if(day==31){
            month++;
            day=1;
        }
        else{
            printf("Invalid Date!");
            return 0;
        }
    }

    if(month<=12){
        printf("The next day is: %d-%d-%d",day,month,year);
    }
    else{
        printf("Invalid Date!");
    }
}