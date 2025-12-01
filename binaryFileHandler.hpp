#ifndef BINARY_FILE_HANDLER_HPP
#define BINARY_FILE_HANDLER_HPP

using namespace std;

#pragma pack(push, 1)
struct Person {
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

#endif /*BINARY_FILE_HANDLER_HPP*/