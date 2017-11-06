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

Test::testEmptyList()
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

test::testAddBack()
{
    testbool = true;
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
        std::cout << "Test 2 - Add Back: FAILED - Not added to list correctly"
    }
    else
    {
        std::cout << "Test 2 - Add Back: PASSED"
    }
    
}
