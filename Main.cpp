#include <iostream>
#include <cmath>
#include <unistd.h>
using namespace std;

int main()
{
     while (true)
     {
          string in;
          int out = 0;
          cout << "Enter Binary Number : ";
          cin >> in;
          int n = in.size();
          char x[n];
          for (int i = 0; i < n; i++)
          {
               x[i] = in[i];
          }
          int b = 0;
          for (int i = n - 1; i >= 0; i--)
          {

               if (x[i] == '0')
               {
                    out = out + 0;
               }
               else if (x[i] == '1')
               {
                    double y{std::pow(2, b)};
                    out = out + y;
               }
               b++;
          }
          cout << "Decimal Equivalent: " << out << endl;
          char Q;
          cout << "Do you want to continue? (y/n): " << endl;
          cin >> Q;
          if (Q == 'y' || Q == 'Y')
          {
               continue;
          }
          else if (Q == 'n' || Q == 'N')
          {
               cout << "Thank you" << endl;
               break;
          }
     }
     usleep(1000000);
     return 0;
}