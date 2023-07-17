#include <iostream>
using namespace std;

void printN(int i, int N)
{
    if (i > N)
    {
        return;
    }

    printN(i + 1, N);
    cout << i << " ";
}

int main()
{
    printN(1, 3);
}