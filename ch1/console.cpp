#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main()
{   
    using namespace std;

    int x = 1024;

    cout << "hello world" << endl;
    cout << "x is " << x << endl;
    
    cout << "x : ";
    cin >> x;

    cout << "x is  " << x << endl;

    return 0;
}