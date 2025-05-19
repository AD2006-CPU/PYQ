#include <stdio.h>
struct student 
{
    char name[50];
    int roll;
    float marks;
};
union data 
{
    int x;
    float y;
};
int main() 
{
    struct student s = {"John", 1, 85.5};
    printf("Student Info:\nName: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
    union data d;
    d.x = 5;
    d.y = 3.14;
    printf("Union data: x = %d (overwritten), y = %.2f\n", d.x, d.y);
    return 0;
}

