#include <fstream>
#include <iostream>

using namespace std;

class fileHandler{
    public:
        fileHandler(bool mode){
            fileName = "test";
            isRead = mode;
            if(mode){
                file.open(fileName, ios::in);
            }else{
                file.open(fileName, ios::out);
            }            
            if(file.is_open()){
                isFileOpen = true;
            }else{
                isFileOpen = false;
                cout << "Error:File did not open" << endl;
            }
            
        }

        ~fileHandler(){
            file.close();
        }

        fstream file;

    private:
        string fileName;
        bool isFileOpen;
        bool isRead;
};