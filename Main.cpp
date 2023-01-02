#include <iostream>
#include <cmath>
#include <unistd.h>
#include <string>
using namespace std;

// Initialise Global Variables
int out = 0;
int b = 0;
char Q;
string in;
string inputbase;
int n = in.size();

// Make a binary Converter function
int BinarytoDecimal(char input)
{
     
     for (int i = n - 1; i >= 0; i--)
     {

          if (input[i] == '0')
          {
               out = out + 0;
          }
          else if (input[i] == '1')
          {
               double y{std::pow(2, b)};
               out = out + y;
          }
          b++;
     }
     return out;
}

int main()
{
     while (true)
     {
          // Initialize the variables
          string inputNumber;
          int inputbase;
          int outputbase;

          // Input the inputbase and number to be converted
          cout << "Enter input base : ";
          cin >> inputbase;

          cout << "Enter Target Base : ";
          cin >> outputbase;

          cout << "Enter Number : ";
          cin >> inputNumber;

          // Call the conversion function
          int n = inputNumber.size();
          char x[n];
          // Converts the input string to a char array
          for (int i = 0; i < n; i++)
          {
               x[i] = inputNumber[i];
          }
          return x;

          // Call Functions
          if (inputbase == 2 && outputbase == 10){
               out = BinarytoDecimal(x);
               cout << "Decimal Equivalent: " << out << endl; // Outputs the converted number
          }else{
               cout << "Invalid inputbase " << inputbase << endl
                    << "Please try again." << endl;
          }
          
          // Queries the user to continue
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