#inclue < iostream>
using namespace std;
int main()
{
                  int N;
                  cout << "enter the value of N" << endl;
                  cin >> N;

                  void printNos(int N)
                  {
                                    if (N == 0)
                                                      return;
                                    printNos(N - 1);
                                    cout << N << " ";
                  }
}
