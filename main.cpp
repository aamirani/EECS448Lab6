/**
*	@Armaan Amirani
*	@11/6/2017
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();
    std::cout << "Linked List of Ints tester - Armaan Amirani\n";
    Test myTester;
    myTester.doTesting();

	std::cout << "Done.\n";
	
	return (0);

}

