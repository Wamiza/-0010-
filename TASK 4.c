#include <stdio.h>

int main() {
    float fuelaverage, fuelconsumed, totalcost;
    int distance = 1207;
    int forwardPrice = 118;
    int returnPrice = 123;

        printf("Please enter the car fuel average (positive number only):");
        scanf("%f", &fuelaverage);
        if(fuelaverage <= 0) {
            printf("Error: Fuel average must be a positive number.\n");
            return 0;
        }

    fuelconsumed = (distance * 2) / fuelaverage; 
    totalcost = (distance / fuelaverage * forwardPrice) + (distance / fuelaverage * returnPrice);

    printf("\nTotal fuel consumed for the trip is %f\n", fuelconsumed);
    printf("Total cost for the trip is %f\n", totalcost);

    return 0;
}