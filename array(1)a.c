//Insert an Element in an Array
#include <stdio.h>
int main()
{
    int arr[100], n, pos, value, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &pos);
    scanf("%d", &value);

    for(i = n; i >= pos - 1; i--)
        arr[i + 1] = arr[i];

    arr[pos - 1] = value;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}