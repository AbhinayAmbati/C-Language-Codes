#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RESET   "\x1B[0m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"
#define WHITE   "\x1B[37m"

#define MAX_ELEMENTS 118
#define FILENAME "periodic_table.txt"

struct Element {
    char name[50];
    char symbol[3];
    int atomicNumber;
    float atomicWeight;
    char atomicConfig[50];
};

void printPeriodicTable(struct Element periodicTable[][18], int rows, int columns);
void addElement(struct Element *elements, int *elementCount);
void exploreElements(const struct Element *elements, int elementCount);
void searchByName(const struct Element *elements, int elementCount);
void searchBySymbol(const struct Element *elements, int elementCount);
void searchByAtomicNumber(const struct Element *elements, int elementCount);
void searchByAtomicWeight(const struct Element *elements, int elementCount);
void printElementDetails(const struct Element element);

int main() {
    struct Element periodicTable[MAX_ELEMENTS];
    int elementCount = 0;
    int choice;

    do {
        system("clear"); // For Linux/Mac. Use "cls" for Windows.
        printf("\033[1;34m"); // Set text color to blue
        printf("**********************************************\n");
        printf("*         Periodic Table Generator           *\n");
        printf("**********************************************\n");
        printf("\033[0m"); // Reset text color
        printf("Enter the corresponding Number:\n");
        printf("1. Add New Element Information\n");
        printf("2. Explore\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addElement(periodicTable, &elementCount);
                break;
            case 2:
                exploreElements(periodicTable, elementCount);
                break;
            case 3:
                printf("\033[1;31m"); // Set text color to red
                printf("Exiting the Periodic Table Generator. Goodbye!\n");
                printf("\033[0m"); // Reset text color
                break;
            default:
                printf("\033[1;31m"); // Set text color to red
                printf("Invalid choice. Please enter a valid option.\n");
                printf("\033[0m"); // Reset text color
        }
    } while (choice != 3);

    return 0;
}

void printPeriodicTable(struct Element periodicTable[][18], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            int atomic_number = periodicTable[i][j].atomicNumber;
            switch (atomic_number % 7) {
                case 0: printf(RED); break;
                case 1: printf(GREEN); break;
                case 2: printf(YELLOW); break;
                case 3: printf(BLUE); break;
                case 4: printf(MAGENTA); break;
                case 5: printf(CYAN); break;
                case 6: printf(WHITE); break;
            }
            printf("%-3s ", periodicTable[i][j].symbol);
            printf(RESET);
        }
        printf("\n");
    }
}

void addElement(struct Element *elements, int *elementCount) {
    if (*elementCount == MAX_ELEMENTS) {
        printf("Cannot add more elements. The maximum limit is reached.\n");
        return;
    }

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

    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "%s %s %d %.3f %s\n", newElement.name, newElement.symbol,
            newElement.atomicNumber, newElement.atomicWeight, newElement.atomicConfig);

    fclose(file);

    printf("Element added successfully!\n");
    elements[*elementCount] = newElement;
    (*elementCount)++;
}

void exploreElements(const struct Element *elements, int elementCount) {
    int exploreChoice;

    do {
        printf("\nPeriodic Table Generator\n");
        printf("**********************************************\n");
        printf("Enter the corresponding Number:\n");
        printf("1. Print Periodic Table\n");
        printf("2. Search by Name\n");
        printf("3. Search by Symbol\n");
        printf("4. Search by Atomic Number\n");
        printf("5. Search by Atomic Weight\n");
        printf("6. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &exploreChoice);

        switch (exploreChoice) {
            case 1:
                printf("Printing the Periodic Table:\n");
                // Assuming 7 rows and 18 columns for simplicity
                printPeriodicTable((struct Element(*)[18])elements, 7, 18);
                break;
            case 2:
                searchByName(elements, elementCount);
                break;
            case 3:
                searchBySymbol(elements, elementCount);
                break;
            case 4:
                searchByAtomicNumber(elements, elementCount);
                break;
            case 5:
                searchByAtomicWeight(elements, elementCount);
                break;
            case 6:
                printf("Returning to the main menu.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (exploreChoice != 6);
}

void searchByName(const struct Element *elements, int elementCount) {
    char searchName[50];
    printf("Enter the name of the element: ");
    scanf("%s", searchName);

    int found = 0;

    for (int i = 0; i < elementCount; i++) {
        if (strcmp(elements[i].name, searchName) == 0) {
            printElementDetails(elements[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }
}

void searchBySymbol(const struct Element *elements, int elementCount) {
    char searchSymbol[3];
    printf("Enter the symbol of the element: ");
    scanf("%s", searchSymbol);

    int found = 0;

    for (int i = 0; i < elementCount; i++) {
        if (strcmp(elements[i].symbol, searchSymbol) == 0) {
            printElementDetails(elements[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }
}

void searchByAtomicNumber(const struct Element *elements, int elementCount) {
    int searchAtomicNumber;
    printf("Enter the atomic number of the element: ");
    scanf("%d", &searchAtomicNumber);

    int found = 0;

    for (int i = 0; i < elementCount; i++) {
        if (elements[i].atomicNumber == searchAtomicNumber) {
            printElementDetails(elements[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }
}

void searchByAtomicWeight(const struct Element *elements, int elementCount) {
    float searchAtomicWeight;
    printf("Enter the atomic weight of the element: ");
    scanf("%f", &searchAtomicWeight);

    int found = 0;

    for (int i = 0; i < elementCount; i++) {
        if (elements[i].atomicWeight == searchAtomicWeight) {
            printElementDetails(elements[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }
}

void printElementDetails(const struct Element element) {
    printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nAtomic Config: %s\n",
           element.name, element.symbol, element.atomicNumber,
           element.atomicWeight, element.atomicConfig);
}
