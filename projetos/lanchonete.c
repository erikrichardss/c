#include <stdio.h>
#include <stdlib.h>

#define TAM 4

typedef struct {

    int code;
    char name[30];
    float price;

} Product;

void showMenu(Product menu[], int size);

int searchProduct(Product menu[], int size, int code);

int main() {

    Product product[TAM] = {
        {1, "X-Burguer", 15.90},
        {2, "X-Salad", 18.90},
        {3, "Soda", 6.90},
        {4, "Potato-Chips", 12.90}
    };

    float total = 0;
    int code;

    showMenu(product, TAM);

    do {
        
        printf("\nEnter product code (0 to finish): ");
        scanf("%d", &code);

        if (code != 0) {

            int index = searchProduct(product, TAM, code);

            if (index != -1) {

                total += product[index].price;
                printf("\n Product added! \n");

            } else {

                printf("\n Product not found! \n");
            }
        }
    } while (code != 0);
    
    printf("Total of your purchase %.2f", total);

    return 0;
}

void showMenu(Product menu[], int size) {

    printf("----- menu -----");

    for (int i = 0; i < size; i++) {
        
        printf("\n %d - %s - %.2f \n", 
            menu[i].code,
            menu[i].name,
            menu[i].price);
    }
    
    printf("---------------------");
}

int searchProduct(Product menu[], int size, int code) {

    for (int i = 0; i < size; i++) {

        if(menu[i].code == code) {

            return i;
        }
    }

    return -1;
}