#include<stdio.h>
int main(){
    struct class{
        char name[20];
        int roll;
        int marks;
    }student[57];
    char temp;
    int sum=0;
    for(int i=0;i<2;i++){
        printf("\nStudent name: ");
        gets(student[i].name);
        printf("Roll number: ");
        scanf("%d",&student[i].roll);
        printf("Marks: ");
        scanf("%d",&student[i].marks);
        sum+=student[i].marks;
        gets(&temp);
    }
    double average=sum/2.0;
    printf("\n%-20s%-20s%-20s\n","Name","Roll","Marks");
    for(int i=0;i<2;i++){
        printf("%-20s%-20d%-20d\n",student[i].name,student[i].roll,student[i].marks);
    }
    printf("%40s%-20.2lf\n","Average:",average);

}