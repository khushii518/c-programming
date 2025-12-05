//Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s;
    
    s = (struct Student *)malloc(sizeof(struct Student));
    
    strcpy(s->name, "Alice");
    s->roll_no = 101;
    s->marks = 85.5;
    
    printf("Student Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);
    
    free(s);
    
    return 0;
}