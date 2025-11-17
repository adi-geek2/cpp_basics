#ifndef FILE_HANDLING_HPP
#define FILE_HANDLING_HPP

#include <fstream>
#include <iostream>

using namespace std;

class fileHandler{
    public:
        fileHandler(bool mode);
        fileHandler(bool mode, string fileName);
        ~fileHandler();

        fstream file;

    private:
        string mFileName;
        bool isFileOpen;
        bool isRead;
};

#endif /*FILE_HANDLING_HPP*/