#include "fileHandling.hpp"

fileHandler::fileHandler(bool mode){
            mFileName = "test";
            isRead = mode;
            if(mode){
                file.open(mFileName, ios::in);
            }else{
                file.open(mFileName, ios::out);
            }            
            if(file.is_open()){
                isFileOpen = true;
            }else{
                isFileOpen = false;
                cout << "Error:File did not open" << endl;
            }           
        }

fileHandler::fileHandler(bool mode, string fileName){
            mFileName = fileName;
            isRead = mode;
            if(mode){
                file.open(mFileName, ios::in);
            }else{
                file.open(mFileName, ios::out);
            }            
            if(file.is_open()){
                isFileOpen = true;
            }else{
                isFileOpen = false;
                cout << "Error:File did not open" << endl;
            }
            
        }

fileHandler::~fileHandler(){
            file.close();
        }