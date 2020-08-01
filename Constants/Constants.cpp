// Section 6
// Constants

/* 
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
====================================
Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room
    
    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main() {
     cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
	
    cout << "\nHow many Small rooms would you like cleaned? ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
	
	cout << "\nHow many Big rooms would you like cleaned? ";
	int number_of__big_rooms {0};
	cin >> number_of__big_rooms;
    
    const double  price_per_Small_room {25};
	const double  price_per_Big_room {35};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days
    
    cout << "\nEstimate for carpet cleaning service" << endl;
	
    cout << "Number of Small rooms: " << number_of_small_rooms << endl;
	  cout << "Number of Big rooms: " << number_of__big_rooms << endl;
	  
    cout << "Price per Small room: $" << price_per_Small_room << endl;
	cout << "Price per Big  room: $" << price_per_Big_room << endl;
	
	double TotalCost = (price_per_Small_room * number_of_small_rooms) + (price_per_Big_room * number_of__big_rooms);
	
    cout << "Cost : $" << TotalCost << endl;
    cout << "Tax: $" << TotalCost * sales_tax << endl;
    cout << "===============================" << endl;
    cout << "Total estimate: $" << TotalCost + (TotalCost * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;
    return 0;
}

