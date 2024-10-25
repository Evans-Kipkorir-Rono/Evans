#include <string.h>
#include <stdio.h>

struct student {
    char name[40];
    char email[40];
    char reg_no[40];
    int phone_no;
    int ID_no;
    int marks;
    float height;
};

int main() {
    int no_students, i;
    
    
    printf("Enter the number of students: ");
    scanf("%d", &no_students);

    struct student students[no_students];
    
    for (i = 0; i < no_students; i++) {
        printf("\nEnter data for student %d\n", i + 1);
        
        printf("Enter name: ");
        scanf(" %[^\n]s", students[i].name);
        
        printf("Enter email: ");
        scanf(" %[^\n]s", students[i].email);
        
        printf("Enter registration number: ");
        scanf(" %[^\n]s", students[i].reg_no);
        
        printf("Enter phone number: ");
        scanf("%d", &students[i].phone_no);
        
        printf("Enter ID number: ");
        scanf("%d", &students[i].ID_no);
        
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
        
        printf("Enter height: ");
        scanf("%f", &students[i].height);
    }

    
    for (i = 0; i < no_students; i++) {
        printf("\n data for student %d\n", i + 1);
        printf("Name: %s \n", students[i].name);
        printf("Email: %s \n", students[i].email);
        printf("REG no: %s \n", students[i].reg_no);
        printf("Phone No: %d \n", students[i].phone_no);
        printf("ID No: %d \n", students[i].ID_no);
        printf("Marks: %d \n", students[i].marks);
        printf("Height: %.1f \n", students[i].height);
    }
    
    return 0;
}