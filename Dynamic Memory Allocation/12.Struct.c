#include<stdio.h>
#include<stdlib.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
void main()
{
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student *s;
    s = (struct Student*)malloc(n * sizeof(struct Student));
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }
    free(s);
}