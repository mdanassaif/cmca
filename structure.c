
// it's opposite to array : where can store different type of data types ( heterogenous )

#include <stdio.h>

int main(){
    // user defined
    struct BookDetails{
        char bookName[30];
        float bookPrice;
        int bookPages;
    };

    struct BookDetails myChoice[2];

    for (int i = 0; i < 2; i++){
        printf("Enter details for book %d:\n", i + 1);

        printf("Enter book name: ");
        scanf("%s", myChoice[i].bookName);

        printf("Enter book price: ");
        scanf("%f", &myChoice[i].bookPrice);

        printf("Enter book pages: ");
        scanf("%d", &myChoice[i].bookPages);
    }

    printf("\nBook Details:\n");
    printf("*******************************************\n\n");
    for (int i = 0; i < 2; i++){
        printf("Book %d:\n", i + 1);
        printf("Book Name: %s\n", myChoice[i].bookName);
        printf("Book Price: %.2f\n", myChoice[i].bookPrice);
        printf("Book Pages: %d\n", myChoice[i].bookPages);
        printf("----------------------------------------\n");
    }

    return 0;
}