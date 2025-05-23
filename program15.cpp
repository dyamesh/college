      #include<iostream>
    using namespace std; 
class Box {

public:

    int length;

    // Default constructor

    Box() {

        length = 0;

    }

    // Parameterized constructor

    Box(int l) {

        length = l;

    }

    void display() {

        cout << "Length: " << length << endl;

    }

};

int main() {

    Box b1;          // Calls default constructor

    Box b2(20);      // Calls parameterized constructor

    b1.display();    // Output: Length: 0

    b2.display();    // Output: Length: 20

    return 0;

}






