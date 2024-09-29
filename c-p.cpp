#include <stdio.h>
#include <string.h>

struct Element {
    char name[20];
    char symbol[3];
    double weight;
    int column;
    int row;
    int atomic_number;
};

void displayElement(struct Element element) {
    printf("Name: %s\n", element.name);
    printf("Symbol: %s\n", element.symbol);
    printf("Weight: %.4f\n", element.weight);
    printf("Column: %d\n", element.column);
    printf("Row: %d\n", element.row);
    printf("Atomic number: %d\n", element.atomic_number);
}

struct Element findElement(char elementName[20], struct Element elements[], int size) {
    struct Element notFound;
    strcpy(notFound.name, "Not Found");

    for (int i = 0; i < size; i++) {
        if (strcmp(elements[i].name, elementName) == 0) {
            return elements[i];
        }
    }

    return notFound;
}

int main() {
    struct Element periodicTable[] = {
        {"Hydrogen", "H", 1.008, 1, 1, 1},
        {"Helium", "He", 4.0026, 18, 1, 2},
        {"Lithium", "Li", 6.94, 1, 2, 3},
        {"Beryllium", "Be", 9.0122, 2, 2, 4},
        {"Boron", "B", 10.81, 13, 2, 5},
        {"Carbon", "C", 12.011, 14, 2, 6},
        {"Nitrogen", "N", 14.007, 15, 2, 7},
        {"Oxygen", "O", 15.999, 16, 2, 8},
        {"Fluorine", "F", 18.998, 17, 2, 9},
        {"Neon", "Ne", 20.180, 18, 2, 10},
        {"Sodium", "Na", 22.990, 1, 3, 11},
        {"Magnesium", "Mg", 24.305, 2, 3, 12},
        {"Aluminium", "Al", 26.982, 13, 3, 13},
        {"Silicon", "Si", 28.085, 14, 3, 14},
        {"Phosphorus", "P", 30.974, 15, 3, 15},
        {"Sulfur", "S", 32.06, 16, 3, 16},
        {"Chlorine", "Cl", 35.453, 17, 3, 17},
        {"Argon", "Ar", 39.948, 18, 3, 18},
        {"Potassium", "K", 39.098, 1, 4, 19},
        {"Calcium", "Ca", 40.078, 2, 4, 20},
        {"Scandium", "Sc", 44.956, 3, 4, 21},
        {"Titanium", "Ti", 47.867, 4, 4, 22},
        {"Vanadium", "V", 50.942, 5, 4, 23},
        {"Chromium", "Cr", 51.996, 6, 4, 24},
        {"Manganese", "Mn", 54.938, 7, 4, 25},
        {"Iron", "Fe", 55.845, 8, 4, 26},
        {"Cobalt", "Co", 58.933, 9, 4, 27},
        {"Nickel", "Ni", 58.693, 10, 4, 28},
        {"Copper", "Cu", 63.546, 11, 4, 29},
        {"Zinc", "Zn", 65.38, 12, 4, 30},
        {"Gallium", "Ga", 69.723, 13, 4, 31},
        {"Germanium", "Ge", 72.630, 14, 4, 32},
        {"Arsenic", "As", 74.922, 15, 4, 33},
        {"Selenium", "Se", 78.971, 16, 4, 34},
        {"Bromine", "Br", 79.904, 17, 4, 35},
        {"Krypton", "Kr", 83.798, 18, 4, 36},
        {"Rubidium", "Rb", 85.468, 1, 5, 37},
        {"Strontium", "Sr", 87.62, 2, 5, 38},
        {"Yttrium", "Y", 88.906, 3, 5, 39},
        {"Zirconium", "Zr", 91.224, 4, 5, 40},
        {"Niobium", "Nb", 92.906, 5, 5, 41},
        {"Molybdenum", "Mo", 95.95, 6, 5, 42},
        {"Technetium", "Tc", 98.0, 7, 5, 43},
        {"Ruthenium", "Ru", 101.07, 8, 5, 44},
        {"Rhodium", "Rh", 102.91, 9, 5, 45},
        {"Palladium", "Pd", 106.42, 10, 5, 46},
        {"Silver", "Ag", 107.87, 11, 5, 47},
        {"Cadmium", "Cd", 112.41, 12, 5, 48},
        {"Indium", "In", 114.82, 13, 5, 49},
        {"Tin", "Sn", 118.71, 14, 5, 50},
        {"Antimony", "Sb", 121.76, 15, 5, 51},
        {"Tellurium", "Te", 127.60, 16, 5, 52},
        {"Iodine", "I", 126.90, 17, 5, 53},
        {"Xenon", "Xe", 131.29, 18, 5, 54},
        {"Cesium", "Cs", 132.91, 1, 6, 55},
        {"Barium", "Ba", 137.33, 2, 6, 56},
        {"Lanthanum", "La", 138.91, 3, 6, 57},
        {"Cerium", "Ce", 140.12, 4, 6, 58},
        {"Praseodymium", "Pr", 140.91, 5, 6, 59},
        {"Neodymium", "Nd", 144.24, 6, 6, 60},
        {"Promethium", "Pm", 145.0, 7, 6, 61},
        {"Samarium", "Sm", 150.36, 8, 6, 62},
        {"Europium", "Eu", 151.96, 9, 6, 63},
        {"Gadolinium", "Gd", 157.25, 10, 6, 64},
        {"Terbium", "Tb", 158.93, 11, 6, 65},
        {"Dysprosium", "Dy", 162.50, 12, 6, 66},
        {"Holmium", "Ho", 164.93, 13, 6, 67},
        {"Erbium", "Er", 167.26, 14, 6, 68},
        {"Thulium", "Tm", 168.93, 15, 6, 69},
        {"Ytterbium", "Yb", 173.04, 16, 6, 70},
        {"Lutetium", "Lu", 174.97, 17, 6, 71},
        {"Hafnium", "Hf", 178.49, 4, 6, 72},
        {"Tantalum", "Ta", 180.95, 5, 6, 73},
        {"Tungsten", "W", 183.84, 6, 6, 74},
        {"Rhenium", "Re", 186.21, 7, 6, 75},
        {"Osmium", "Os", 190.23, 8, 6, 76},
        {"Iridium", "Ir", 192.22, 9, 6, 77},
        {"Platinum", "Pt", 195.08, 10, 6, 78},
        {"Gold", "Au", 196.97, 11, 6, 79},
        {"Mercury", "Hg", 200.59, 12, 7, 80},
        {"Thallium", "Tl", 204.38, 13, 7, 81},
        {"Lead", "Pb", 207.2, 14, 7, 82},
        {"Bismuth", "Bi", 208.98, 15, 7, 83},
        {"Polonium", "Po", 209.0, 16, 7, 84},
        {"Astatine", "At", 210.0, 17, 7, 85},
        {"Radon", "Rn", 222.0, 18, 7, 86},
        {"Francium", "Fr", 223.0, 1, 7, 87},
        {"Radium", "Ra", 226.0, 2, 7, 88},
        {"Actinium", "Ac", 227.0, 3, 7, 89},
        {"Thorium", "Th", 232.04, 4, 7, 90},
        {"Protactinium", "Pa", 231.04, 5, 7, 91},
        {"Uranium", "U", 238.03, 6, 7, 92},
        {"Neptunium", "Np", 237.0, 7, 7, 93},
        {"Plutonium", "Pu", 244.0, 8, 7, 94},
        {"Americium", "Am", 243.0, 9, 7, 95},
        {"Curium", "Cm", 247.0, 10, 7, 96},
        {"Berkelium", "Bk", 247.0, 11, 7, 97},
        {"Californium", "Cf", 251.0, 12, 7, 98},
        {"Einsteinium", "Es", 252.0, 13, 7, 99},
        {"Fermium", "Fm", 257.0, 14, 7, 100},
        {"Mendelevium", "Md", 258.0, 15, 7, 101},
        {"Nobelium", "No", 259.0, 16, 7, 102},
        {"Lawrencium", "Lr", 262.0, 17, 7, 103},
        {"Rutherfordium", "Rf", 267.0, 4, 7, 104},
        {"Dubnium", "Db", 270.0, 5, 7, 105},
        {"Seaborgium", "Sg", 271.0, 6, 7, 106},
        {"Bohrium", "Bh", 270.0, 7, 7, 107},
        {"Hassium", "Hs", 277.0, 8, 7, 108},
        {"Meitnerium", "Mt", 276.0, 9, 7, 109},
        {"Darmstadtium", "Ds", 281.0, 10, 7, 110},
        {"Roentgenium", "Rg", 280.0, 11, 7, 111},
        {"Copernicium", "Cn", 285.0, 12, 7, 112},
        {"Nihonium", "Nh", 284.0, 13, 7, 113},
        {"Flerovium", "Fl", 289.0, 14, 7, 114},
        {"Moscovium", "Mc", 288.0, 15, 7, 115},
        {"Livermorium", "Lv", 293.0, 16, 7, 116},
        {"Tennessine", "Ts", 294.0, 17, 7, 117},
        {"Oganesson", "Og", 294.0, 18, 7, 118},
    };
     char inputElement[118];
    printf("Enter the name of the element: ");
    scanf("%s", inputElement);

    // Find the element in the periodic table
    struct Element foundElement = findElement(inputElement, periodicTable, sizeof(periodicTable) / sizeof(periodicTable[0]));

    // Display information about the element
    if (strcmp(foundElement.name, "Not Found") == 0) {
        printf("Element not found in the periodic table.\n");
    } else {
        printf("\nInformation about %s:\n", foundElement.name);
        displayElement(foundElement);
    }

    return 0;
}