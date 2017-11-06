//
//  Test.h
//  
//
//  Created by Armaan Amirani on 11/6/17.
//

#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include "LinkedListofInts.h"
#include <string>
#include <vector>

class Test{
public:
    Test();
    int doTesting();
    void testEmptyList();
    void testAddBack();
    void testAddFront();
    void testSearch();
    void testVector();
    void testRemoveBack();
    void testRemoveFront();
}

#endif /* Test_h */
