#include <stdio.h>

int main() {
    int arr[100], currentLength = 0, numElements, deleteIndex;

    printf("Nhập số phần tử muốn nhập (tối đa 100): ");
    scanf("%d", &numElements);

    if (numElements < 0 || numElements > 100) {
        printf("Số phần tử không hợp lệ.\n");
        return 1;
    }

    printf("Nhập các phần tử:\n");
    for (int i = 0; i < numElements; i++) {
        scanf("%d", &arr[i]);
    }
    currentLength = numElements;

    printf("Nhập vị trí cần xóa (0-%d): ", currentLength - 1);
    scanf("%d", &deleteIndex);

    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vị trí không hợp lệ.\n");
        return 1;
    }

    for (int i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;

    printf("Mảng sau khi xóa: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
