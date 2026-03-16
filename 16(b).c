//Rotate array
#include <stdio.h>

void rotate(int arr[], int n, int k) {
    int temp[100], i;

    for(i=0;i<n;i++)
        temp[(i+k)%n] = arr[i];

    for(i=0;i<n;i++)
        arr[i] = temp[i];
}

int main() {
    int arr[100], n, k, i;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter k: ");
    scanf("%d",&k);

    rotate(arr,n,k);

    printf("Rotated array:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}