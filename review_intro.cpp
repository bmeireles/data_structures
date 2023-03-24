//C++ review - intro

using namespace std;
//substitutes the std::

//Each variable must be declared:
int number1;
int number2 = 2;

cout << "Digit the first number" << endl; //print the string in the output 
cin >> number1 >> endl; // insert the digit value in number1 variable

float fdiv = float(number1)/float(number2); //at least the numerator should be in float
//for a float division
res = number1 % number2; //remainder of the division of number 1 by number 2 

//Operators: ==, !=, >, <, 

//Conditionals:
if (number1 == number2) {
    cout << "number1 is equal to number 2" << endl;
}

//Loop structures:
//You can use a counter: 
int counter = 0;

//while
while (counter < 10) {
    //do something
    couter++;
}

//do-while
do {
    //do something
    counter++;
} while (number2 != 10);

//for
for (int number3 = 3; number3 <=20; number3 += 2) {
    //do something
}

//Function declaration:
//(return_type) (function_name) (parameters) {
    //do something with the parameters
    // return someting of the same initial type.
//}
int sum(number1, number2) {
    int total = number1 + number2;
    return total;
}

//Parameters by value and by reference:
//By value: receives a copy of the value inside the variable, not interfering with the value
//in the original variable;
//int function(int a, int b) {}

//By reference: receives a reference for the variable. If the value is changed inside a function,
//the value of that variable will also be modified outside the function. 
//int fucntion (int &a, int &b) {}

//How to decide between value and reference?
//You have to check if you want the modified values in the same variables outside the function or not.
