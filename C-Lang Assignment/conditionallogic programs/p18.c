//18.Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>

int main() {
    float mainprice, sellprice, profit, loss;

    // input price
    printf("Enter the main price: ");
    scanf("%f", &mainprice);

    printf("Enter the selling price: ");
    scanf("%f", &sellprice);

    // Calculating profit or loss
    if (sellprice > mainprice) {
        profit = sellprice - mainprice;
        printf("Profit: %f", profit);
    } else if (sellprice < mainprice) {
        loss = mainprice - sellprice;
        printf("Loss: %f", loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}


