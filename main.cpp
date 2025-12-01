#include "binaryFileHandler.hpp"

#include <iostream>
#include <fstream>
#include <memory>

using   namespace std;

int main(){
    Person person1 = {"Alice", 30, 65.5};
    cout << "Person: " << sizeof(Person) << endl;
    cout << "char[50] size: " << sizeof(char[50]) << endl;
    cout << "int size: " << sizeof(int) << endl;
    cout << "double size: " << sizeof(double) << endl;
}