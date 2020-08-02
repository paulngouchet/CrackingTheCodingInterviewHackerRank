#include <iostream>
using namespace std;

// when the recursion can rewritten in terms of mathematical expression, do it, then use that formula as the final case
// But in recursion, one important thing is that you need a base case or the recursion will just keep going

int fibonacci(int n) {
    // Complete the function.
    if(n == 0 )
        return 0;
    else if( n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
