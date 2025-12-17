#include <stdio.h>

typedef struct book
{
    int book_id;
    char title[100];
    char name[50];
    float price;
} book;
void Display(struct book b1)
{

    printf("%d\n", b1.book_id);
     printf("%s\n",b1.title);
      printf("%s\n",b1.name);
       printf("%f\n",b1.price);
}
void main()
{

    book b;
    printf("Enter the book_id\n");
    scanf("%d", &b.book_id);
    printf("Enter the title\n");
    scanf("%99s", b.title);
    printf("Enter the authorname\n");
    scanf("%99s", b.name);
    printf("Enter the price\n");
    scanf("%f", &b.price);

    Display(b);
}