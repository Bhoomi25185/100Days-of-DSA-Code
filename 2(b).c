//Best Time to Buy and Sell Stock leet code
#include <stdio.h>
int maxProfit(int* prices, int pricesSize)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i = 1; i < pricesSize; i++)
    {
        if(prices[i] < minPrice)
            minPrice = prices[i];
        else if(prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;
    }
    return maxProfit;
}
int main()
{
    int prices[] = {7,1,5,3,6,4};
    int size = sizeof(prices)/sizeof(prices[0]);

    printf("%d", maxProfit(prices, size));

    return 0;
}