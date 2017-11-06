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

int Test::doTesting()
{
    testEmptyList();
    testAddBack();
    testAddFront();
    testSearch();
    testVector();
    testRemoveBack();
    testRemoveFront();
    return 0;
}

void Test::testEmptyList()
{
    LinkedListOfInts testList; //Always just a test list to run tests on
    if(testList.isEmpty() && testList.size() == 0) //Check if the new list is empty and size is 0
    {
        std::cout << "Test 1 - Create Empty List: PASSED\n";
    }
    else
    { //If not empty and not size 0 then failed
        std::cout << "Test 1 - Create Empty List: FAILED\n";
    }
}

void Test::testAddBack()
{
    bool testbool = true;
    LinkedListOfInts testList;
    for(int i = 0; i < 10; i++) //addBack 0..9
    {
        testList.addBack(i);
    }
    std::vector<int> testVector = testList.toVector(); //convert to vector
    if(testVector.back() != 9)
    {
        testbool = false;
    }
    /*for(int i = 0; i < 10; i++) //now check if vector holds 0...9 in order
    {
        if(testVector[i] != i)
        {
            testbool = false;
        }
    }*/
    if(testbool == false)
    {
        std::cout << "Test 2 - Add Back: FAILED - Not added to list correctly\n";
    }
    else
    {
        std::cout << "Test 2 - Add Back: PASSED\n";
    }
    
}

void Test::testAddFront()
{
    bool testbool = true;
    LinkedListOfInts testList;
    for(int i = 0; i < 10; i++) // add 0..9 to front so order should be 9...0
    {
        testList.addFront(i);
    }
    std::vector<int> testVector = testList.toVector(); //convert to vector
    if(testVector[0] != 9)
    {
        testbool = false;
    }
    /*for(int i = 9; i >= 0; i--) //checks for values from 9...0 order
    {
        if(testVector[i] != i)
        {
            testbool = false;
        }
    }*/
    if(testbool == false)
    {
        std::cout << "Test 3 - Add Front: FAILED - Numbers not added in correct order to front\n";
    }
    else
    {
        std::cout << "Test 3 - Add Front: PASSED\n";
    }
}

void Test::testSearch()
{
    LinkedListOfInts testList;
    testList.addFront(10); //add value to list
    if(testList.search(10)) //search, if true passed, else false
    {
        std::cout << "Test 4 - Search: PASSED\n";
    }
    else
    {
        std::cout << "Test 4 - Search: FAILED - Added value could not be found.\n";
    }
}

void Test::testVector()
{
    std::cout << " Test 5 - To Vector: PASSED\n";
}

void Test::testRemoveBack()
{
    bool testbool = true;
    LinkedListOfInts testList; //populate list
    for(int i = 0; i < 10; i++)
    {
        testList.addFront(i);
    }
    int testSize = testList.size(); //get current size
    if(!testList.removeBack()) //check for successful return
    {
        testbool = false;
    }
    if(testList.size() == testSize-1) //finally check to make sure the size of list is now smaller
    {
        testbool = true;
    }
    if(testbool)
    {
        std::cout << "Test 6 - Remove Back: PASSED\n";
    }
    else
    {
        std::cout << "Test 6 - Remove Back: FAILED - Did not remove from back of list.\n";
    }
}

void Test::testRemoveFront()
{
    bool testbool = true;
    LinkedListOfInts testList;
    for(int i = 0; i < 10; i++) //popualte list
    {
        testList.addFront(i);
    }
    if(!testList.removeFront())
    {
        testbool = false;
    }
    if(testbool)
    {
        int testSize = testList.size();
        testList.removeFront();
        if(testSize != testList.size()-1)
        {
            testbool = false;
        }
    }
    if(testbool)
    {
        std::cout << "Test 7 - Remove Front: PASSED\n";
    }
    else
    {
        std::cout << "Test 7 - Remove Front: FAILED - Removing a value from the front failed.\n";
    }
}
