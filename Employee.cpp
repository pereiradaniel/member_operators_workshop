// Employee - Implementation File
// Employee.cpp

#include <iostream>
#include <iomanip>
#include <cstring>
#include "Employee.h"
using namespace std;

Employee::Employee() {
    // safe empty state
    no = 0;
    name[0] = '\0';
    rate = MIN_WAGE;
}

Employee::Employee(int n, const char* nm) {
    Employee temp(n, nm, MIN_WAGE);
    *this = temp;
}

Employee::Employee(int n, const char* nm, double r) {
    if (n > 0 && nm[0] != '\0' && r >= MIN_WAGE) {
        no = n;
        strncpy_s(name, nm, MAX_NAME); // copy first MAX_NAME characters
        name[MAX_NAME] = '\0';       // ensure that last byte is null
        rate = r;
    }
    else {
        Employee temp;
        *this = temp;
    }
}

void Employee::display() const {
    if (no > 0) {
        cout << fixed << setprecision(2);
        cout << name << " (" << no << ") $" << rate;
    }
    else
        cout << "no data available";
}

///////////////////////////////////////////////////////////////////

// TASK

// Upgrade the Employee module to overload the following operator:
// += operator increases the wage rate of the current object by the amount of the right operand and returns a reference to the current object.

Employee& Employee::operator+=(float wage_increase) {
    if (rate) {
        rate += wage_increase;
    }
    else {
        cout << "No wage rate exists!";
    }
    return *this;
}

///////////////////////////////////////////////////////////////////
