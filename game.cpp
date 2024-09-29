#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define WIDTH 30

int main() {
    int x = WIDTH / 2;
    char input;

    while (1) {
        system("cls");

        // Draw the road
        for (int i = 0; i < WIDTH; ++i) {
            if (i == x) {
                printf("C");  // Draw the car
            } else {
                printf("-");
            }
        }

        // Get user input
        if (_kbhit()) {
            input = _getch();

            // Move the car based on user input
            switch (input) {
                case 'a':
                    x = (x > 0) ? x - 1 : x;
                    break;
                case 'd':
                    x = (x < WIDTH - 1) ? x + 1 : x;
                    break;
                case 'q':
                    return 0;  // Quit the game
            }
        }

        // Pause to control the speed
        Sleep(100);  // Sleep for 100 milliseconds
    }

    return 0;
}
