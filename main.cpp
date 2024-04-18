#include <iostream>

struct Coordinates {
    int x, y;
};

void initialization(bool arr[12][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            arr[i][j] = true;
        }
    }
}

bool isPopped(bool arr[12][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (arr[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool checkInput(Coordinates begin, Coordinates end) {
    if ((begin.x <= 0 || begin.x > 12)
        || (begin.y <= 0 || begin.y > 12)
        || (end.x <= 0 || end.x > 12)
        || (end.y <= 0 || end.y > 12)) {
        return false;
    }
    return true;
}

void popping(bool arr[12][12], Coordinates begin, Coordinates end) {
    for (int i = begin.x - 1; i <= end.x - 1; i++) {
        for (int j = begin.y - 1; j <= end.y - 1; j++) {
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
    Coordinates begin, end;

    while (!isPopped(arr)) {
        std::cout << "enter the coordinates of the ends of the area [x][y], [x1][y1]: " << std::endl;
        std::cin >> begin.x >> begin.y;
        std::cin >> end.x >> end.y;
        std::cout << std::endl;
        if (checkInput(begin, end)) {
            popping(arr, begin, end);
            printArray(arr);
        }
    }

    return 0;
}
