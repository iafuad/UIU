#include <stdio.h>

const int MAX_ITEMS = 15, MAX_NAME_LENGTH = 100;

int main()
{
    char names[MAX_ITEMS][MAX_NAME_LENGTH];
    int codes[MAX_ITEMS], quantities[MAX_ITEMS], itemCount = 0, found = 0, choice;

    do
    {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Items\n");
        printf("2. Display All Items\n");
        printf("3. Search for an Item\n");
        printf("4. Update Item Quantity\n");
        printf("5. Find Item with Lowest Quantity\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (itemCount < MAX_ITEMS)
            {
                printf("Enter the name of the item: ");
                scanf("%s", names[itemCount]);
                printf("Enter the item code: ");
                scanf("%d", &codes[itemCount]);
                printf("Enter the quantity: ");
                scanf("%d", &quantities[itemCount]);
                itemCount++;
            }
            else
                printf("Inventory full. Cannot add more items.\n");
            break;

        case 2:
            for (int i = 0; i < itemCount; i++)
                printf("Name: %s, Item Code: %d, Quantity: %d\n", names[i], codes[i], quantities[i]);
            break;

        case 3:
            int searchCode;
            printf("Enter item code to search: ");
            scanf("%d", &searchCode);
            found = 0;
            for (int i = 0; i < itemCount; i++)
            {
                if (codes[i] == searchCode)
                {
                    printf("Item found: Name: %s, Item Code: %d, Quantity: %d\n", names[i], codes[i], quantities[i]);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Item not found.\n");
            break;

        case 4:
            int updateCode, newQuantity;
            printf("Enter item code to update: ");
            scanf("%d", &updateCode);
            printf("Enter new quantity: ");
            scanf("%d", &newQuantity);
            found = 0;
            for (int i = 0; i < itemCount; i++)
            {
                if (codes[i] == updateCode)
                {
                    quantities[i] = newQuantity;
                    printf("Quantity updated successfully.\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Item not found.\n");
            break;

        case 5:
            if (itemCount > 0)
            {
                int lowestIndex = 0;
                for (int i = 1; i < itemCount; i++)
                {
                    if (quantities[i] < quantities[lowestIndex])
                    {
                        lowestIndex = i;
                    }
                }
                printf("Item with lowest quantity: Name: %s, Item Code: %d, Quantity: %d\n", names[lowestIndex], codes[lowestIndex], quantities[lowestIndex]);
            }
            else
                printf("No items in inventory.\n");
            break;

        case 6:
            printf("Exiting the program...\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
