#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    priority_queue<int, vector<int>, greater<int>> cookies; // Min heap
    for (int i = 0; i < n; ++i) {
        int sweetness;
        cin >> sweetness;
        cookies.push(sweetness);
    }

    int operations = 0;
    while (cookies.size() > 1 && cookies.top() < k) {
        int least_sweet = cookies.top();
        cookies.pop();
        int second_least_sweet = cookies.top();
        cookies.pop();

        int new_cookie = least_sweet + 2 * second_least_sweet;
        cookies.push(new_cookie);
        operations++;
    }

    if (cookies.top() >= k) {
        cout << operations << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
