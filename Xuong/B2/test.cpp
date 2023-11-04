#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numbers[99];
    int selected[5];
    int i, j;

    // Khởi tạo mảng numbers từ 1 đến 99
    for (i = 0; i < 99; i++) {
        numbers[i] = i + 1;
    }

    // Khởi tạo seed cho hàm ngẫu nhiên dựa trên thời gian
    srand(time(NULL));

    // Chọn ngẫu nhiên 5 số không trùng nhau
    for (i = 0; i < 5; i++) {
        int dinex = rand() % (99 - i); // Chọn một vị trí ngẫu nhiên trong mảng còn lại
        selected[i] = numbers[i];  // Lưu số được chọn vào mảng selected
        // Loại bỏ số đã chọn bằng cách thay thế nó bằng số cuối cùng trong mảng
        numbers[i] = numbers[98 - i]
    }

    // In ra 5 số đã chọn
    printf("5 số ngẫu nhiên không trùng nhau từ 1 đến 99: ");
    for (i = 0; i < 5; i++) {
        printf("%02d ", selected[i]);
    }
    printf("\n");

    return 0;
}