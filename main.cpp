// Assignment - Fuel Range
// Hsu Yati Htike

#include <iostream>
using namespace std; // Needed so we can use cout, cin, endl

int main()
{
  // TODO: Declare your variables, with comments for each
  double tankCapacity; // Capacity of the fuel tank in gallons
  double milesPerGallon; // Vehicle's fuel efficiency in the miles per gallon
  int percentFilled; // Percentage of the fuel tank that is filled (0-100)


  // TODO: Prompt for and input the required values
  cout << "Enter the capacity of the fuel tank in gallons: ";
  cin >> tankCapacity;

  cout << "Enter the miles per gallon for the vehicle: ";
  cin >> milesPerGallon;

  cout << "Enter the percentage to which the tank is filled (0-100): ";
  cin >> percentFilled;

  // TODO: Calculate the results
  double gallonsRemaining = tankCapacity * (percentFilled / 100.0);
  double milesPossible = gallonsRemaining * milesPerGallon;

   // TODO: Output the results
  cout << "The vehicle can be driven " << milesPossible
       << " miles on the remaining fuel." << endl;

  return 0;
  
}