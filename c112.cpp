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
struct element {
    char name[50];
    char symbol[3];
    int atomicNumber;
    float atomicWeight;
    char atomicConfig[50];
};

struct Element {
    char name[50];
    char symbol[3];
    int atomicNumber;
    float atomicWeight;
    char atomicConfig[50];
};

void displayMenu();
void selectColour(int col);
void addElement(struct Element *elements, int *elementCount);
void exploreElements(const struct Element *elements, int elementCount);
void searchByName(const struct Element *elements, int elementCount);
void searchBySymbol(const struct Element *elements, int elementCount);
void searchByAtomicNumber(const struct Element *elements, int elementCount);
void searchByAtomicWeight(const struct Element *elements, int elementCount);

int main() {
    struct Element periodicTable[MAX_ELEMENTS];
    int elementCount = 0;
    int choice;
    int col;

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
            case 4:
        		selectColour(col);
        		break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
void selectColour(int col) 
{
           int colour;
           printf("Choose a colour: ");
           printf("\n1.Red\n2.Green\n3.Yellow\n4.Blue\n5.Magenta\n6.Cyan\n7.White\n");
           scanf("%d",&colour);
            switch (colour) 
			{
                case 1: printf(RED); break;
                case 2: printf(GREEN); break;
                case 3: printf(YELLOW); break;
                case 4: printf(BLUE); break;
                case 5: printf(MAGENTA); break;
                case 6: printf(CYAN); break;
                case 7: printf(WHITE); break;
            }
}

void displayMenu() {
    printf("\nPeriodic Table Generator\n");
    printf("**********************************************\n");
    printf("Enter the corresponding Number:\n");
    printf("1. Add New Element Information\n");
    printf("2. Explore\n");
    printf("3. Quit\n");
    printf("4.Change the colour you want: \n");
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
    } while (exploreChoice != 5);
}

void searchByName(const struct Element *elements, int elementCount) {
    char searchName[50];
    printf("Enter the name of the element: ");
    scanf("%s", searchName);

    int found = 0;

    for (int i = 0; i < elementCount; i++) {
        if (strcmp(elements[i].name, searchName) == 0) {
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nAtomic Config: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].atomicConfig);
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
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nAtomic Config: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].atomicConfig);
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
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nAtomic Config: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].atomicConfig);
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
            printf("\nName: %s\nSymbol: %s\nAtomic Number: %d\nAtomic Weight: %.3f\nAtomic Config: %s\n",
                   elements[i].name, elements[i].symbol, elements[i].atomicNumber,
                   elements[i].atomicWeight, elements[i].atomicConfig);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }
}
