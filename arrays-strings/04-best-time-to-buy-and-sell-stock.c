#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;
    
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    
    return maxProfit;
}

int main() {
    // Test Case 1: Standard case (Profit possible)
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("Test Case 1 Output: %d (Expected: 5)\n", maxProfit(prices1, 6));

    // Test Case 2: Edge case (Decreasing prices / No profit)
    int prices2[] = {7, 6, 4, 3, 1};
    printf("Test Case 2 Output: %d (Expected: 0)\n", maxProfit(prices2, 5));

    return 0;
}