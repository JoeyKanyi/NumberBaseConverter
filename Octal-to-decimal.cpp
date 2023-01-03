#include <iostream>
#include <cmath>
#include <unistd.h>
using namespace std;

/*
     Does not include decimal conversion functions
*/
int main()
{
      cout << "Only supports octal conversion without decimal(10^-) conversion functions" << endl;
      while (true)
      {
            // Initialize the variables
            string in;
            int out = 0;
            int b = 0;
            char Q;

            // Inputs the number for a conversion as a string
            cout << "Enter Octal Number : ";
            cin >> in;

            // Create a char array of the same size as the input string
            int n = in.size();
            char x[n];

            // Converts the input string to a char array
            for (int i = 0; i < n; i++)
            {
                  x[i] = in[i];
            }

            // Does the actual conversion from a Octal number to the array
            for (int i = n - 1; i >= 0; i--)
            {

                  if (x[i] == '0')
                  {
                        out = out + 0;
                  }
                  else if (x[i] == '1')
                  {
                        double y{std::pow(8, b)};
                        out = out + y;
                  }
                  b++;
            }

            // Gives the output
            cout << "Decimal Equivalent: " << out << endl;

            // Queries the user whether to close the program
            cout << "Do you want to continue? (y/n): " << endl;
            cin >> Q;
            if (Q == 'y' || Q == 'Y')
            {
                  continue;
            }
            else if (Q == 'n' || Q == 'N')
            {
                  cout << "Thank you. Goodbye" << endl;
                  break;
            }
      }
      usleep(1000000);
      return 0;
}