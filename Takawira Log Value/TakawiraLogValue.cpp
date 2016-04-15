/***********************************************
* Takawira's Log Value Generator Version 1.0.0 *
* Created by JRS on 2005.06.25                 *
* Updated n/a                                  *
* Created using Dev-C++ Version 4              *
* Comments coming soon!                        *
* Visit my site at http://strivinglife.net/    *
* or http://jamesrskemp.net/                   *
* Email me at jamesrskemp@eml.cc               *
***********************************************/

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <fstream.h>
#include <math.h>

int main(int argc, char *argv[])
{
  long long int x_number;
  long long int y_number;
  long long int z_number;
  long long int temp_num;

  int t_number;

  cout << " Takawira's Log Value Generator" << endl //Name of program
       << "   v 1.0.0" << endl << endl; //Version of program
  cout << "First, I am going to need three numbers to start with." << endl
       << "It's best to use numbers that get bigger, such as " << endl
       << "3, 8, 18." << endl
       << "Then, I am going to need a number of times to do the program's operation." << endl
       << endl << "So, please enter the first number that you would like to start with: ";
  cin >> x_number;
  cout << endl << "Now, enter the next number that you would like to start with: ";
  cin >> y_number;
  cout << endl << "Now enter the last number that you would like to start with: ";
  cin >> z_number;
  cout << endl << "Now, how many times would you like to do the sums?  Multiply the value that you"
       << endl << " enter by two, and then add two to get how many total values you will have. ";
  cin >> t_number;
  cout << endl << "The program will now begin the sums.  Results will be saved in a file called"
       << endl << " 'sumprog.txt'.  Press enter when ready..." << endl;
  getch();

  int ox_number=x_number;
  int oy_number=y_number;
  int oz_number=z_number;

  if(t_number<1) {
    int t_number=1;
  }

  int num_times=0;
  int front_number=2;

 std::ofstream my_file("takawira.txt");
 if(my_file) {

  my_file << "0, " << ox_number << endl
          << "1, " << oy_number << endl
          << "2, " << oz_number << endl;

begsumloop:
  if(num_times<t_number) {
  temp_num=pow(10,((log10(y_number) + log10(z_number)) - log10(x_number)));
  x_number=y_number;
  y_number=z_number;
  z_number=temp_num;
  front_number=(front_number+1);
  my_file << front_number << ", " << z_number << endl;
  num_times=(num_times+1);

  goto begsumloop;

  }
  else
  cout << "Your first number was: " << ox_number << endl
       << "Your second number was: " << oy_number << endl
       << "Your third number was: " << oz_number << endl
       << "The number of times you specified was: " << t_number << endl << endl
       << "Check the folder this program resides in for your output file, 'takawira.txt'";
  my_file << "Sum Program was run " << num_times << " times, which means that there should be " << (num_times+3) << " numbers." << endl;
  goto exitroo;

}
 else
     goto exitroo;

exitroo:
  std::cerr << "";
  getch();
  return 0;
}
