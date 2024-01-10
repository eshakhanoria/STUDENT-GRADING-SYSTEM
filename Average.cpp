#include <iostream>
#include <vector>
#include <string>
using namespace std;

double average_grade(double totalgrade, int n)
{
    if (n == 0)
    {
        return 0.0;
    }
    else
    {
        return totalgrade / n;
    }
}

int main()
{
    vector<double> grades;
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    double totalgrade = 0.0;

    for (int i = 1; i <= n; i++)
    {
        string name;
        cout << "Enter the name of student: " << i << endl;
        cin >> name;
        double grade;
        cout << "Enter the grade of student: " << i << endl;
        cin >> grade;
        totalgrade = totalgrade + grade;
        grades.push_back(grade);
    }
    if (n > 0)
    {
        average_grade(totalgrade, n);
        cout << "Average grade: " << average_grade(totalgrade, n) << endl;
        double mingrade = *min_element(grades.begin(), grades.end());
        double maxgrade = *max_element(grades.begin(), grades.end());

        cout << "Minimum Grade: " << mingrade << endl;
        cout << "Maximum Grade: " << maxgrade << endl;
    }
    else
    {
        cout << "Average , Minimum , Maximum can not be found." << endl;
    }
    return 0;
}