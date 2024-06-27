#include <iostream>
#include <limits>

using namespace std;

int main() {

    cout << "This is a test, if you didn't know yet" << endl;

    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.clear();

    cout << n1 << " + " << n2 << " = " << n1+n2 << endl;

    return 0;
}