#include <iostream>
using namespace std;

int main()
{
     string in;
     int out;
     cin >> in;
     int n = in.size();
     char x[n];
     for (int i = 0; i < n; i++)
     {
          x[i] = in[i];
          cout << x[i] << endl;
     }
     return 0;
}