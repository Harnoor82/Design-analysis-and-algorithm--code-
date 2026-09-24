/*remove duplicate from sorted array
*/
#include <stdio.h>

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i-1]) {
            arr[j++] = arr[i];
        }
    }

    for (int i = 0; i < j; i++)
        printf("%d ", arr[i]);

    return 0;
}
