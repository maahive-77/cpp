/* homework :
    sum of all number from 1 to n which are divisible by 3.
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int Sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
            Sum += i;
        }
    }

    cout << endl;
    cout << "-----------" << endl;
    cout << "sum of  number : " << Sum << endl;

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;

    return 0;
}