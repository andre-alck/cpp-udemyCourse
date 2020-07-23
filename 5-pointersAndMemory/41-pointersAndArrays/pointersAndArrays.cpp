#include <iostream>
#include <string>

#define LAST_POSITION 2

void newLine(void);

int main(void) {
    int numbers[] = {
        1,
        2,
        3
    };

    int *pNumbers = numbers; /* Points to numbers[0] */

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        std::cout << pNumbers[i] << " " << std::flush;
    } /* pNumbers doesn't need a * because the value is already being accessed through i */
    newLine();

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++, pNumbers++) {
        std::cout << *pNumbers << " " << std::flush;
    } /* The pointer will point to each element of the array by increasing it's own value. */
    newLine();

    int *pElement = numbers; /* or *pElement = &numbers[0]; */
    int *pEnd = &numbers[LAST_POSITION];
    
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        std::cout << pElement[i] << " " << std::flush;

        if (pElement[i] == *pEnd) {
            break;
        }
    }

    return 0;
}

void newLine(void) {
    std::cout << std::endl;
}
