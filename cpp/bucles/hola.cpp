#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3 = 2;
    while (n1 + n2 < 50)
    {
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;

        cout << n3 << " " << endl;
    }
    return 0;
}