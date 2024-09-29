#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEMENTS 118
#define FILENAME "c.txt"

struct Element {
    char name[50];
    char symbol[3];
    int atomicNumber;
    float atomicWeight;
    char typeofelement[50];
};

void printColoredOutput(const struct Element *element) {
    if (strcmp(element->typeofelement, "alkali-metal") == 0) {
        printf("\033[0;31m"); // red
    } else if (strcmp(element->typeofelement, "alkaline-earth-metal") == 0) {
        printf("\033[0;33m"); // yellow
    } else if (strcmp(element->typeofelement, "transition-elements") == 0) {
        printf("\033[0;36m"); // light blue
    } else if (strcmp(element->typeofelement, "lanthanides") == 0) {
        printf("\033[0;34m"); // blue
    } else if (strcmp(element->typeofelement, "actanides") == 0) {
        printf("\033[0;35m"); // magenta
    } else if (strcmp(element->typeofelement, "post-transition-elements-metals") == 0) {
        printf("\033[0;35m"); // magenta (light purple)
    } else if (strcmp(element->typeofelement, "metalloids") == 0) {
        printf("\033[0;33m"); // gold
    } else if (strcmp(element->typeofelement, "reactive-non-metals") == 0) {
        printf("\033[0;32m"); // green
    } else if (strcmp(element->typeofelement, "noble-gases") == 0) {
        printf("\033[0;35m"); // light pink
    } else {
        printf("\033[0;37m"); // gray for unknown elements
    }
}

void printResetColor() {
    printf("\033[0m"); // reset color to default
}

void searchAndPrint(const struct Element *elements, int elementCount, const char *searchTerm, int option) {
    int found = 0;

    for (int i = 0; i < elementCount; i++) {
        if (option == 1 && strcmp(searchTerm, elements[i].name) == 0) {
            printColoredOutput(&elements[i]);
            printf("Name: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nType of element: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].typeofelement);
            printResetColor();
            found = 1;
        } else if (option == 2 && strcmp(searchTerm, elements[i].symbol) == 0) {
            printColoredOutput(&elements[i]);
            printf("Name: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nType of element: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].typeofelement);
            printResetColor();
            found = 1;
        } else if (option == 3 && elements[i].atomicNumber == atoi(searchTerm)) {
            printColoredOutput(&elements[i]);
            printf("Name: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nType of element: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].typeofelement);
            printResetColor();
            found = 1;
        } else if (option == 4 && elements[i].atomicWeight == strtof(searchTerm, NULL)) {
            printColoredOutput(&elements[i]);
            printf("Name: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nType of element: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].typeofelement);
            printResetColor();
            found = 1;
        }
    }

    if (!found) {
        printf("No elements matching the search term found.\n");
    }
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
    // ... [previous code remains unchanged] ...
}

void exploreElements(const struct Element *elements, int elementCount) {
    // ... [previous code remains unchanged] ...
}

void searchByName(const struct Element *elements, int elementCount) {
    char searchName[50];
    printf("Enter the name of the element: ");
    scanf("%s", searchName);
    searchAndPrint(elements, elementCount, searchName, 1);
}

void searchBySymbol(const struct Element *elements, int elementCount) {
    char searchSymbol[3];
    printf("Enter the symbol of the element: ");
    scanf("%s", searchSymbol);
    searchAndPrint(elements, elementCount, searchSymbol, 2);
}

void searchByAtomicNumber(const struct Element *elements, int elementCount) {
    char searchAtomicNumber[10];
    printf("Enter the atomic number of the element: ");
    scanf("%s", searchAtomicNumber);
    searchAndPrint(elements, elementCount, searchAtomicNumber, 3);
}

void searchByAtomicWeight(const struct Element *elements, int elementCount) {
    char searchAtomicWeight[10];
    printf("Enter the atomic weight of the element: ");
    scanf("%s", searchAtomicWeight);
    searchAndPrint(elements, elementCount, searchAtomicWeight, 4);
}

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