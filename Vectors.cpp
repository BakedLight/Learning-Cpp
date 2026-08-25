// ==================== Notes ================================
// STL:
// -> Standard Template Library of c++
// -> Implementation of common dataStructures like vectors, stack, etc. (containers) is pre-written in it
// -> and can easily be accessed for using quickly without building them from scratch
// -> Implementation imp but usage > implementation
// -----------------------------------------------------------
// Info:
// -> 2nd DataStructure
// -> Very array-like
// -> Too much List-like (from Python)
// -> Dynamic in nature (no fixed size) instead of static (fixed size like array)
// -> While using vectors, write (g++ -std=c++11 fileName.cpp; ./a.exe) for execution in terminal
// -> to tell that we wanna use 11th standard of c++ so it won't generate unneccessary problem
// -----------------------------------------------------------
// Creation Syntax:
// -> vector<int> vec; ->> Default size = 0
// -> vector<int> vec = {1, 2, 3, ...}; ->> custom size
// -> vector<int> vec (size, indxValue); ->> custom size
// -> eg: vector<int> vec (5, 0); generates vector as {0, 0, 0, 0, 0}
// -----------------------------------------------------------
// Accessing:
// -> Indices are same as array (0 to sizeofvector-1)
// -> Accessing value from an empty vector leads to segmentation fault (not always, sometimes no error is generated)
// -> For each loop:
// -> Iterators don't store indices but the value at the indices (much like running for loop on a list in Python)
// 
// -> for(int value : vecName){
// ->   Code Body;
// -> }
// 
// -----------------------------------------------------------
// VectorFunctions:
// vecName.size() -> returns size of vector (i.e., number of values NOT size in memory)
// vecName.capacity() -> returns cpacity of vector (i.e., total spaces allocated to vector in memory at the time of call)
// vecName.push_back(value) -> Element gets pushed at last of vector (increases size by 1)
// vecName.pop_back() -> Element gets removed from last of vector (no data is returned)
// vecName.front() -> Returns first value of vector => same as vecName[0]
// vecName.back() -> Returns last value of vector => same as vecName[(vecName.size() - 1)]
// vecName.at(index) -> Returns value at that index in vector => same as vecName[index]
// vecName.clear() -> Removes all the elements of a vector but doesn't delete the vector
// vecName.reserve(spaces) -> for optimisation -> Reserves specific number of spaces in vector to prevent possible reallocation and internal copying which increases efficiency
// There are some more additional functions when we're talking about iterators
// -----------------------------------------------------------
// Static vs Dynamic Allocation: (AKA how is a vector stored in memory)
// -> Static Allocation:
// -> It is defined as when the memory allocated for a variable/data structure is fixed during execution
// -> I.e., more memory can't be assigned and assigned memory can't be partially freed
// -> Allocated at compile time
// -> This makes dataStructures non-resizeable
// -> It is done in stack memory
// -> Used in arrays
// -> Dynamic Allocation:
// -> It is defined as when the memory allocated for a variable/data structure is variable during execution
// -> I.e., more memory can be assigned and some memory of dataStructure can be freed
// -> Allocated at runtime;
// -> Initial memory is allocated at compile time based on value assigned to dataContainer at creation
// -> This makes datastructures resizeable
// -> It is done in heap memory
// -> Used in vectors
//-----------------------------------------------------------
// Understanding vector creation in memory:
// -> internally vector ek array hi hota hai
// -> vector<dType> vecName; => memory mein zero size ka vector bana
// -> vec.push_back(value1); => memory mein 1 size ka vector create hota hai with value1 at 0th place (size=1) (memory mein array hi hai)
// -> vec.push_back(value2); => same vector (which is actually an array in memory) mein store karne ka try karta hai
// => since jagah nahi hai, it creates another vector of double the size of original
// => usmein original ki values copy karta hai aur uske aage wali place mein added value daalta hai (value2 in this case) & then deletes original vector and names new vector as original [Entire process is automatic]
// -> vec.push_back(value3); => Since again, no more space in vector (stored as array in memory), internally new array is created of double size.
// => additions are pushed in new array and new replaces original

// -> it has 2 observable properties now {size: number of elements (3 rn), capacity: total spaces (4 rn)}
// -----------------------------------------------------------
// Referencing c++ containers (stores data like vector):
// -> Passing c++ container normally passes it by value, in case of pointers it passes it by reference
// -> Using ampersant '&' in function definition makes it pass by referece
// -> i.e.; changes made in function to that referenced container gets changed in original
// -> In case of vector: write, 'returnType funcName (vector<dType> vecName) {}' to pass by value and
// -> write 'returnType funcName (vector<dType>& vecName) {}' or 'returnType funcName (vector<dType> &vecName) {}' to pass by reference
// -----------------------------------------------------------



#include <iostream>
#include <vector>
using namespace std;

// Leetcode question: Single Number
// Problem: array has all numbers repeated except one, find that one number (linear runtime complexity -> ek hi loop)
// n ^ n = 0; n ^ 0 = n
int singleNumber(vector<int>& vec){
    int uniqueDigit = 0;
    for (int value : vec) {
        uniqueDigit = uniqueDigit ^ value;
    }
    return uniqueDigit;
}

int linearSearch(vector<int> &vec, int target){
    for (int i = 0; i < vec.size(); i++){
        if (vec[i] == target) {
            return i;
        }
    }
    return -1;
}

vector<int> reverseOfVector(vector<int> vec){
    for (int i = 0; i <= (vec.size()-1)/2; i++) {
        swap(vec[i], vec[vec.size()-1-i]);
    }
    return vec;
}

int main() {
    
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    // cout << vec.size() << endl; //3
    // cout << vec.capacity() << endl; //4

    // for each loop
    // for (char val : vec) {
    //     cout << val << endl;
    // }

    vector<int> single = {4, 1, 2, 1, 2};
    vector<int> revSingle = reverseOfVector(single);
    for (int i : revSingle) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}