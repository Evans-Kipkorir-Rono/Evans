#include <stdio.h>
#include <stdlib.h>

void writeToFile() {
    FILE *file;
    char paragraph[201]; // Allow 200 characters plus null terminator

    
    printf("Enter a paragraph (up to 200 characters):\n");
    fgets(paragraph, 201, stdin);

    // Open file for writing 
    file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(1);
    }

    
    fputs(paragraph, file);
    fclose(file);
    printf("Paragraph written to output.txt\n");
}

void readFromFile() {
    FILE *file;
    char paragraph[201];

    
    file = fopen("output.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        exit(1);
    }

    
    printf("Content of output.txt:\n");
    while (fgets(paragraph, 201, file) != NULL) {
        printf("%s", paragraph);
    }
    fclose(file);
}

void appendToFile() {
    FILE *file;
    char paragraph[201]; 

    // Prompt user for additional input
    printf("Enter an additional paragraph (up to 200 characters):\n");
    fgets(paragraph, 201, stdin);

    // Open file for appending 
    file = fopen("output.txt", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        exit(1);
    }

    // Write additional paragraph to file
    fputs(paragraph, file);
    fclose(file);
    printf("Additional paragraph appended to output.txt\n");
}

int main() {
    int choice;

    do {
        printf("\nChoose an option:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}