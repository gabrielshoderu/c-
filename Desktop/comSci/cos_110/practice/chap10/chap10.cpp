#include <iostream>
#include <cctype>           //for tolower
#include <cstdlib>          //for atoi
#include <iomanip>
#include <string>

using namespace std;

int main(){

  // ################### 10.1 #################
  //character testing
  char input;

  cout << "Enter any character: ";
  cin.get(input);

  cout << "The character you entered is: " << input << endl;

  if(isalpha(input))
    cout << "That's an alphabetic character" << endl;

  if(isdigit(input))
    cout << "That's a numeric digit" << endl;

  if(islower(input))
    std::cout << "The letter you entered is a lowercase" << '\n';

  if (isupper(input)) {
    /* code */
    std::cout << "The letter you entered is uppercase" << '\n';
  }

  if (isspace(input)) {
    /* code */
    std::cout << "That's a whitespace character" << '\n';
  }

  // ################## 10.2 #################
  //character case conversion
  const double PI = 3.14159;    //constant for pi
  double radius;                //The circle's Radius
  char goAgain;                 //to hold Y or n

  std::cout << "\nThis program calculates the area of a circle" << '\n';
  std::cout << fixed << setprecision(2);

  do {
    /* code */
    //getting the radius and display the Area
    std::cout << "Enter the circle's radius: ";
    std::cin >> radius;

    std::cout << "The area is " << (PI * radius * radius) << '\n';

    //checking if the user wants to do this again
    std::cout << "Calculate another?: ";
    std::cin >> goAgain;

    //validating the input
    while (toupper(goAgain) != 'Y' && toupper(goAgain) != 'N') {
      /* code */
      std::cout << "Please enter Y or N: ";
      std::cin >> goAgain;
    }

  } while(toupper(goAgain) == 'Y');

  // ################## 10.3 ###############
  //c-strings
  const int SIZE = 80;
  char line[SIZE];
  int count = 0;

  //getting a line of input
  std::cout << "Enter a sentence of no mote than " << (SIZE - 1) << "characters: " <<  '\n';
  cin.getline(line, SIZE);

  //displaying the input one character at a time
  std::cout << "The sentence you entered is: " << '\n';
  while (line[count] != '\0') {
    /* code */
    cout << line[count];
    count++;
  }

  cout << endl;

  // ##################### 10.4 #############
  //C_String/Numeric conversion functions
  const int SIZE1 = 20;;
  char input1[SIZE1];
  int total = 0;
  count = 0;
  double average;

  //getting the first number
  std::cout << endl << "This program will average a series of numbers." << '\n';
  std::cout << "Enter the first number or Q to quit: ";
  cin.getline(input1, SIZE1);

  //processing the number and subsequent numbers
  while (tolower(input1[0]) != 'q') {
    /* code */
    total += atoi(input1);
    count++;

    //getting the next number
    std::cout << "Enter the next number or Q to quit: ";
    cin.getline(input1, SIZE1);
  }

  //displaying average if numbers were entered
  if (count != 0) {
    /* code */
    average = static_cast<double>(total) / count;
    std::cout << "Average: " << average << '\n';
  }

  //################## 10.8 ##########################
  //More about the C++ string class
  string movieTitle, name;

  movieTitle = "Wheels of Fury";
  std::cout << endl << "My favorite movie is " << movieTitle << '\n';

  std::cout << "What is your name? ";
  std::cin >> name;
  // getline(cin, name);

  std::cout << "Good morning " << name << '\n';

  cout << endl;

  //###################
  //other ways to define string objects
  string greeting;
  string name1("William smith");

  greeting = "Hello ";
  std::cout << greeting << name << '\n';

  return 0;
}
