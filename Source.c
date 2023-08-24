#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define k (8.98755 * 1000000000) // Coulomb's constant

void intro(void);
void ohmsLaw(void);
void electricFieldIntensity(void);
void coulombsLaw(void);
void power(void);


int main()
{
    int choice;

    intro();

    do
    {
    choice = 0;

    printf("\n**********************************\n");
    printf("Please choose an option:\n");
    printf("1. Ohm's Law\n");
    printf("2. Electric Field Intensity\n");
    printf("3. Coulomb's Law Calculator\n");
    printf("4. Power\n");
    printf("5. Exit\n->");

    fflush(stdin);
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n---------------------------\n");
        printf("~Ohm's Law Calculator~\n");
        ohmsLaw();
        break;
    case 2:
        printf("\n---------------------------\n");
        printf("~Electric Field Intensity~\n");
        electricFieldIntensity();
        break;
    case 3:
        printf("\n---------------------------\n");
        printf("~Coulomb's Law Calculator~\n");
        coulombsLaw();
        break;

    case 4:
        printf("\n---------------------------\n");
        printf("~Power Calculator~\n");
        power();
        break;

    case 5:
        printf("\nThank you for using the program!\n");
        break;

    default:
        printf("\nPlease choose a valid option (1-3)\n");
        break;
    }

    } while (choice!=5);

	return 0;
}

void ohmsLaw(void)
{
    float V, I, R;
    char option;
    char choiceOL; // Choice for Ohm's Law
    int isValid;

    do
    {
        printf("Options:\n");
        printf("a. Voltage\n");
        printf("b. Current\n");
        printf("c. Resistance\n->");

        fflush(stdin);
        scanf("%c", &option);

        option = tolower(option);

        switch (option) {
            case 'a':
                do {
                    printf("Enter the current: ");
                    fflush(stdin);
                    isValid = scanf("%f", &I);
                } while (!isValid);

                do {
                    printf("Enter the resistance: ");
                    fflush(stdin);
                    isValid = scanf("%f", &R);
                } while (!isValid);

                V = I * R;  // Formula for voltage

                printf("-->The voltage is: %f", V);
                break;

            case 'b':
                do {
                    printf("Enter the voltage: ");
                    fflush(stdin);
                    isValid = scanf("%f", &V);
                } while (!isValid);

                do {
                    printf("Enter the resistance: ");
                    fflush(stdin);
                    isValid = scanf("%f", &R);
                } while (!isValid);

                I = V / R;  // Formula for current

                printf("-->The current is: %f", I);
                break;

            case 'c':
                do {
                    printf("Enter the voltage: ");
                    fflush(stdin);
                    isValid = scanf("%f", &V);
                } while (!isValid);

                do {
                    printf("Enter the current: ");
                    fflush(stdin);
                    isValid = scanf("%f", &I);
                } while (!isValid);

                R = V / I;  // Formula for resistance

                printf("-->The resistance is: %f", R);
                break;

            default:
                printf("Please choose a valid option (a-c)\n");
                break;
        }

        printf("\nDo you want to continue? (y/n): ");
        fflush(stdin);
        scanf("%c", &choiceOL);

        choiceOL = tolower(choiceOL);
    } while (choiceOL == 'y');
}
void electricFieldIntensity(void)
{
    float E, F, Q;
    char option;
    char choiceEFI; // Choice for Electric Field Intensity
    int isValid;

    do
    {
        printf("Options:\n");
        printf("a. Electric field intensity\n");
        printf("b. Force\n");
        printf("c. Charge\n->");

        fflush(stdin);
        scanf("%c", &option);

        option = tolower(option);

        switch (option) {
            case 'a':
                do {
                    printf("Enter the force: ");
                    fflush(stdin);
                    isValid = scanf("%f", &F);
                } while (!isValid);

                do {
                    printf("Enter the charge: ");
                    fflush(stdin);
                    isValid = scanf("%f", &Q);
                } while (!isValid);

                E = F / Q;  // Formula for electric field intensity

                printf("-->The electric field intensity is: %f", E);
                break;

            case 'b':
                do {
                    printf("Enter the electric field intensity: ");
                    fflush(stdin);
                    isValid = scanf("%f", &E);
                } while (!isValid);

                do {
                    printf("Enter the charge: ");
                    fflush(stdin);
                    isValid = scanf("%f", &Q);
                } while (!isValid);

                F = E * Q;  // Formula for force

                printf("-->The force is: %f", F);
                break;

            case 'c':
                do {
                    printf("Enter the electric field intensity: ");
                    fflush(stdin);
                    isValid = scanf("%f", &E);
                } while (!isValid);

               do {
                    printf("Enter the force: ");
                    fflush(stdin);
                    isValid = scanf("%f", &F);
                } while (!isValid);

                Q = F / E;  // Formula for charge

                printf("-->The charge is: %f", Q);
                break;

            default:
                printf("Please choose a valid option (a-c)\n");
                break;
        }

        printf("\nDo you want to continue? (y/n): ");
        fflush(stdin);
        scanf("%c", &choiceEFI);

        choiceEFI = tolower(choiceEFI);
    } while (choiceEFI == 'y');
}

void coulombsLaw()
{
    float F, Q1, Q2, r;
    char option;
    char choiceCL; // Choice for Coulomb's Law
    int isValid;

    do {
        printf("Options:\n");
        printf("a. Force\n");
        printf("b. Charge 1\n");
        printf("c. Charge 2\n");
        printf("d. Distance\n->");

        fflush(stdin);
        scanf("%c", &option);

        option = tolower(option);

        switch (option) {
            case 'a':
                do {
                    printf("Enter the charge 1 (in Coulombs): ");
                    fflush(stdin);
                    isValid = scanf("%f", &Q1);
                } while (!isValid);

                do {
                    printf("Enter the charge 2 (in Coulombs): ");
                    fflush(stdin);
                    isValid = scanf("%f", &Q2);
                } while (!isValid);

                do {
                    printf("Enter the separation between two charges (in metres): ");
                    fflush(stdin);
                    isValid = scanf("%f", &r);
                } while (!isValid);

                F = (k * (Q1 * Q2)) / (r * r);  // Formula for force

                printf("-->The force of repulsion/attraction between two charges is: %f", F);
                break;

            case 'b':
                do {
                    printf("Enter the force: ");
                    fflush(stdin);
                    isValid = scanf("%f", &F);
                } while (!isValid);

                do {
                    printf("Enter the charge 2: ");
                    fflush(stdin);
                    isValid = scanf("%f", &Q2);
                } while (!isValid);

                do {
                    printf("Enter the separation between two charges: ");
                    fflush(stdin);
                    isValid = scanf("%f", &r);
                } while (!isValid);

                Q1 = (F * (r * r)) / (k * Q2);  // Formula for charge 1

                printf("-->The charge 1 is: %f", Q1);
                break;

            case 'c':
                do {
                    printf("Enter the force: ");
                    fflush(stdin);
                    isValid = scanf("%f", &F);
                } while (!isValid);

                do {
                    printf("Enter the charge 1: ");
                    fflush(stdin);
                    isValid = scanf("%f", &Q1);
                } while (!isValid);

                do {
                    printf("Enter the separation between two charges: ");
                    fflush(stdin);
                    isValid = scanf("%f", &r);
                } while (!isValid);

                Q2 = (F * (r * r)) / (k * Q1);  // Formula for charge 2

                printf("-->The charge 2 is: %f", Q2);
                break;

            case 'd':
                do {
                    printf("Enter the force: ");
                    fflush(stdin);
                    isValid = scanf("%f", &F);
                } while (!isValid);

                do {
                    printf("Enter the charge 1: ");
                    fflush(stdin);
                    isValid = scanf("%f", &Q1);
                } while (!isValid);

                do {
                    printf("Enter the charge 2: ");
                    fflush(stdin);
                    isValid = scanf("%f", &Q2);
                } while (!isValid);

                r = sqrt((k * (Q1 * Q2)) / F);  // Formula for distance

                printf("-->The distance between two charges is: %f", r);
                break;

            default:
                printf("Please choose a valid option (a-d)\n");
                break;
        }

        printf("\nDo you want to continue? (y/n): ");
        fflush(stdin);
        scanf("%c", &choiceCL);

    } while (choiceCL == 'y');
}

void power(void)
{
    float P, V, I;
    char option;
    char choiceP; // Choice for Power
    int isValid;

    do {
        printf("Options:\n");
        printf("a. Power\n");
        printf("b. Voltage\n");
        printf("c. Current\n->");

        fflush(stdin);
        scanf("%c", &option);

        option = tolower(option);

        switch (option) {
            case 'a':
                do {
                    printf("Enter the voltage: ");
                    fflush(stdin);
                    isValid = scanf("%f", &V);
                } while (!isValid);

                do {
                    printf("Enter the current: ");
                    fflush(stdin);
                    isValid = scanf("%f", &I);
                } while (!isValid);

                P = V * I;  // Formula for power

                printf("-->The power is: %f", P);
                break;

            case 'b':
                do {
                    printf("Enter the power: ");
                    fflush(stdin);
                    isValid = scanf("%f", &P);
                } while (!isValid);

                do {
                    printf("Enter the current: ");
                    fflush(stdin);
                    isValid = scanf("%f", &I);
                } while (!isValid);

                V = P / I;  // Formula for voltage

                printf("-->The voltage is: %f", V);
                break;

            case 'c':
                do {
                    printf("Enter the power: ");
                    fflush(stdin);
                    isValid = scanf("%f", &P);
                } while (!isValid);

                do {
                    printf("Enter the voltage: ");
                    fflush(stdin);
                    isValid = scanf("%f", &V);
                } while (!isValid);

                I = P / V;  // Formula for current

                printf("-->The current is: %f", I);
                break;

            default:
                printf("Please choose a valid option (a-c)\n");
                break;
        }

        printf("\nDo you want to continue? (y/n): ");
        fflush(stdin);
        scanf("%c", &choiceP);

        
    } while (choiceP == 'y');
}

void intro(void)
{
    // ASCII art - Regular Calculator by Jeremy J. Olson
    printf(" _____________________\n");
    printf("|  _________________  |\n");
    printf("| | AD          0.7 | |\n");
    printf("| |_________________| |\n");
    printf("|  ___ ___ ___   ___  |\n");
    printf("| | 7 | 8 | 9 | | + | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 4 | 5 | 6 | | - | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 1 | 2 | 3 | | x | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | . | 0 | = | | / | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("|_____________________|\n");
    printf("\n\n");

    printf("Welcome to the Physics Calculator by Akshat Dodhiya!\n");
    printf("This program will help you calculate the following:\n");
    printf("1. Ohm's Law - Using Voltage, Current and Resistance as variables\n");
    printf("2. Electric Field Intensity - Using Force, Charge and Distance as variables\n");
    printf("3. Coulomb's Law - Using Force, Charge 1, Charge 2 and Distance as variables\n");
    printf("4. Power - Using Power, Voltage and Current as variables\n");

}