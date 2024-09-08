#include <stdio.h>

int main() {
    float principle, rateofinterest, timeperiod, interest;

    printf("Please enter the principle amount (between 100 and 1000000): ");
    scanf("%f", &principle);
    if(principle < 100 || principle > 1000000) {
        printf("Invalid principle amount.\n");
        return 0;
    }

    printf("Please enter the rate of interest (between 5 and 10): ");
    scanf("%f", &rateofinterest);
    if(rateofinterest < 5 || rateofinterest > 10) {
        printf("Invalid rate of interest.\n");
        return 0;
    }

    printf("Please enter the time period in years (between 1 and 10): ");
    scanf("%f", &timeperiod);
    if(timeperiod < 1 || timeperiod > 10) {
        printf("Invalid time period.\n");
        return 0;
    }

    interest = (principle * rateofinterest * timeperiod) / 100;

    printf("The interest is: %f\n", interest);

    return 0;
}