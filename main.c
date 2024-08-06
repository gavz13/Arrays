
#include <stdio.h>



int main (void) {
    int num_trees[10] = {0};
    int num_cars[10] = {0};
    int num_books[10] = {0};
    int index = 0;

    while (1) {
        printf("1. Add No. of trees\n");
        printf("2. Add No. of cars\n");
        printf("3. Add No. of books\n");
        printf("4. Logs\n");
        printf("5. Exit\n");
        printf("Choose an option bru, I dont have all day! : ");

        int option;
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Enter No. of trees: ");
                scanf("%d", &num_trees[index]);
                index++;break;
            case 2:
                printf("Enter No. of cars: ");
                scanf("%d", &num_cars[index]);
                index++;break;
            case 3:
                printf("Enter No. of books: ");
                scanf("%d", &num_books[index]);
                index++;break;
            case 4:
                printf("What did you loose here huh? \n");
                
                printf("No. of trees: ");
                for (int i = 0; i < index; i++) {
                    printf("%d ", num_trees[i]);
                }
                printf("\n");

                printf("No. of cars: ");
                for (int i = 0; i < index; i++) {
                    printf("%d ", num_cars[i]);
                }
                
                
                
                  printf("\n");

                
                
                
                printf("No. of books: ");
                for (int i = 0; i < index; i++) {
                    printf("%d ", num_books[i]);
                }
                printf("\n");break;
            case 5:
                printf("See you later aligator , in a while crocodile\n");
                return 0;
            default:
                printf("Invalid option. Do better honestly \n");
                
            case 6:
                printf("You have found the easter egg!! Well done!\n ps. dont share the secret \n");
                
 
           
        }

        if (index >= 10) {
            printf("Arrays are full , stuffed with information.\n");break;
        }
    }

    return 0;
}
