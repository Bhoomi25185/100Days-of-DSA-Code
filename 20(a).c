//count subarrays
#include <stdio.h>

int main() {
    int a[100], n, i, j, sum, count=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        sum = 0;
        for(j=i;j<n;j++){
            sum += a[j];

            if(sum == 0)
                count++;
        }
    }

    printf("Number of subarrays with sum zero = %d",count);

    return 0;
}