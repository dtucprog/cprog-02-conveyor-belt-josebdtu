#include <stdio.h>

int MOTOR_CAPACITY = 12; // units are in kg

int main() {
    int motorCount, totalPackageWeight;

    printf("How many motors are carrying the packages?\n"); // our output to know the amount of motors
    scanf("%d", &motorCount); //input from user

    printf("How many kg of packages do we excpect?\n"); // our output to know the amount of mass
    scanf("%d", &totalPackageWeight); //input from user



    if (motorCount * MOTOR_CAPACITY  >= totalPackageWeight) { //checks if the amount of motors is able to carry the load
        printf("Yes! The conveyor belt can carry the packages.\n"); //prints out yes if its true
    } else {
        printf("No. The conveyor belt cannot carry the packages.\n"); //prints out no if its not
    }

    return 0; //end the program

}
