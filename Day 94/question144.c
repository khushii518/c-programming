//Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1 = {"Alice", 101, 85.5};
    struct Student s2 = {"Bob", 102, 78.0};
    
    printf("Student 1:\n");
    printStudent(s1);
    
    printf("\nStudent 2:\n");
    printStudent(s2);
    
    return 0;
}