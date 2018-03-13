#include <iostream> 
#include <fstream> 
using namespace std; 

// Sid Abdullahi 
// CS162 Assignment 1


int main()

{

//Monthly expenses (rent, utilities, food, repairs, gas, entertainment)


int rent; int utilities; int food; int repairs; int gas; int entertainment;

//Monthly Income (salary, social security, investment income)

int salary; int socialsecurity; int investment;

cout << " Please Enter Rent Expense ";
cin >> rent;


cout << " Please Enter utilities Expense ";
cin >> utilities;


cout << " Please Enter Food Expense ";
cin >> food;


cout << " Please Enter Repairs Expense ";
cin >> repairs;



cout << " Please Enter Gas Expense ";
cin >> gas;


cout << " Please Enter Entertainment Expense ";
cin >> entertainment;



// User Enters In Income


cout << " Please Enter Salary ";
cin >> salary;



cout << " Please Enter Social Security Income ";
cin >> socialsecurity; 


cout << " Please Enter Investment Income ";
cin >> investment;



//Read Data Back To User





cout << " You Entered " << rent << " for rent ";
cout << "\n";


cout << " You Entered " << utilities << " for utilities ";
cout << "\n";

cout << " You Entered " << food << " for food ";
cout << "\n";

cout << " You Entered " << repairs << " for repairs ";
cout << "\n";


cout << " You Entered " << entertainment << " for entertainment ";
cout << "\n";

cout << " You Entered " << salary << " for salary ";
cout << "\n";

cout << " You Entered " << socialsecurity << " for social security ";
cout << "\n";

cout << " You Entered " << investment << " for investment income ";
cout << "\n";


}
