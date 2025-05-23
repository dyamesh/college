#include<iostream>
using namespace std;
class teacher{
public:

    string tname;

    string tdob;

    string tempid;

    string tdept;

    float texp;

    float tsalary;

    

    teacher() {

        tempid = "Un Defined";

        tdept = "Un Assigned";

        texp = 0;

        tsalary = 0;

    }

    

    teacher(string s_tname, string s_tdob, float s_tsalary) {

        tname = s_tname;

        tdob = s_tdob;

        tsalary = s_tsalary;

        tempid = "Un Defined";

        tdept = "Un Assigned";

        texp = 0;

    }

    

    teacher(string s_tname, string s_tdob, float s_tsalary, string s_tempid, string s_tdept, float s_texp) {

        tname = s_tname;

        tdob = s_tdob;

        tsalary = s_tsalary;

        tempid = s_tempid;

        tdept = s_tdept;

        texp = s_texp;

    }

    

    void display() {

        cout << "Name: " << tname << endl;

        cout << "DOB: " << tdob << endl;

        cout << "ID: " << tempid << endl;

        cout << "Department: " << tdept << endl;

        cout << "Experience: " << texp << " years" << endl;

        cout << "Salary: " << tsalary << endl;

    }

};

int main() {

    teacher t1; 

    teacher t2("Alice", "01-01-1980", 50000); 

    teacher t3("Bob", "15-03-1975", 60000, "T123", "Math", 10); 

    cout << "Teacher 1:\n";

    t1.display();

    cout << "\nTeacher 2:\n";

    t2.display();

    cout << "\nTeacher 3:\n";

    t3.display();

    return 0;

}