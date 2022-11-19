#include <iostream>
using namespace std;
int main()
{
    int n, k, t;
    cin >> n >> k;
    int c = 0;
    while (n >0)
    {
        n--;
        cin >> t;
        if (t % k == 0)
            c++;
    }
    cout << c;
    return 0;
}