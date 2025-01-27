// ligibility Checker for Students

// You are tasked with designing a simple program that determines the eligibility of students based on their scores and ages.

// Class Definitions:

//     Student class:
//         Attributes:
//             name (String): The name of the student.
//             score (int): The student's academic score.
//             age (int): The age of the student.
//         Methods:
//             eligible(): A method that checks the student's eligibility and prints "YES" if the score is greater than 10 and the age is greater than 20. Otherwise, it prints "NO."

// Main Method:

//     Creates an instance of the Student class.
//     Sets the name, score, and age attributes for the student with predefined values.
//     Calls the eligible method to determine and display the student's eligibility.

#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int score;
        int age;

    void eligible(){
        if(score>10 && age>20){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
};


int main() {
    Student obj;
    obj.name = "Tom";
    obj.score = 15;
    obj.age  = 21;
    obj.eligible();

    return 0;
}
