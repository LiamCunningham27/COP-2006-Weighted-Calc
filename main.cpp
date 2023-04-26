#include <iostream>
 using namespace std;

int main ()
{
int selection;
  do
    {
cout << "Welcome to my Grade/Weighted Calculator!\n" << std::endl;
cout << "(1) Grade Calculator\n";
cout << "(2) Weighted Grade Calculator\n";
cout << "(0) Exit\n" << std::endl;
cout << "Enter choice (0-2): ";

cin >> selection;

switch (selection)

{

case 1:

  {

int gradeAm;

float total = 0;

cout <<

      "Enter the number of grades you would like calculated: ";

cin >> gradeAm;

auto *grades = new float[gradeAm];

for (int i = 0; i < gradeAm; i++)

      {

cout << "Enter Grade: ";

cin >> grades[i];

total += grades[i];

}

float final = total / gradeAm;

cout << "Overall Grade: " << final << endl;

delete[]grades;

break;

}

case 2:

  {

int gradeAm;

float total, weightTotal;

cout <<

      "Enter the number of grades you would like calculated: ";

cin >> gradeAm;

auto *grades = new float[gradeAm];

auto *weights = new float[gradeAm];

for (int i = 0; i < gradeAm; i++)

      {
cout << "Enter Grade: ";

cin >> grades[i];

cout << "Enter Weight for Grade: ";

cin >> weights[i];

total += (grades[i] * weights[i]);

weightTotal += weights[i];

}

float final = total / weightTotal;

cout << "Weighted Grade: " << final << endl;

delete[]grades;

delete[]weights;

break;

}
default:

cout << "Invalid choice. Please enter a number 1-2.\n";

}

}

while (selection != 0);

return 0;

}