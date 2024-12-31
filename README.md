# studentDB
StudentDB in C (revision)

# Student Database Management System

## Overview

This project is a simple console-based Student Database Management System written in C. It allows the user to add new students to a database, update existing student details, and ensures valid data entry such as valid student IDs and grades. It provides basic CRUD (Create, Read, Update, Delete) functionality.

## Features

- **Add Student**: Allows the user to input a new student's ID, grade, and name.
- **Update Student**: Enables the user to update an existing student's information based on their ID.
- **Data Validation**: Ensures that the student ID is within the valid range (1-100) and prevents adding students beyond the maximum capacity of the database.

## Setup

1. Clone or download this repository to your local machine.
2. Open the code in a C IDE or text editor (e.g., Code::Blocks, Visual Studio Code).
3. Compile and run the program using a C compiler (e.g., GCC).

## How to Use

Once the program is running, the user will be presented with a simple menu with the following options:

1. **Add a student**: Add a new student with ID, grade, and name.
2. **Update a student**: Modify an existing student's details by providing their ID.
3. **Exit**: Close the program.

### Example Menu:

```
Student Database Menu:
1. Add a student
2. Update a student
3. Exit
Enter your choice:
```

- When adding a student, you will be prompted to enter the student ID, grade, and name.
- When updating a student, you will be prompted to enter the student ID you want to modify, followed by the updated details.

## Code Structure

- **Main Function**: Handles the user interface and provides options to add or update students.
- **`addStudent` Function**: Adds a new student to the database after validating the ID.
- **`updateStudent` Function**: Searches for an existing student by ID and allows the user to modify the student's details.

## Limitations

- The program does not handle deletion of students, but this could be a future enhancement.
- The database size is fixed to `MAX` students (100 in this case).
- The user must input valid student IDs (between 1 and 100).

## Future Enhancements

- Implement delete functionality.
- Allow dynamic memory allocation for students, so the number of students is not fixed.
- Implement saving and loading student data to/from a file for persistence.

