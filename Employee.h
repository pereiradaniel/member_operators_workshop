// Employee - Header File
// Employee.h

const double MIN_WAGE = 10.25;
const int    MAX_NAME = 20;

class Employee {
    int no;
    char name[MAX_NAME + 1];
    double rate;
public:
    Employee();
    Employee(int, const char*);
    Employee(int, const char*, double);
    void display() const;
    Employee& operator+=(float g);  // Prototype for task.
};