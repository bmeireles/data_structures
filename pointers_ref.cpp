//Notes from the Data Structure online course from UNIVESP
//Source: https://www.youtube.com/watch?v=8m4LsMF7iik&list=PLxI8Can9yAHcfFBv5K_EEukS4zkQILy-_&index=3
//Pointers and references

//A pointer is a variable which value is a memory address
//Adresses can be the location in memory of a variable or function
//If a variable x has as value the address of a variable y, we say:
//" x points to y"
//the address of a variable is the location in memory of the first byte occupied by it.
//We can create complex structures if we know the address of a variable (linked lists)
//Working directly with memory enables the programmer to create more efficient code!

//Declaring a pointer:
//(type) *(name_pointer)
//type refers to what type of data the pointer is pointing to.
int *intPointer;

//Memory alocation: static or dynamic
//Static: in compilation time, when generating the executable
//Dynamic: while the program is being executed.

//Initializing the pointer
int alpha;
int intPointer = &alpha; //the variable inPointer receives the address of alpha
//Now the pointer *intPointer points to alpha

//To alocate memory dynamicaly:
intPointer = int new; //intPointer points to a new memory space for a int variable
