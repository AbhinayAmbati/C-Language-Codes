#include<stdio.h>
#define MAX 118
struct elements
{
	char atomicName[20];
	char symbol[10];
	int atomicNumber;
	float atomicWeight;
};
void displayMenu();
void addElement(struct element*elements,int *elementcount);
void searchElement(const struct element *elements,int *elementcount);
int main()
{
	struct elements periodicTable[MAX];
	int elementcount=0;
	int choice;
	do
	{
		diplayMenu();
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				addElement(periodicTable,&elementcount);
				break;
				case 2:
					searchElement(periodicTable,&elementcount);
					break;
					case 3:
						printf("Exiting periodic Table\n");
						break;
						default:
							printf("Enter valid Option\n");
		}
	}while(choice!=3);
}
void displayMenu()
{
	printf("Welcome To  periodicTable\n");
	printf("Enter a corresponding Number\n");
	printf("1.Add element\n");
	printf("2.Search Element\n");
	printf("3.Quit\n");
}
void addElement(const struct elements*element,int *elementcount)
{
	if(*elementcount==MAX)
	{
		printf("Max elements are added to periodoic Table\n");
		return;
	}
	struct element Newelement;
	FILE *file=fopen("elements.txt","a");
	if(file==NULL)
	{
		printf("File not found");
		return;
	}
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

    fprintf(file, "%s %s %d %.3f %s\n", newElement.name, newElement.symbol,
            newElement.atomicNumber, newElement.atomicWeight, newElement.typeofelement);
    fclose(file);

    printf("Element added successfully!\n");
    elements[*elementCount] = newElement;
    (*elementCount)++;
	
}
void searchElement(const struct element*elements,int *elementcount)
{
	if(*elementcount==0)
	{
		printf("no elements in the periodic table\n");
		return;
	}
	char searchSymbol[10];
	scanf("%s",searchSymmbol);
	
}
