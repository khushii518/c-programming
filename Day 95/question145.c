//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int top = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) top = i;
    }
    return s[top];
}

int main() {
    struct Student s[3] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 95.2},
        {"Charlie", 103, 78.0}
    };
    
    struct Student top = getTopStudent(s, 3);
    
    printf("Top Student: %s, Roll: %d, Marks: %.2f\n", top.name, top.roll_no, top.marks);
    
    return 0;
}