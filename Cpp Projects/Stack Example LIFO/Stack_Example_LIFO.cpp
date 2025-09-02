#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack top: " << st.top() << endl;  // 30

    st.pop();
    cout << "After pop, top: " << st.top() << endl;  // 20

    return 0;
}
