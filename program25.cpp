#include <iostream>
using namespace std;

class student {
    private:
        int rollNumber;

    public:
        void setRollNumber(int r) {
            rollNumber = r; 
        }

        int getRollNumber() {
            return rollNumber; 
        }
};

int main() {
    student s1; 
    s1.setRollNumber(100);
    cout << s1.getRollNumber() << endl; 
    return 0; 
}
