#include <stdio.h>


int isLeap(int year) {
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}


int isValidDate(int d, int m, int y) {

    if(y < 1) return 0;              
    if(m < 1 || m > 12) return 0;   

    int maxDays;

    switch(m) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            maxDays = 31;
            break;

        case 4: case 6: case 9: case 11:
            maxDays = 30;
            break;

        case 2:
            if(isLeap(y))
                maxDays = 29;
            else
                maxDays = 28;
            break;
    }

    if(d >= 1 && d <= maxDays)
        return 1;
    return 0;
}

int main() {
    int day, month, year;

    printf("Enter date Month year ");
    scanf("%d %d %d",&day,&month,&year);

    if(isValidDate(day, month, year))
        printf("Valid date\n");
    else
        printf("Invalid date\n");

    return 0;
}
