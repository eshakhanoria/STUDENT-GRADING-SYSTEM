# STUDENT-GRADING-SYSTEM

This C++ program analyzes student grades, calculates the average, and identifies the minimum and maximum grades. It utilizes a vector to store individual grades, and the user is prompted to input the number of students along with their names and corresponding grades.

## Code Explanation

The program consists of the following key components:

### 1. Function: `average_grade`

The function `average_grade` calculates the average grade based on the total grade and the number of students. If the number of students is zero, the function returns 0.0, indicating that there are no grades to calculate.

### 2. Main Function

- **Vector Initialization:** A vector named `grades` is initialized to store individual student grades.

- **User Input:** The user is prompted to enter the number of students (`n`).

- **Grade Collection:** A loop iterates through each student, collecting their name and grade. The grades are stored in the `grades` vector, and the total grade is updated.

- **Analysis:** If there is at least one student, the program calculates and displays the average, minimum, and maximum grades using the `average_grade` function, `min_element`, and `max_element` functions, respectively.

### 3. Output

The program outputs the following information:
- Average grade
- Minimum grade
- Maximum grade

If no students are entered, the program informs the user that the analysis cannot be performed.

## How to Use

1. **Clone or download** the repository to your local machine.
2. **Compile** the C++ program using a C++ compiler.
3. **Run** the executable file.
4. Enter the number of students, names, and grades as prompted.
5. View the calculated average, minimum, and maximum grades.

Feel free to contribute, provide feedback, or customize the program as per your preferences.

