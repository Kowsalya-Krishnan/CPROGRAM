#include <stdio.h>
int main() {
    int pens, notebooks, pencils;
    int total;
    printf("Enter number of pens: ");
    scanf("%d", &pens);
    printf("Enter number of notebooks: ");
    scanf("%d", &notebooks);
     printf("Enter number of pencils: ");
    scanf("%d", &pencils);
    total = (pens * 20) + (notebooks * 70) + (pencils * 9);
    printf("Total amount = %d", total);

    
}
