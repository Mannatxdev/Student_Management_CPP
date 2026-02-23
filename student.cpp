#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() const {
        cout << "Roll: " << roll 
             << " | Name: " << name 
             << " | Marks: " << marks << endl;
    }
};

int main() {
    vector<Student> students;
    int choice;

    while (true) {
        cout << "\n1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Sort by Marks\n";
        cout << "5. Save to File\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            s.input();
            students.push_back(s);
        }

        else if (choice == 2) {
            for (const auto &s : students) {
                s.display();
            }
        }

        else if (choice == 3) {
            int roll;
            cout << "Enter Roll No to search: ";
            cin >> roll;

            bool found = false;
            for (const auto &s : students) {
                if (s.roll == roll) {
                    s.display();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";
        }

        else if (choice == 4) {
            sort(students.begin(), students.end(),
                 [](Student a, Student b) {
                     return a.marks > b.marks;
                 });
            cout << "Sorted by marks (descending).\n";
        }

        else if (choice == 5) {
            ofstream file("students.txt");
            for (const auto &s : students) {
                file << s.roll << " "
                     << s.name << " "
                     << s.marks << endl;
            }
            file.close();
            cout << "Saved to file.\n";
        }

        else if (choice == 6) {
            break;
        }

        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}