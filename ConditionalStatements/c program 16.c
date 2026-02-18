#include <stdio.h>
int main() {
    int choice;
    printf("1.Milk Chocolate\n2.Dark Chocolate\n3.White Chocolate\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    switch(choice) {
        case 1:
            printf("Milk chocolate is creamy and delicious!\nEnjoy your chocolate!");
            break;
        case 2:
            printf("Dark chocolate has rich flavour!\nEnjoy your chocolate!");
            break;
       case 3:
            printf("White chocolate is sweet and smooth!\nEnjoy your chocolate!");
            break;
      default:
            printf("Invalid choice");
    }

    
}
