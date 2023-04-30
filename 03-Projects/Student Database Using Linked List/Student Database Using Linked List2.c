#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
    int roll_no;
    char name[20];
    float cgpa;
    struct student *next;
} student;

student *head = NULL;

void add_student(){
    student *new_student = (student*)malloc(sizeof(student));
    printf("Enter Roll No: ");
    scanf("%d",&new_student->roll_no);
    printf("Enter Name: ");
    scanf("%s",new_student->name);
    printf("Enter CGPA: ");
    scanf("%f",&new_student->cgpa);
    new_student->next = NULL;

    if(head==NULL){
        head = new_student;
    }else{
        student *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_student;
    }
    printf("\nStudent added successfully!\n");
}

void display_students(){
    if(head==NULL){
        printf("\nNo students found in the database.\n");
        return;
    }
    student *temp = head;
    printf("\nRoll No\tName\tCGPA\n");
    while(temp!=NULL){
        printf("%d\t%s\t%.2f\n",temp->roll_no,temp->name,temp->cgpa);
        temp = temp->next;
    }
}

void search_student(){
    int roll;
    printf("\nEnter Roll No: ");
    scanf("%d",&roll);
    student *temp = head;
    while(temp!=NULL){
        if(temp->roll_no == roll){
            printf("\nRoll No\tName\tCGPA\n");
            printf("%d\t%s\t%.2f\n",temp->roll_no,temp->name,temp->cgpa);
            return;
        }
        temp = temp->next;
    }
    printf("\nStudent not found.\n");
}

void delete_student(){
    int roll;
    printf("\nEnter Roll No: ");
    scanf("%d",&roll);
    if(head==NULL){
        printf("\nNo students found in the database.\n");
        return;
    }
    student *temp = head;
    student *prev = NULL;
    while(temp!=NULL){
        if(temp->roll_no == roll){
            if(prev==NULL){
                head = temp->next;
            }else{
                prev->next = temp->next;
            }
            free(temp);
            printf("\nStudent deleted successfully!\n");
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    printf("\nStudent not found.\n");
}

int main(){
    int choice;
    do{
        printf("\n1. Add student\n2. Display students\n3. Search student\n4. Delete student\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: add_student();
                    break;
            case 2: display_students();
                    break;
            case 3: search_student();
                    break;
            case 4: delete_student();
                    break;
            case 5: exit(0);
                    break;
            default: printf("\nInvalid choice. Try again.\n");
                     break;
        }
    }while(choice!=5);

    return 0;
}
