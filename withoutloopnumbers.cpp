#include <iostream>
using namespace std;
void printNos(int N)
        cout
    << "enter the value of N" << endl;
cin >> N;
{
                  if (N == 0)
                                    return;
                  printNos(N - 1);
                  cout << N << " ";
}
