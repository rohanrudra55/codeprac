#include<stdio.h>
struct info{
    int roll;
    char name[20];
    int age;
    char address[10];
};
void age_14(struct info[],int);
void even_roll(struct info[],int);
void display_details(struct info[],int);

int main(){
    int n=2;
    int t=1;
    struct info students[n];
    for(int i=0;i<2;i++){
        printf("Enter the %d info:\n",t++);
        printf("%-9s","Roll:");
        scanf("%d",&students[i].roll);
        char temp[1];
        gets(temp);
        printf("%-9s","Name:");
        gets(students[i].name);
        printf("%-9s","Age:");
        scanf("%d",&students[i].age);
        gets(temp);
        printf("%-9s","Address:");
        gets(students[i].address);
    }
    age_14(students,n);
    even_roll(students,n);
    display_details(students,n);
}
void age_14(struct info show[],int a){
    int f=0;
    puts("\nNames above 14 years old:");
    for(int i=0;i<a;i++){
        if(show[i].age==14){
            f=1;
            printf("\t\t->%s\n",show[i].name);
        }
    }
    if(f==0)
        puts("Not found!");
}
void even_roll(struct info show[],int n){
    puts("\nStudents having even roll number:");
    int f=0;
    for(int i=0;i<n;i++){
        if(show[i].roll%2 == 0){
            f=1;
            printf("\t\t->%s\n",show[i].name);
        }
    }
    if(f==0)
        puts("Not found!");
}
void display_details(struct info show[],int n){
    puts("\nEnter the roll number to show details");
    int a,f=0;
    printf("Input>> ");
    scanf("%d",&a);
    for(int i=0;i<n;i++){
        if(show[i].roll==a){
            f=1;
            printf("\nName: %s\nRoll: %d\nAge: %d\nAddress: %s\n",show[i].name,show[i].roll,show[i].age,show[i].address);
        }
    }
    if(f==0)
        puts("Not found!");
}