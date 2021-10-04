#include <iostream>
using namespace std;
int main()
{
    int D1, V1, D2, V2, P;
    cin >> D1 >> V1 >> D2 >> V2 >> P;
    int days = 0;
    while (P > 0)
    {
        days += 1;
        if (days >= D1)
        {
            P = P - V1;
        }
        if (days >= D2)
        {
            P = P - V2;
        }
        }
    cout << days << endl;
}