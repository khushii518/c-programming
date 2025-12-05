//Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p = {"John", MALE};
    
    printf("Name: %s\n", p.name);
    printf("Gender: ");
    
    if (p.gender == MALE) {
        printf("MALE\n");
    } else if (p.gender == FEMALE) {
        printf("FEMALE\n");
    } else {
        printf("OTHER\n");
    }
    
    return 0;
}