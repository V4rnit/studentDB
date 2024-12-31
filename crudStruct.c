#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int ID;
    float grade;
    char name[100];
} studentDB;

#define MAX 100

int addStudent (studentDB arr[], int count){
    if (count >= MAX)
    {
        printf("The database is full.");
        return count;
    }
    else{
        studentDB newStudent;
        while (newStudent.ID <= 0 || newStudent.ID > 100){
            printf("Enter the Student ID (1-100)\n");
            scanf("%d",&newStudent.ID);
            
        }
        newStudent.grade = -1;
        while (newStudent.grade <= 0 || newStudent.grade > 100){
            printf("Enter the student grade\n");
            scanf("%f",&newStudent.grade);
        }

        getchar();
        printf("Enter Student name:");
        scanf("%[^\n]", newStudent.name);
        arr[count] = newStudent;
        count++;
        printf("Student added succesfully");
    }
    return count;

}

void updateStudent(studentDB arr[], int count){
    if (count == 0){
        printf("The Student Database is empty");
        return;
    }
    int searchID;
    int studentFound = 0;
    while (searchID <= 0 || searchID > 100){
        printf("Enter a valid search ID between (1-100)\n");
        scanf("%d", &searchID);
    }
    for (int i = 0; i < count; i++){
        if (searchID == arr[i].ID){
            studentFound = 1;
            printf("Enter the new Student ID:\n");
            scanf("%d",&arr[i].ID);
            printf("Enter the new grade for the Student:\n");
            scanf("%f", &arr[i].grade);
            getchar();
            printf("Enter the new name of the Student");
            scanf("%[^\n]", arr[i].name);
            break;
        }
    }
    if (!studentFound){
        printf("Cannot find the Student with this ID");
    }
    
}
    