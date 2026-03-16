//pair sum closest to zero
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100], n, i, j;
    int min_sum = 1000000, x, y;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            int sum = a[i] + a[j];

            if(abs(sum) < abs(min_sum)){
                min_sum = sum;
                x = a[i];
                y = a[j];
            }
        }
    }

    printf("Pair closest to zero: %d %d",x,y);

    return 0;
}