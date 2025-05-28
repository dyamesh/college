#include<iostream>
#include<string>
using namespace std;

int main() {
    char shift;
    char shift2;
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    cout << "Enter the shift";
    cin >> shift;

    string* employees = new string[n];

    for (int i = 0; i < n; i++) 
    {
        cout << "Enter employee " << (i + 1) << " name: ";
        cin >> employees[i];
    }
    cout <<"Enter the onther shift";
    cin >> shift2;
    cin >> n;


    cout << "\nEmployee List:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << (i + 1) << ". " << employees[i] << endl;
    }

    delete[] employees;
    return 0;
}