/*A template to build programs that do not use any event-driven or concurrent programming techniques
Program version 1
Created 26/11/23
by Rohan Kakade
If working with floating point numbers, change line 5 in the mbed_app.json file to "target.c_lib": "std",
*/

#include "mbed.h"
//#include any other header files here

//Any classes defined here

//Input and output initialisations here

//Function prototypes declared here

//Any global variables declared here

// main() runs in its own thread in the OS
int main()
{
    //lines that should only run once

    //lines that should run forever declared here 
    while (true) 
    {
     //anything written here happens forever 

    }
    
    //un-comment the line below if your program does not contain an infinite while loop
    // while(true) { sleep();}

} //end of main ( ) function

// User created functions defined here









/*
Below are some of the lines you might commomly used in programs:

DigitalOut led(D0); //variable called led declared as an output attached to pin D0

DigitalIn button(BUTTON1); //variable called button declared an input variable attached to BUTTON1 (blue button)

printf("The value is %d",x); //prints an integer value

printf("Hello world!"); //prints a message

thread_sleep_for(1000); //creates a 1s delay

led = true; //makes pin represented by variable led to be at 3.3V

led = false; //makes pin represented by variable led to be at 0V

if(button == false) { } //does whatever is inside the { } if pin represented by variable called button reads 0V

else if (x >= 3) { } //does whatever is inside the { } if variable 'x' value is greater than or equal to 5

else { } //does whatever is inside the { }  if the "if statement" condition is not true

while (a > 8) { } //does whatever is inside the { } as long as variable 'a' has a value greater than 8

for (int i = 1;i<=10;++i) { } //does whatever is inside the { } 10 times

int functionname(int j, int p) //function definition example
{
  return* j+p; //returns sum of two numbers passed to it by the user
}

int sum = functionname(2,3) //example of a function called inside main()

int functionname(int j, int p); //example of a function prototype placed above main( ) 

class tree { }; //creates a new data type called tree
class tree
{
    int _x;
    int _y;
    public:
    tree(int a, int b) //this is a constructor 
    {
        _x =a;
        _y = b;
    }

};
*/