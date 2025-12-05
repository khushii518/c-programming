//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role userRole;
    int choice;
    
    printf("Select user role:\n");
    printf("0 - ADMIN\n");
    printf("1 - USER\n");
    printf("2 - GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    userRole = choice;
    
    switch(userRole) {
        case ADMIN:
            printf("Welcome Admin! You have full access to all features.\n");
            break;
        case USER:
            printf("Welcome User! You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have limited access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }
    
    return 0;
}