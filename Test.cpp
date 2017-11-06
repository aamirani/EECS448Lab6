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
    LinkedListOfInts testList;
    if(testList.isEmpty() || testList.size != 0)
    {
        std::cout << "Test 1 - Create Empty List: PASSED";
    }
    else{
        std::cout << "Test 1 - Create Empty List: FAILED";
    }
}
