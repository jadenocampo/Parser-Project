#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){ 
    ifstream inputFile("TestProgram2.txt");
     

    if (!inputFile.is_open()){
        cerr << "Error opening file " << endl;
        return 1;
    }
    string file_line;
    cout <<"Test Program 2: "<< endl;
    while (getline(inputFile, file_line)){
        for(size_t i =0; i < file_line.length(); i++){
            cout << file_line[i] << "";
        }
        cout << endl;
    }
    inputFile.close();
    return 0;
}