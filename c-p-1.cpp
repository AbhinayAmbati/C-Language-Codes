#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Element {
    char name[50];
    char symbol[3];
    int atomicNumber;
    float atomicWeight;
    char atomicConfig[50];
};

void displayMenu();
void addElement();
void exploreElements();
void searchByName();
void searchBySymbol();
void searchByAtomicNumber();
void searchByAtomicWeight();

int main() {
    int choice;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addElement();
                break;
            case 2:
                exploreElements();
                break;
            case 3:
                printf("Exiting the Periodic Table Generator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}

void displayMenu() {
    printf("\nPeriodic Table Generator\n");
    printf("**********************************************\n");
    printf("Enter the corresponding Number:\n");
    printf("1. Add New Element Information\n");
    printf("2. Explore\n");
    printf("3. Quit\n");
}

void addElement() {
    struct Element newElement;

    printf("Enter the following information for the new element:\n");
    printf("Name: ");
    scanf("%s", newElement.name);
    printf("Symbol: ");
    scanf("%s", newElement.symbol);
    printf("Atomic Number: ");
    scanf("%d", &newElement.atomicNumber);
    printf("Atomic Weight: ");
    scanf("%f", &newElement.atomicWeight);
    printf("Atomic Configuration: ");
    scanf("%s", newElement.atomicConfig);

    FILE *file = fopen("elements.txt", "a");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "%s %s %d %.3f %s\n", newElement.name, newElement.symbol,
            newElement.atomicNumber, newElement.atomicWeight, newElement.atomicConfig);

    fclose(file);
    printf("Element added successfully!\n");
}

void exploreElements() {
    int exploreChoice;

    do {
        printf("\nPeriodic Table Generator\n");
        printf("**********************************************\n");
        printf("Enter the corresponding Number:\n");
        printf("1. Search by Name\n");
        printf("2. Search by Symbol\n");
        printf("3. Search by Atomic Number\n");
        printf("4. Search by Atomic Weight\n");
        printf("5. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &exploreChoice);

        switch (exploreChoice) {
            case 1:
                searchByName();
                break;
            case 2:
                searchBySymbol();
                break;
            case 3:
                searchByAtomicNumber();
                break;
            case 4:
                searchByAtomicWeight();
                break;
            case 5:
                printf("Returning to the main menu.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (exploreChoice != 5);
}

void searchByName() {
    char searchName[50];
    printf("Enter the name of the element: ");
    scanf("%s", searchName);

    FILE *file = fopen("elements.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    struct Element currentElement;
    int found = 0;

    while (fscanf(file, "%s %s %d %f %s\n", currentElement.name, currentElement.symbol,
                  &currentElement.atomicNumber, &currentElement.atomicWeight,
                  currentElement.atomicConfig) != EOF) {
        if (strcmp(currentElement.name, searchName) == 0) {
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nAtomic Config: %s\n",
                   currentElement.name, currentElement.symbol, currentElement.atomicNumber,
                   currentElement.atomicWeight, currentElement.atomicConfig);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }

    fclose(file);
}

void searchBySymbol() {
    char searchSymbol[3];
    printf("Enter the symbol of the element: ");
    scanf("%s", searchSymbol);

    FILE *file = fopen("elements.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    struct Element currentElement;
    int found = 0;

    // Search for the element by symbol
    while (fscanf(file, "%s %s %d %f %s\n", currentElement.name, currentElement.symbol,
                  &currentElement.atomicNumber, &currentElement.atomicWeight,
                  currentElement.atomicConfig) != EOF) {
        if (strcmp(currentElement.symbol, searchSymbol) == 0) {
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nAtomic Config: %s\n",
                   currentElement.name, currentElement.symbol, currentElement.atomicNumber,
                   currentElement.atomicWeight, currentElement.atomicConfig);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }

    fclose(file);
}

void searchByAtomicNumber() {
    int searchAtomicNumber;
    printf("Enter the atomic number of the element: ");
    scanf("%d", &searchAtomicNumber);

    FILE *file = fopen("elements.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    struct Element currentElement;
    int found = 0;

    
    while (fscanf(file, "%s %s %d %f %s\n", currentElement.name, currentElement.symbol,
                  &currentElement.atomicNumber, &currentElement.atomicWeight,
                  currentElement.atomicConfig) != EOF) {
        if (currentElement.atomicNumber == searchAtomicNumber) {
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nAtomic Config: %s\n",
                   currentElement.name, currentElement.symbol, currentElement.atomicNumber,
                   currentElement.atomicWeight, currentElement.atomicConfig);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }

    fclose(file);
}

void searchByAtomicWeight() {
    float searchAtomicWeight;
    printf("Enter the atomic weight of the element: ");
    scanf("%f", &searchAtomicWeight);

    FILE *file = fopen("elements.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    struct Element currentElement;
    int found = 0;


    while (fscanf(file, "%s %s %d %f %s\n", currentElement.name, currentElement.symbol,
                  &currentElement.atomicNumber, &currentElement.atomicWeight,
                  currentElement.atomicConfig) != EOF) {
        if (currentElement.atomicWeight == searchAtomicWeight) {
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nAtomic Config: %s\n",
                   currentElement.name, currentElement.symbol, currentElement.atomicNumber,
                   currentElement.atomicWeight, currentElement.atomicConfig);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }

    fclose(file);
}
