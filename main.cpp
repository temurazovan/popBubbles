#include <iostream>

void initialization(bool arr[12][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            arr[i][j] = true;
        }
    }
}

void popping(bool arr[12][12], int x, int y, int x1, int y1) {
    for (int i = x; i < x1; i++) {
        for (int j = y; j < y1; j++) {
            if (arr[i][j]) {
                std::cout << "Pop!";
                arr[i][j] = false;
            }
        }
    }
    std::cout << std::endl;
}

void printArray(bool arr[12][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    bool arr[12][12];
    initialization(arr);
    int x, y, x1, y1;

    std::cout << "enter the coordinates of the ends of the area [x][y], [x1][y1]: " << std::endl;
    std::cin >> x >> y;
    std::cin >> x1 >> y1;
    std::cout << std::endl;
    popping(arr, x, y, x1, y1);
    printArray(arr);
}
