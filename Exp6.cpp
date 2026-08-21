#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    // 1. Default Constructor
    Student()
    {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called." << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
        cout << "Parameterized constructor called." << endl;
    }

    // 3. Copy Constructor
    Student(const Student &obj)
    {
        name = obj.name;
        age = obj.age;
        cout << "Copy constructor called." << endl;
    }

    // Display student details
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }
};

int main()
{
    cout << "Creating object using default constructor:" << endl;
    Student s1;
    s1.display();

    cout << "\nCreating object using parameterized constructor:" << endl;
    Student s2("Anuj", 21);
    s2.display();

    cout << "\nCreating object using copy constructor:" << endl;
    Student s3(s2);
    s3.display();

    cout << "\n objects will be destroyed automatically." << endl;

    return 0;
}