#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 100
#define MAX_SLOTS 5

// Define a structure for patient record
struct patient {
    char name[50];
    int age;
    char gender;
    int id;
};

// Define an array to store patient records
struct patient patients[MAX_PATIENTS];

// Define an array to store reserved slots
int reserved_slots[MAX_SLOTS];

// Define a function to add a new patient record
void add_patient() {
    // TODO: Implement this function
}

// Define a function to edit a patient record
void edit_patient() {
    // TODO: Implement this function
}

// Define a function to reserve a slot with the doctor
void reserve_slot() {
    // TODO: Implement this function
}

// Define a function to cancel a reservation
void cancel_reservation() {
    // TODO: Implement this function
}

// Define a function to view patient record
void view_patient_record() {
    // TODO: Implement this function
}

// Define a function to view today's reservations
void view_today_reservations() {
    // TODO: Implement this function
}

// Define a function to check if the entered ID exists
int id_exists(int id) {
    // TODO: Implement this function
}

// Define the main function
int main() {
    int mode;
    char password[5];
    int password_tries = 3;

    printf("Choose a mode:\n");
    printf("1. Admin mode\n");
    printf("2. User mode\n");
    scanf("%d", &mode);

    if (mode == 1) {
        // Admin mode
        printf("Enter the password: ");
        scanf("%s", password);

        // Check the password
        while (strcmp(password, "1234") != 0) {
            password_tries--;

            if (password_tries == 0) {
                printf("Too many incorrect password tries. Closing...\n");
                return 0;
            }

            printf("Incorrect password. %d tries left. Enter the password: ", 
password_tries);
            scanf("%s", password);
        }

        // Admin mode features
        int choice;

        do {
            printf("\nAdmin mode features:\n");
            printf("1. Add new patient record\n");
            printf("2. Edit patient record\n");
            printf("3. Reserve a slot with the doctor\n");
            printf("4. Cancel reservation\n");
            printf("5. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    add_patient();
                    break;
                case 2:
                    edit_patient();
                    break;
                case 3:
                    reserve_slot();
                    break;
                case 4:
                    cancel_reservation();
                    break;
                case 5:
                    printf("Exiting admin mode...\n");
                    break;
                default:
                    printf("Invalid choice. Please enter a valid choice.\n");
            }
        } while (choice != 5);
    } else if (mode == 2) {
        // User mode features
        int choice;

        do {
            printf("\nUser mode features:\n");
            printf("1. View patient record\n");
            printf("2. View today's reservations\n");
            printf("3. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            
        switch (choice) {
            case 1:
                view_patient_record();
                break;
            case 2:
                view_today_reservations();
                break;
            case 3:
                printf("Exiting user mode...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    } while (choice != 3);
} else {
    printf("Invalid mode choice. Closing...\n");
    return 0;
}

return 0;
}


