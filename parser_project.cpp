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
    string line;
    cout <<"Test Program 2: "<< endl;
    while (getline(inputFile, line)){
        cout << line << endl;
    }
    inputFile.close();
    return 0;
}