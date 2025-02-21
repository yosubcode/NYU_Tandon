#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string studentName;
    char lessonLocation;
    string studentAddress;
    vector<string> days; // Use vector to store multiple days
};

int main() {
    // Define a vector of Student objects
    vector<Student> students = {
        {"S1", 'H', "Bayside1", {"Mon", "Tue", "Wed", "Thu", "Fri"}},
        {"S2", 'H', "Bayside2", {"Mon", "Tue", "Wed", "Thu", "Fri"}},
        {"S3", 'H', "Flushing1", {"Mon", "Tue", "Wed", "Thu", "Fri"}},
        {"S4", 'H', "Bayside3", {"Mon", "Tue", "Wed", "Thu", "Fri"}},
        {"S5", 'H', "Flushing2", {"Mon", "Tue", "Wed", "Thu", "Fri"}}
    };

    for (const auto& eachStudent : students){
        cout<<"Name: "<< eachStudent.studentName<<"\n";
        cout<<"H/V : "<< eachStudent.lessonLocation<<"\n";
        cout<<"Address: "<< eachStudent.studentAddress<<"\n";
        cout<<"Days: ";
        for (const auto& eachStudentDay : eachStudent.days){
            cout<<eachStudentDay<<;
        }

    }


    // // Output the details of each student
    // for (const auto& student : students) {
    //     cout << "Name: " << student.studentName << "\n";
    //     cout << "Lesson Location: " << student.lessonLocation << "\n";
    //     cout << "Address: " << student.studentAddress << "\n";
    //     cout << "Days: ";
    //     for (const auto& day : student.days) {
    //         cout << day << " ";
    //     }
    //     cout << "\n\n";
    // }

    return 0;
}

// int main(){

//     Student = {
//         {"S1", "H", "Bayside1", {"Mon", "Tus", "Wed", "Thr", "Fri"}},
//         {"S2", "H", "Bayside2", {"Mon", "Tus", "Wed", "Thr", "Fri"}},
//         {"S3", "H", "Flushing1", {"Mon", "Tus", "Wed", "Thr", "Fri"}},
//         {"S4", "H", "Bayside3", {"Mon", "Tus", "Wed", "Thr", "Fri"}},
//         {"S5", "H", "Flushing2", {"Mon", "Tus", "Wed", "Thr", "Fri"}},

//     };

//     cout<<Student<<endl;
//     return 0;
// }