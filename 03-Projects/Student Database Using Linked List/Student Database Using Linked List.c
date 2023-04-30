#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent a student
typedef struct student {
    int id;
    char name[50];
    float gpa;
    struct student* next;
} Student;

// Function to create a new student
Student* createStudent(int id, char name[], float gpa) {
    // Allocate memory for the new student
    Student* newStudent = (Student*)malloc(sizeof(Student));
    newStudent->id = id;
    strcpy(newStudent->name, name);
    newStudent->gpa = gpa;
    newStudent->next = NULL;
    return newStudent;
}

// Function to add a student to the database
void addStudent(Student** head, int id, char name[], float gpa) {
    // Create a new student
    Student* newStudent = createStudent(id, name, gpa);
    // Check if the database is empty
    if (*head == NULL) {
        *head = newStudent;
    }
    else {
        // Traverse the database to the last student
        Student* lastStudent = *head;
        while (lastStudent->next != NULL) {
            lastStudent = lastStudent->next;
        }
        // Add the new student to the end of the database
        lastStudent->next = newStudent;
    }
}

// Function to display all students in the database
void displayStudents(Student* head) {
    printf("ID\tName\t\tGPA\n");
    while (head != NULL) {
        printf("%d\t%s\t\t%.2f\n", head->id, head->name, head->gpa);
        head = head->next;
    }
}

// Function to delete a student from the database
void deleteStudent(Student** head, int id) {
    // Check if the database is empty
    if (*head == NULL) {
        printf("Database is empty\n");
        return;
    }
    // Check if the student to delete is the first student in the database
    if ((*head)->id == id) {
        Student* temp = *head;
        *head = (*head)->next;
        free(temp);
        printf("Student with ID %d deleted\n", id);
        return;
    }
    // Traverse the database to find the student to delete
    Student* currentStudent = *head;
    while (currentStudent->next != NULL && currentStudent->next->id != id) {
        currentStudent = currentStudent->next;
    }
    if (currentStudent->next == NULL) {
        printf("Student with ID %d not found\n", id);
        return;
    }
    // Delete the student
    Student* temp = currentStudent->next;
    currentStudent->next = temp->next;
    free(temp);
    printf("Student with ID %d deleted\n", id);
}

int main() {
    // Initialize the database to be empty
    Student* head = NULL;
    // Add some students to the database
    addStudent(&head, 1001, "John Smith", 3.5);
    addStudent(&head, 1002, "Jane Doe", 4.0);
    addStudent(&head, 1003, "Bob Johnson", 2.8);
    // Display all students in the database
    displayStudents(head);
    // Delete a student from the database
    deleteStudent(&head, 1002);
    // Display all students in the database again
    displayStudents(head);
    return 0;
}