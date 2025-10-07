#include <stdio.h>

int main() {
  
    int qty1, qty2, qty3;
    float price1, price2, price3;
    float total1, total2, total3, grandTotal;

    
    char item1[] = "Keyboard";
    char item2[] = "Mouse";
    char item3[] = "Monitor";

   
    price1 = 20.0;   // Keyboard price
    price2 = 10.0;   // Mouse price
    price3 = 150.0;  // Monitor price

   
    printf("Enter quantity for %s: ", item1);
    scanf("%d", &qty1);

    printf("Enter quantity for %s: ", item2);
    scanf("%d", &qty2);

    printf("Enter quantity for %s: ", item3);
    scanf("%d", &qty3);

  
    total1 = price1 * qty1;
    total2 = price2 * qty2;
    total3 = price3 * qty3;

    
    grandTotal = total1 + total2 + total3;

   
    printf("\n----- Hardware Bill -----\n");
    printf("%-10s %10s %10s %10s\n", "Item", "Qty", "Price", "Total");
    printf("%-10s %10d %10.2f %10.2f\n", item1, qty1, price1, total1);
    printf("%-10s %10d %10.2f %10.2f\n", item2, qty2, price2, total2);
    printf("%-10s %10d %10.2f %10.2f\n", item3, qty3, price3, total3);
    printf("------------------------------\n");
    printf("%-32s %10.2f\n", "Grand Total:", grandTotal);

    return 0;
}
