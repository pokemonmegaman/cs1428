// lab 1 practice 1

#include <iostream> 
using namespace std;

int main()
{
	// 1. make NAME a constant
	const string NAME = "Fred Flintstone"; 


	// 2. Give in an appropriate data type for each of the 
    //    following variables (replace underscores).
	int age = 38;

	float gpa = 1.5;

	char grade = 'D';

	bool enrolled = true;

	
	cout << NAME << " is " << age << " years old. He has a " 
	     << gpa << " GPA. His letter grade is a(n)" << grade << endl;
	
	// 3. write a cout statement that prints "Hello World" to the 
	//    console using the following two variables.
	string hello = "Hello";
	string world = "World";
	
	cout << hello << " " << world;
	
	

	return 0;
}