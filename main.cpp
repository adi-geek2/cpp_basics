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

    fileHandler* fileParserHandler = new fileHandler(true, "sample.txt");
    string parseLine;
    int population;
    while(fileParserHandler->file){
        getline(fileParserHandler->file, parseLine, ':');
        fileParserHandler->file >>  population;
        fileParserHandler->file.get();       
        cout << "--" << parseLine << "--" << population << endl;
        if(!fileParserHandler->file){
            break;
        }
    }
}