//Linear Search with Comparison Count
#include <stdio.h>
int main()
{
    int arr[100], n, key, i, pos = -1, count = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        count++;
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }
    if(pos != -1)
        printf("Element found at position %d\n", pos + 1);
    else
        printf("Element not found\n");
    printf("Number of comparisons: %d", count);
    return 0;
}