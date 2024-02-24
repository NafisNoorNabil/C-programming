
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>



struct properties{
    int quantity;
    float price;
};


int main()
{
    int people;
    struct properties paratha, vegetable, water;
    float bill=0;

    printf("Qauntity of Paratha: ");
    scanf("%d", &paratha.quantity);
    printf("Unit Price: ");
    scanf("%f", &paratha.price);
    printf("Quantity of Vegetable: ");
    scanf("%d", &vegetable.quantity);
    printf("Unit Price: ");
    scanf("%f", &vegetable.price);
    printf("Quantity of Mineral Water: ");
    scanf("%d", &water.quantity);
    printf("Unit Price: ");
    scanf("%f", &water.price);

    bill=bill+ (paratha.quantity*paratha.price)+(vegetable.quantity*vegetable.price)+(water.quantity*water.price);

    printf("Number of people:");
    scanf("%d", &people);
    float billperperson;

    billperperson=bill/people;
    printf("Individual people will pay: %.2f tk",billperperson);

    return 0;
}

