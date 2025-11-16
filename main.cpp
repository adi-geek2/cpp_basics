#include "fileHandling.hpp"

#include <iostream>
#include <fstream>
#include <memory>

using   namespace std;

int main(){
    fileHandler* outFileHandler = new fileHandler(false);
    outFileHandler->file << "Here is a new line " << endl;
    outFileHandler->file << "Here is another line" << endl;
    delete outFileHandler;

    fileHandler* inFileHandler = new fileHandler(true);
    string line;
    while(inFileHandler->file){
        getline(inFileHandler->file, line);
        cout << line << endl;
    }
}