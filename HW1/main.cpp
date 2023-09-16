/**
 * @file main.cpp
 * @author Tucker Self
 * @date 2023-09-15
 * @brief Main program file
 * 
 * the main file for usage of a custom vector class
 */
#include <iostream>
#include <fstream>
#include "Vector.h"

void printVect(char choice);

using namespace std;

int main() {
  Vector list(10);
  int userIn;

  cout << "Choose a number of intergers to be put into a vector: ";
  cin >> userIn;
  cout << endl << "Creating vector..." << endl;

  for(int i=1; i<userIn; i++){
    list.push_back(i);
  }

  char userChoice;
  cout << "Would you like to print the vector? Y/N:";
  
  printVect(userChoice);
  
  return 0;
}

void printVect(char choice){
cin >> choice;
  cout << endl;
  if(choice == 'N'){
    cout << "Understood." << endl;
    return 0;
  }
  else if(choice == 'Y'){
    cout << "Printing..." << endl;
    for(int i=0; i<size; i++)
      cout << list[i] << endl;
    cout << "Done Printing." << endl;
  }
  else
    cout << "Invalid choice, please choose again." << endl;
  printVect(choice);
}
