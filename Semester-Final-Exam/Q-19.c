// 19. Write a C program to record student's information according to their merit position

#include <stdio.h>
typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;
int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    Student students[n];
    for (i = 0; i < n; i++) {
        printf("Enter name, roll number and marks for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    // Sort students based on marks in descending order
    for (i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].marks < students[j].marks) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("\nStudent record according to merit:\n");
    for (i = 0; i < n; i++) {
        printf("Merit: %d, Name: %s, Roll Number: %d, Marks: %.2f\n", i+1, students[i].name, students[i].roll, students[i].marks);
    }
    return 0;
}
