#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	// this gives the discounted rate, given the level of discount
	const double discount[4] = { .90, .85, .80, .75 };
	
	double unitCost = 12.00; // unit cost per shirt
	int shirts;              // number of t-shirts to be ordered
	double totalCost;        // total cost of the order
	
	// gather user input
	cout << "How many shirts would you like ?\n";
	cin >> shirts;
	
	// determine discount based on order quantity
	if (shirts < 0) {
		cout << endl << "Invalid input: "
		     << "Please enter a non-negative integer amount." << endl;
		return 1;
	}
	else if (shirts > 30)
		unitCost *= discount[3];
	else if (shirts > 20)
		unitCost *= discount[2];
	else if (shirts > 10)
		unitCost *= discount[1];
	else if (shirts > 4 )
		unitCost *= discount[0];
	
	totalCost = unitCost * shirts;
	
	// determine whether or not to show cents, and if so, to show
	// both decimal places. If the float value is between the ceiling
	// and the floor, then we know it has cent value.
	if ( unitCost > floor(unitCost) && unitCost < ceil(unitCost) ) {
		cout << endl
		     << "The cost per shirt is $" << fixed << setprecision(2)
		     << unitCost;
	} else {
		cout << endl
		     << "The cost per shirt is $" << unitCost;
	}
	
	// do the same for the totalCost
	if ( totalCost > floor(totalCost) && totalCost < ceil(totalCost) ) {
		cout << " and the total cost is $" << fixed << setprecision(2)
		     << totalCost << endl;
	} else {
		cout << " and the total cost is $" << totalCost << endl;
	}
	     
	
	return 0;
}
