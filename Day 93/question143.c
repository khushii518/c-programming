//Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 78.0},
        {"Charlie", 103, 92.3},
        {"David", 104, 88.7},
        {"Eve", 105, 95.2}
    };
    
    int highest = 0;
    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[highest].marks) {
            highest = i;
        }
    }
    
    printf("Student with highest marks:\n");
    printf("Name: %s\n", s[highest].name);
    printf("Roll No: %d\n", s[highest].roll_no);
    printf("Marks: %.2f\n", s[highest].marks);
    
    return 0;
}