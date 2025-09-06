#include <iostream>
using namespace std;

int main() {
    float radius, area, circumference;
    const float PI = 3.14159;

    cout << "Enter radius of circle: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "Area of circle = " << area << endl;
    cout << "Circumference of circle = " << circumference << endl;

    return 0;
}
