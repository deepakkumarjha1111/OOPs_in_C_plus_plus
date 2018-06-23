
// '#' sign are directives for the preprocessor
//they are not regular code lines with experessions but indications for the compiler's preprocessor
#include<iostream>
// here directive #include <iostream> tells the preprocessor to include the iostream standard file
// This specific file (iostream) includes the declarations of the basic standard input-output library 
// in C++, and it is included because its functionality is going to be used later in the program
using namespace std;
//All the elements of the standard C++ library are declared within what is called a namespace, 
//the namespace with the name std.
// So in order to access its functionality we declare with this expression
// that we will be using these entities. 
int main()
//This line corresponds to the beginning of the definition of the main function. 
//The main function is the point by where all C++ programs start their execution,
// independently of its location within the source code. 
//It does not matter whether there are other functions with other names defined before or after it 
//the instructions contained within this function's definition will always be the first ones to be executed
//in any C++ program.
// For that same reason, it is essential that all C++ programs have a main function. 
{
	//This line is a C++ statement.
	// A statement is a simple or compound expression that can actually produce some effect.
	// In fact, this statement performs the only action that generates a visible effect 
	//in our first program. 
	cout<<"Hello World\n";
	//cout represents the standard output stream in C++, and the meaning of the entire statement 
	//is to insert a sequence of characters (in this case the Hello World sequence of characters)
	//into the standard output stream (which usually is the screen).
	
	//"cout" is declared in the iostream standard file within the std namespace,
	// so that's why we needed to include that specific file and to declare that
	// we were going to use this specific namespace earlier in our code.
	
	//Notice that the statement ends with a semicolon character (;).
	// This character is used to mark the end of the statement and 
	//in fact it must be included at the end of all expression statements in all C++ programs 
	
	return 0;
	//The return statement causes the main function to finish.
	// return may be followed by a return code (in our example is followed by the return code 0).
	// A return code of 0 for the main function is generally interpreted as the program worked 
	//as expected without any errors during its execution. 
	//This is the most usual way to end a C++ console program.
}

/*
   Comments are parts of the source code disregarded by the compiler.
   They simply do nothing. 
   Their purpose is only to allow the programmer to insert notes or descriptions
   embedded within the source code. 
   C++ supports two ways to insert comments:
   
*/    
  
   // line comment
   /* block comment */
   





































