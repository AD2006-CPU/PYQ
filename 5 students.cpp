#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s[5];
    int i;
    printf("Enter information of 5 students:\n");
    for (i = 0; i < 5; i++) 
	{
    printf("\nStudent %d\n", i + 1);
    printf("Enter name: ");
    scanf("%s", s[i].name);
    printf("Enter roll number: ");
    scanf("%d", &s[i].roll);
    printf("Enter marks: ");
    scanf("%f", &s[i].marks);
    }
    printf("\nDisplaying Student Information:\n");
    for (i = 0; i < 5; i++) 
	{
    printf("\nName: %s\n", s[i].name);
    printf("Roll: %d\n", s[i].roll);
    printf("Marks: %.2f\n", s[i].marks);
    }
    return 0;
}

