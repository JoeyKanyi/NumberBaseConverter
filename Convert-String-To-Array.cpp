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
     // The code aboveconverts the input string into a char array. This makes it easier to find the place value of each of the characters.
     return 0;
}