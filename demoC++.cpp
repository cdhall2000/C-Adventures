// demoC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

using namespace std;

class omnitool {
	int omni;
	int tool;

public:
	omnitool();
	omnitool(int,int&);
	int * babbish;
	int alphon = 4;
	int tools() { 
		omni = 1;
		tool = 7;
		return omni * tool; 
	}
private:
	int omacron = 6;
	

};
omnitool::omnitool() {
	omni = 5;
	tool = 10;

	babbish = &omni;
	*babbish = 1;
}

omnitool::omnitool(int one, int& two) {
	omni = one;
	two *= 5;
	tool = omacron;
	babbish = &omni;
	*babbish = 1;

}

int main()
{
	int a = 2;

	omnitool Alpha(10, a);
	//a = Alpha.tools();
	//a = *Alpha.babbish;
	a = Alpha.tools();
	printf("%i", a);
	cout << "what is this?" << a << "?";

	

	return 1;

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
