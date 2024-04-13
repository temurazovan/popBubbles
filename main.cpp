#include <iostream>
#include<array>

void initialization(bool arr[12][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            arr[i][j] = true;
        }
    }
}

std::array popping(bool arr[12][12], int x, int y, int x1, int y1) {
    for (int i = x; i < x + y; i++) {
        for (int j = x1; j < x1 + y1; j++) {
            if (arr[i][j]) {
                std::cout << "Pop!";
               arr[i][j] = false;
            }
        }
    }
    return ;
}

int main() {
    bool arr[12][12];
    initialization(arr);
    int x, y, x1, y1;

    std::cout << "enter the coordinates of the ends of the area [x][y], [x1][y1]: " << std::endl;
    std::cin >> x >> y;
    std::cin >> x1 >> y1;
    std::cout << std::endl;
}

