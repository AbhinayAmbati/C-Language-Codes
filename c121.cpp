#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEMENTS 118
#define FILENAME "c.txt"

#define ANSI_COLOR_RED          "\x1b[31m"
#define ANSI_COLOR_YELLOW       "\x1b[33m"
#define ANSI_COLOR_LIGHT_BLUE   "\x1b[94m"
#define ANSI_COLOR_BLUE         "\x1b[34m"
#define ANSI_COLOR_LIGHT_PURPLE "\x1b[95m"
#define ANSI_COLOR_GOLD         "\x1b[33;1m"
#define ANSI_COLOR_GREEN        "\x1b[32m"
#define ANSI_COLOR_LIGHT_PINK   "\x1b[91;1m"
#define ANSI_COLOR_GRAY         "\x1b[90m"
#define ANSI_COLOR_RESET        "\x1b[0m"

struct Element {
    char name[50];
    char symbol[4];  // Allow for a null terminator
    int atomicNumber;
    float atomicWeight;
    char typeofelement[50];
};

void displayMenu();
void addElement(struct Element *elements, int *elementCount);
void exploreElements(const struct Element *elements, int elementCount);
void searchByName(const struct Element *elements, int elementCount);
void searchBySymbol(const struct Element *elements, int elementCount);
void searchByAtomicNumber(const struct Element *elements, int elementCount);
void searchByAtomicWeight(const struct Element *elements, int elementCount);
void printColoredElement(const struct Element *element);

int main() {
    struct Element periodicTable[MAX_ELEMENTS];
    int elementCount = 0;
    int choice;

    do {
        displayMenu();
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
                printf("Exiting the Periodic Table Generator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}

void displayMenu() {
    printf("\n");
    printf("             Periodic Table Generator         \n");
    printf("    **********************************************     \n");
    printf("           Enter the corresponding number:\n");
    printf("           1. Add New Element Information\n");
    printf("           2. Explore\n");
    printf("           3. Quit\n                     ");
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
    printf("Type of element: ");
    scanf("%s", newElement.typeofelement);

    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "%s %s %d %.3f %s\n", newElement.name, newElement.symbol,
            newElement.atomicNumber, newElement.atomicWeight, newElement.typeofelement);

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
        printf("1. Search by Name\n");
        printf("2. Search by Symbol\n");
        printf("3. Search by Atomic Number\n");
        printf("4. Search by Atomic Weight\n");
        printf("5. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &exploreChoice);

        switch (exploreChoice) {
            case 1:
                searchByName(elements, elementCount);
                break;
            case 2:
                searchBySymbol(elements, elementCount);
                break;
            case 3:
                searchByAtomicNumber(elements, elementCount);
                break;
            case 4:
                searchByAtomicWeight(elements, elementCount);
                break;
            case 5:
                printf("Returning to the main menu.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

        if (exploreChoice >= 1 && exploreChoice <= 4) {
            printColoredElement(&elements[exploreChoice - 1]); // Adjust index accordingly
        }
    } while (exploreChoice != 5);
}

void printColoredElement(const struct Element *element) {
    if (strcmp(element->typeofelement, "alkali-metal") == 0) {
        printf(ANSI_COLOR_RED);
    } else if (strcmp(element->typeofelement, "alkaline earth-metal") == 0) {
        printf(ANSI_COLOR_YELLOW);
    } else if (strcmp(element->typeofelement, "transition-elements") == 0) {
        printf(ANSI_COLOR_LIGHT_BLUE);
    } else if (strcmp(element->typeofelement, "lanthanides") == 0) {
        printf(ANSI_COLOR_BLUE);
    } else if (strcmp(element->typeofelement, "actanides") == 0) {
        printf(ANSI_COLOR_LIGHT_PINK);
    } else if (strcmp(element->typeofelement, "post-transition-elements-metals") == 0) {
        printf(ANSI_COLOR_LIGHT_PURPLE);
    } else if (strcmp(element->typeofelement, "metalloids") == 0) {
        printf(ANSI_COLOR_GOLD);
    } else if (strcmp(element->typeofelement, "reactive-non-metals") == 0) {
        printf(ANSI_COLOR_GREEN);
    } else if (strcmp(element->typeofelement, "noble-gases") == 0) {
        printf(ANSI_COLOR_LIGHT_PINK);
    } else {
        printf(ANSI_COLOR_GRAY);
    }

    printf("Name: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nType of element: %s\n",
           element->name, element->symbol, element->atomicNumber,
           element->atomicWeight, element->typeofelement);
    printf(ANSI_COLOR_RESET);
}
void searchByName(const struct Element *elements, int elementCount) {
    char searchName[50];
    printf("Enter the name of the element: ");
    scanf("%s", searchName);

    int found = 0;

    for (int i = 0; i < elementCount; i++) {
        if (strcmp(elements[i].name, searchName) == 0) {
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nType of element: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].typeofelement);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }
}

void searchBySymbol(const struct Element *elements, int elementCount) {
    char searchSymbol[4];
    printf("Enter the symbol of the element: ");
    scanf("%s", searchSymbol);

    int found = 0;

    for (int i = 0; i < elementCount; i++) {
        if (strcmp(elements[i].symbol, searchSymbol) == 0) {
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nType of element: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].typeofelement);
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
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nType of element: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].typeofelement);
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
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nType of element: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].typeofelement);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }
}
