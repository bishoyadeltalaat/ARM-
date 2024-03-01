#include <stdio.h>
#include <stdlib.h>

struct store {
    int id;
    char name[50];
    float price;
    int quantity;
    float value;
};

void update(struct store *item) {
    printf("Enter updated information for item %d:\n", item->id);

    printf("Enter updated name: ");
    scanf("%s", item->name);

    printf("Enter price increment: ");
    float priceIncrement;
    scanf("%f", &priceIncrement);
    item->price += priceIncrement;

    printf("Enter updated quantity: ");
    scanf("%d", &item->quantity);

    item->value = item->price * item->quantity;
}

int main() {
    struct store myItem;

    printf("Enter information for item:\n");
    printf("ID: ");
    scanf("%d", &myItem.id);

    printf("Name: ");
    scanf("%s", myItem.name);

    printf("Price: ");
    scanf("%f", &myItem.price);

    printf("Quantity: ");
    scanf("%d", &myItem.quantity);

    myItem.value = myItem.price * myItem.quantity;

    update(&myItem);

    printf("\nUpdated information for item %d:\n", myItem.id);
    printf("Name: %s\n", myItem.name);
    printf("Updated Price: %.2f\n", myItem.price);
    printf("Quantity: %d\n", myItem.quantity);
    printf("Updated Value: %.2f\n", myItem.value);

    return 0;
}
