/* 
 * File:   main.cpp
 * Author: davidbethke
 *
 * Created on October 14, 2011, 6:55 PM
 */

#include <cstdlib>
#include<iostream>
#include <string>
#include <list>
using namespace std;

/*
 * 
 */
void addString(string&, list<string> &);
int main(int argc, char** argv) {
    list<string> nameList;
    list<string>::const_iterator it;
    
    string name1,name2,name3;
    name1="Name1";
    name2="Name2";
    name3="Dave";
    nameList.push_back(name1);
    nameList.push_back(name2);
    addString(name3,nameList);
    addString(name1,nameList);
    it=nameList.begin();
    cout << "Hello World"<< endl;
    cout << "Name1:"<< name1<<","<<"Name2:"<< name2<<endl;
    for(it=nameList.begin();it != nameList.end();it++)
    {
        cout << "list val:"<< *it<<endl;
        
    }
    /*
    cout << "list val:"<< *it<<endl;
    it++;
    cout << "list val:"<< *it<<endl;
    it++;
    cout <<"list val from addString:"<< *it<<endl;
    */
    return 0;
}
void addString(string & s,list<string>& list ){
    list.push_back(s);
}

