#include <iostream.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main()
{
long Sum = 0;
long First, Last;
cout << "Takawira's Sum Value";
cout << "--------------------";
cout << "This program allows you to calculate the sum of ";
cout << "numbers\nfrom a lower to a higher value in a range\n";
cout << "Enter the first number: ";
cin >> First;
cout << "Enter the last number:  ";
cin >> Last;
// Make sure that the last number is higher than the first
// If not, inverse them
if( First > Last )
{
 int Temp;
 Temp  = First;
 First = Last;
 Last  = Temp;
}
 for( int Counter = First; Counter <= Last; Counter++ )
Sum += Counter;
cout << "\nSum of numbers from " << First << " to " << Last << " = " << Sum << endl;
cout << endl << "Press enter to end";
getch();
return 0;
}
