#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;  double marks;  char g;
    cout << "Name and marks: ";  cin >> name >> marks;
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks\n";  return 1;
    }
    if (marks >= 90)      g = 'A';
    else if (marks >= 80) g = 'B';
    else if (marks >= 70) g = 'C';
    else if (marks >= 60) g = 'D';
    else                  g = 'F';
    cout << left << setw(10) << name
         << right << setw(6) << fixed
         << setprecision(1) << marks
         << setw(3) << g << endl;
    return 0;
}