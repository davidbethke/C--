/* 
 * File:   newsimpletest.cpp
 * Author: davidbethke
 *
 * Created on Oct 14, 2011, 9:05:37 PM
 */

#include <stdlib.h>
#include <iostream>
#include <list>
#include <string>
using namespace std;
/*
 * Simple C++ Test Suite 
 */

void addString(string&, list<string>&);

void testAddString() {
    string p0;
    list<string> p1;
    p0="test";
    addString(p0, p1);
    list<string>::const_iterator it;
    it=p1.begin();
    if (p0 != *it) {
        std::cout << "%TEST_FAILED% time=0 testname=testAddString (newsimpletest) message=error message sample" << std::endl;
    }
    else {
        std::cout<<"%TEST_PASSED% time=0 testname=testAddString (newsimpletest) message=Passed" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testAddString (newsimpletest)" << std::endl;
    testAddString();
    std::cout << "%TEST_FINISHED% time=0 testAddString (newsimpletest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

