#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Teacher {
    char name[50];
    char dept[30];
    float salary;
    int experience;
};
void addTeacher();
void displayScienceDept();
int main() {
    int choice;
    while(1) {
        printf("\nTeacher Record Keeping System");
        printf("\n1. Add Teacher (To create/update file)");
        printf("\n2. Display Science Department Teachers");
        printf("\n3. Exit");
        printf("\n");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addTeacher(); break;
            case 2: displayScienceDept(); break;
            case 3: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
//To create the 'teachers.dat' file to share with our group
void addTeacher() {
    struct Teacher t;
    FILE *fp = fopen("teachers.dat", "ab"); 
    if (fp == NULL) return;
    printf("Enter Name: ");
    scanf(" %[^\n]", t.name); 
    printf("Enter Department: ");
    scanf("%s", t.dept);
    printf("Enter Salary: ");
    scanf("%f", &t.salary);
    printf("Enter Experience: ");
    scanf("%d", &t.experience);
    fwrite(&t, sizeof(struct Teacher), 1, fp);
    fclose(fp);
    printf("Record saved to shared file 'teachers.dat'!\n");
}
void displayScienceDept() {
    struct Teacher t;
    FILE *fp = fopen("teachers.dat", "rb");
    int found = 0;
    if (fp == NULL) {
        printf("Error: 'teachers.dat' not found. Add a teacher first!\n");
        return;
    }
    printf("\n Science Department Teachers \n");
    while (fread(&t, sizeof(struct Teacher), 1, fp)) {
        if (strcmpi(t.dept, "Science") == 0) {
            printf("Name: %s | Exp: %d yrs\n", t.name, t.experience);
            found = 1;
        }
    }
    if (!found) printf("No teachers found in Science department.\n");
    fclose(fp);
}