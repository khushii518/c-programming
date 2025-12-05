//Store details of 5 students in an array of structures and print all.

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
    
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n\n", s[i].marks);
    }
    
    return 0;
}