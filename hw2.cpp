#include <iostream>
#include <fstream>
using namespace std;


// Sid Abdullahi 
// CS162 Assignment 1
// The Algorithm for this assignment for computing the grades were based on
// wheather the assignments, midterm, or the final was being computed. 
// To calculate the assignments, i just used the formula  assignmentgrade = ((assi1 + assi2 + assi3 + assi4 + assi5)/assigraded)/ (100.0) * (35)
// the percentage would be evaluated depending on the amount of work the user has input out of the 5 assignments.
// To calculate the midter i used the equation  midtermgrade = ((midterm)/(100.0))*(25)
// For the final I used  finalexam = ((final)/(100.0))*(40)
// To calculate the class overall grade I used the equation assignmentgrade + midtermgrade + finalexam //  
 




int main ()

{



int assi1; int assi2; int assi3; int assi4; int assi5; int midterm; int final;
int assigraded;
int midtergrade;


// Gather information from the user to compute grade. //

cout << "\n";


cout << " Please Enter Number Of Assignments Graded  "<<endl;
cin >> assigraded;

cout << "\n" <<endl;



// The user will enter the grades for each assignment. //


cout << " Please Enter Assignment 1 Score Out Of 100 Points "<<endl;
cout << "\n";
cin >> assi1;

cout << "\n";

cout << assi1; 
cout << "\n"<<endl;





cout << " Please Enter Assignment 2 Score Out Of 100 Points "<<endl;
cout << "\n";
cin >> assi2;

cout << "\n";

cout << assi2;
cout << "\n"<<endl;




cout << " Please Enter Assignment 3 Score Out Of 100 Points "<<endl;
cout << "\n";
cin >> assi3;

cout << "\n";

cout << assi3;
cout << "\n"<<endl;





cout << " Please Enter Assignment 4 Score Out Of 100 Points "<<endl;
cout << "\n";
cin >> assi4;

cout << "\n";

cout << assi4;
cout << "\n"<<endl;






cout << " Please Enter Assignment 5 Score Out Of 100 Points "<<endl;
cout << "\n";
cin >> assi5;

cout << "\n";

cout << assi5;
cout << "\n"<<endl;


// Calculate Mid-Term Grade. //


cout << " Please Enter Mid-Term Score Out Of 100 Points "<<endl;
cout << "\n";
cin >> midterm;

cout << "\n";

cout << midterm;
cout << "\n"<<endl;

// Calculate Final Exam Grade. //




cout << " Please Enter Final Exam Score Out Of 100 Points "<<endl;
cout << "\n";
cin >> final;

cout << "\n";

cout << final;
cout << "\n"<<endl;

// Calculate Class Grade //


double assignmentgrade = ((assi1 + assi2 + assi3 + assi4 + assi5)/assigraded)/ (100.0) * (35) ;

double midtermgrade = ((midterm)/(100.0))*(25);

double finalexam = ((final)/(100.0))*(40);


// Display Grades For Assignments, Midterm, and Final Exam //

cout << " Your Assignment Grade is: " << assignmentgrade << endl;

cout << "\n";

cout << " Your Midterm Grade is: " << midtermgrade << endl;

cout << "\n";

cout << " Your Final Exam Grade is: " << finalexam << endl;

cout << "\n";


// Display Overall Class Grade //


cout << " On The Scale of A = 90 - 100   B = 80 - 89  C = 70 - 79  D = 60 - 69  F = 59 - 0" << endl;


cout << "\n";


cout << " Your Final Grade is : " <<  assignmentgrade + midtermgrade + finalexam << endl;

cout << "\n";




}      



