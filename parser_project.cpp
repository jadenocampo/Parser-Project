#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
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
        cout << file_line << endl;
    }
    inputFile.close();
    return 0;
}