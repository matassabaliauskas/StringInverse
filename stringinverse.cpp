#include <string>
#include <iostream>
#include <vector>

using namespace ::std;

string StringReverse(string input)
{
	int i=0;
	int length = input.size();
	//cout << "\n\nThe length is: " << length << "\n\n";
	
	//char output[length];
	char output[length];
	
	for(i=length; i>=0; i--){
	    output[length-i-1] = input[i];
	}

	cout << "The output is: " << output;
//	printf("%s", output);
		
	
	return output;
	
}

int main(void){
	
	//string input = "Hello";
	string input;
	cout << "Type a word to be reversed: ";
	cin >> input;
	
	
	string expected = "olleH";
	StringReverse(input);
	//printf("Expected is: %d, comparison is %d\n", *expected, *comparison);
	return 0;
}
