// C++ program to find LCM using HCF
#include< iostream>
using namespace std;

// global variable
static int common;

// function declaration
long lcm(int, int);

// main function
int main()
{
  // declare variable
  int num1, num2;

  // take input
  cout << "Enter two Integers: ";
  cin >> num1 >> num2;

  // display result
  cout << "LCM = " << lcm(num1, num2) << endl;

  return 0;
}

// function to find LCM value
long lcm(int n1, int n2)
{
  // increase common
  common += n2;
  if(common % n1 == 0)
     return common; // base case
  else
     return lcm(n1, n2); //general case
}
