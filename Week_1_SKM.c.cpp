#include <stdio.h>

void sortPrices(int prices[], int n, int ascending) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if ((ascending && prices[j] > prices[j+1]) || (!ascending && prices[j] < prices[j+1])) {
                temp = prices[j];
                prices[j] = prices[j+1];
                prices[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i, choice;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    int prices[n];
    printf("Enter the prices of the books:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    printf("Enter 1 to sort prices from low to high, or 0 to sort from high to low: ");
    scanf("%d", &choice);

    sortPrices(prices, n, choice);

    printf("Sorted prices:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", prices[i]);
    }

    return 0;
}

