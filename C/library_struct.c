#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct info{
    int a_num;
    char author[20];
    char book[20];
    int issue;
};
char space[1];
void display_info(struct info* input){
    printf("\nRequested details:\n%-15s%d\n%-15s%s\n%-15s%s\n%-15s%d\n","Accession no:",input->a_num,"Author name:",input->author,"Book title:",input->book,"Issued:",input->issue);
}
void add_book(struct info* input){
    struct info take;
    printf("\n%-15s","Accession no:");
    scanf("%d",&take.a_num);
    input->a_num=take.a_num;
    printf("%-15s","Author:");
    gets(space);
    gets(take.author);
    *input->author=take.author;
    printf("%-15s","Book title:");
    gets(take.book);
    *input->book=take.book;
    printf("%-15s","Issued:");
    scanf("%d",&take.issue);
    input->issue=take.issue;
}
void display_author(struct info input[],int n){
    char take[20];
    int f=0;
    printf("Author name: ");
    gets(space);
    gets(take);
    for(int i=0;i<=n;i++){
        if(strcmp(input[i].author,take)==0){
            f=1;
            printf("\t%d\n",input[i].a_num);
        }
    }
    if(f==0)
        puts("Not found");
}
void display_books(struct info input[],int n){
    char take[20];
    int f=0;
    printf("Book name: ");
    gets(take);
    for(int i=0;i<=n;i++){
        if(strcmp(input[i].book,take)==0){
            f=1;
            printf("\t%d\n",input[i].a_num);
        }
    }
    if(f==0)
        puts("Not found");
}
void display_total(int n){
    printf("Total books in the slots: %d",n);
}
void issue_book(struct info input[],int n){
    puts("Under Construction");
}

int main(){
    int slots,choice,i=0,t=0;
    printf("Enter the number of slots: ");
    scanf("%d",&slots);
    struct info library[slots];
    puts("Enter this codes to perfrom actions:\n\t0 ->To exit\n\t1 ->Display information\n\t2 ->Add book\n\t3 ->Display books of the author\n\t4 ->Display books of teh titile\n\t5 ->Display total number of books\n\t6 ->To issue book\n");
    while(1){
        printf(">>>");
        scanf("%d",&choice);
        switch(choice){
            case 0:
                exit(0);
                break;
            case 1:
                printf("Slot no: ");
                scanf("%d",&t);
                display_info(&library[t-1]);
                break;
            case 2:
                add_book(&library[i]);
                break;
            case 3:
                display_author(library,i);
                break;
            case 4:
                display_books(library,i);
                break;
            case 5:
                display_total(i);
                break;
            case 6:
                issue_book(library,i);
                break;
            default:
                puts("Invalid input");
                break;
        }
        i++;
    }
}