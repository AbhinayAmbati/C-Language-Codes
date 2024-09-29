#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEMENTS 118

// Function to display the periodic table
void displayPeriodicTable(char elements[MAX_ELEMENTS][3][30], int rows, int cols) {
    printf("\nPeriodic Table:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int index = i * cols + j;

            if (index < MAX_ELEMENTS) {
                printf("%-3s", elements[index][0]); // Symbol
                printf("%-20s", elements[index][1]); // Name
                printf("%-5s", elements[index][2]); // Atomic Number
                printf("   ");
            }
}
        printf("\n");
    }
}

// Function to input elements of the periodic table
void inputPeriodicTable(char elements[MAX_ELEMENTS][3][30], int rows, int cols) {
    printf("Enter the elements of the periodic table:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int index = i * cols + j;

            if (index < MAX_ELEMENTS) {
                printf("Element at row %d, column %d:\n", i + 1, j + 1);
                printf("Symbol: ");
                scanf("%s", elements[index][0]);
                printf("Name: ");
                scanf("%s", elements[index][1]);
                printf("Atomic Number: ");
                scanf("%s", elements[index][2]);
            }
        }
    }
}
int main() {
    char periodicTable[MAX_ELEMENTS][3][30];
    int rows, cols;

    printf("Enter the number of rows in the periodic table (maximum 7): ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the periodic table (maximum 18): ");
    scanf("%d", &cols);

    if (rows <= 0 || rows > 7 || cols <= 0 || cols > 18) {
        printf("Invalid number of rows or columns. Exiting.\n");
        return 1;
    }

    // Input periodic table elements
    inputPeriodicTable(periodicTable, rows, cols);
// Display the periodic table
    displayPeriodicTable(periodicTable, rows, cols);

    return 0;
}
