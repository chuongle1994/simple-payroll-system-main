#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Employee {
    string name, department;
    int age;
    char gender;
    float days, rate;
};

int main() {
    float salary = 0.00;
    string genderStr;
    Employee employee;

    cout << "\t\tPayroll System in C++";
    cout << "\n\n";
    cout << "\t Creator: Chuong Le";
    cout << "\n\n";

    cout << "Enter the Name of the Employee    : ";
    getline(cin, employee.name);
    cout << "Enter the Name of Department      : ";
    getline(cin, employee.department);
    cout << "Enter the Gender of the Employee  : ";
    employee.gender = getchar();
    cout << "Enter the Number of Days Worked   : ";
    cin >> employee.days;
    cout << "Enter the Daily Rate              : ";
    cin >> employee.rate;

    salary = (employee.days * employee.rate);

    if (employee.gender == 'M' || employee.gender == 'm') {
        genderStr = "Male";
    } else if (employee.gender == 'F' || employee.gender == 'f') {
        genderStr = "Female";
    }

    cout << fixed;
    cout << setprecision(2);

    cout << "\n\n";
    cout << "\t ===== GENERATED REPORT =====";
    cout << "\n\n";
    cout << "\nEmployee Name : " << employee.name;
    cout << "\nDepartment    : " << employee.department;
    cout << "\nGender        : " << genderStr;
    cout << "\nSalary        : $" << salary;
    cout << "\n\n";

    system("pause");
}
