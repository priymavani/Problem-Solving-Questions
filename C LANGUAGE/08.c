// 8. Find the Average of an Array.

#include <stdio.h>

int main() {
    int arr[] = {1,2};
      float length = sizeof(arr) / sizeof(arr[0]);
    int i = 0, sum = 0;
    for (i = 0; i < length; i++) {
        sum += arr[i];
    }
    printf("%f\n", sum / length);

    return 0;
}