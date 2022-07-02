#include<iostream>
using namespace std;

// objects

class Student {
    public:
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa){
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }
    bool hasHonors(){
        if(gpa >= 3.5){
            return true;
        }
        return false;
    }
};

int main()
{
    Student student1("Jonas", "Physics", 3.45);
    Student student2("Martha", "Astronomy", 3.75);

    cout << student1.hasHonors() << endl;

    return 0;
}