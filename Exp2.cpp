#include <bits/stdc++.h>
using namespace std;

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    cout << "Value inside callByValue: " << x << endl;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Value inside callByReference: " << x << endl;
}

// Call by Address (Pointer)
void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Value inside callByAddress: " << *x << endl;
}

int main()
{
    int num = 20;

    cout << "Original Value: " << num << endl;

    // Call by Value
    callByValue(num);
    cout << "After callByValue: " << num << endl;

    // Call by Reference
    callByReference(num);
    cout << "After callByReference: " << num << endl;

    // Call by Address
    callByAddress(&num);
    cout << "After callByAddress: " << num << endl;

    return 0;
}