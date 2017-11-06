//
//  Test.cpp
//  
//
//  Created by Armaan Amirani on 11/6/17.
//
#include <iostream>
#include "Test.h"
#include "LinkedListOfInts.h"

Test::Test()
{
}

void Test::testEmptyList()
{
    LinkedListOfInts testList; //Always just a test list to run tests on
    if(testList.isEmpty() && testList.size() == 0) //Check if the new list is empty and size is 0
    {
        std::cout << "Test 1 - Create Empty List: PASSED";
    }
    else{ //If not empty and not size 0 then failed
        std::cout << "Test 1 - Create Empty List: FAILED";
    }
}

void test::testAddBack()
{
    bool testbool = true;
    LinkedListOfInts testList;
    for(int i = 0; i < 10; i++) //addBack 0..9
    {
        testList.testAddBack(i);
    }
    
    std::vector<int> testVector = testList.toVector(); //convert to vector
    for(int i = 0; i < 10; i++) //now check if vector holds 0...9 in order
    {
        if(testVector[i] != i)
        {
            testbool = false;
        }
    }
    if(testbool == false)
    {
        std::cout << "Test 2 - Add Back: FAILED - Not added to list correctly";
    }
    else
    {
        std::cout << "Test 2 - Add Back: PASSED";
    }
    
}

void test::addFront()
{
    bool testbool = true;
    LinkedListOfInts testList;
    for(int i = 0; i < 10; i++) // add 0..9 to front so order should be 9...0
    {
        testList.addFront(i)
    }
    std::vector<int> testVector = testList.toVector();
    for(int i = 9; i >= 0; i--)
    {
        if(testVector[i] != i)
        {
            testbool = false;
        }
    }
    if(testbool == false)
    {
        std::cout << "Test 3 - Add Front: FAILED - Numbers not added in correct order to front";
    }
    else
    {
        std::cout << "Test 3 - Add Front: PASSED";
    }
}
