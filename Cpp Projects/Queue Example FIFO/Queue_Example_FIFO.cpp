#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;

    q.push("First");
    q.push("Second");
    q.push("Third");

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.pop();
    cout << "After pop, front: " << q.front() << endl;

    return 0;
}
