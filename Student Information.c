/*1. Student Information System (using Structures)



SOURCE CODE:  */
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

void addStudent(struct Student *s) {
    printf("Enter Roll Number: ");
    scanf("%d", &s->roll_no);
    getchar();  // To consume the newline left by scanf
    printf("Enter Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = 0;  // Remove the trailing newline character
    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

void displayStudent(struct Student s) {
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student;
    int choice;

    while (1) {
        printf("\nStudent Information System\n");
        printf("1. Add Student\n");
        printf("2. Display Student\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent(&student);
                break;
            case 2:
                displayStudent(student);
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}



/*OUTPUT:

Student Information System
1. Add Student
2. Display Student
3. Exit
Enter your choice: 1
Enter Roll Number: 22BFA05409
Enter Name: Enter Marks: 476

Student Information System
1. Add Student
2. Display Student
3. Exit
Enter your choice: 2

Student Information:
Roll Number: 22
Name: FA05409
Marks: 476.00

Student Information System
1. Add Student
2. Display Student
3. Exit
Enter your choice: 3
Exiting... 

Explanation:
Structure: A Student structure is used to store roll number, name, and marks.
Functions: addStudent is used to input student details, and displayStudent displays them.
Menu: A simple menu allows the user to add and display student information.*/






