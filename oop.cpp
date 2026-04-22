#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << endl;
    }
};

int main() {
    Student s1;
    s1.name = "maddy";

    s1.display();

    return 0;
}