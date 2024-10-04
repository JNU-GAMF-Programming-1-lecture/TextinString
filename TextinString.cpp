/*
 * TextinString.cpp
 *
 * Using the string data type
 *
 */
#include <iostream>
#include <string> 
#include <bitset> 

using namespace std;

int main()
{
	string s1; 			// Declare the string variable s1
	s1 = "The string class provides an easy-to-use way for storing and manipulating text data in memory.";
	cout << "s1= " << s1 << endl;
	cout << "Length of the text in bytes :" 
		<< s1.size() << endl;
	// Create a string object with initialization.
	string s2 = "It contains several member functions.";
	cout << "s2= " << s2 << endl;
	cout << "s1+s2= " << s1 + s2 << endl;  // Concatenating two strings.
	string s3 = s1; // The command "string s3(s1);" can also be used.
	cout << "s3= " << s3 << endl;
	size_t where = s3.find("data");		// Returns location of the first occurence of the text "data" in the string s3. 
	cout << "The location of the first occurence of word 'data' in s3 is " << where << "\n";
	string s4 = "To be or not to be";
	cout << "s4= " << s4 << endl;
	// string::npos is an unsigned int of type size_t. Its actual size depends on the compiler and all of its bits are ones. 
	cout << "The size of string::npos is: " << sizeof(string::npos) << " bytes" << endl;
	cout << "Its content is: ";
	cout << bitset<64>(string::npos) << endl;
	if (s4.find("is") == string::npos)
		cout << "The word 'is' is not contained in the string \"" << s4 << "\"" << endl;
	if (where != string::npos)
	{
		s3.replace(where, 4, "information"); 
		// It takes out 4 characters from s3 starting from the position given in the variable "where" and inserts the text "information". 
		cout << "s3= " << s3 << endl;
	}
	where = s1.find("string");
	string s5;
	if (where != string::npos)
	{
		cout << "where= " << where << endl;
		s5 = s1.erase(where, 6); // Delete a substring starting from a given position.
		cout << "s5= " << s5 << endl;
	}

	s5.insert(2, "string");		// Insert a string starting from a given position.
	cout << "s5= " << s5;
	s2 = "Starting ";
	s2 += "added";
	cout << "\ns2= " << s2 << endl;
	cout << s2.substr(5, string::npos) << endl;   // Create a substring starting from a given position until the end of the string.
	cout << "Enter fist name and last name separated by a space: ";
	cin >> s5; // Read until the first whitespace.
	cout << s5 << endl;
	cin >> s4;
	cout << s4 << endl;
	cin.ignore();
	cout << "Enter full name: ";
	getline(cin, s5);
	cout << s5 << endl;
	return 0;
}

