#include <iostream>
using namespace std;

void printNumbers(int n)
{
                  if (n > 0)
                  {
                                    printNumbers(n - 1);
                                    cout << n << " ";
                  }
}

int main()
{
                  int n;
                  cout << "Enter a positive integer n: ";
                  cin >> n;

                  if (n > 0)
                  {
                                    printNumbers(n);
                                    cout < < < < endl;
                  }
                  else
                  {
                                    cout << "Please enter a positive integer." << endl;
                  }

                  return 0;
}