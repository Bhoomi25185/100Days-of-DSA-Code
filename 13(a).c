//Boundary-to-Center Matrix Walk
#include <stdio.h>

int main() {
    int a[10][10], r, c, i;
    int top = 0, bottom, left = 0, right;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    bottom = r - 1;
    right = c - 1;

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Boundary to Center Walk:\n");

    while(top <= bottom && left <= right) {

        // Top row
        for(i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;

        // Right column
        for(i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        // Bottom row
        if(top <= bottom) {
            for(i = right; i >= left; i--)
                printf("%d ", a[bottom][i]);
            bottom--;
        }

        // Left column
        if(left <= right) {
            for(i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }

    return 0;
}