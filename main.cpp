#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;


vector<string> readFromFile(const string& input) {
    vector<string> lines;
    ifstream file(input);

    if (!file.is_open()) {
        cerr << "error: " << input << endl;
        return lines;
    }

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines; 
}


void printToScreen(const vector<string>& lines) {
    
    cout << " printToScreen() " << endl;
}


void writeToFile(const vector<string>& lines, const string& input) {
   
    cout << "writeToFile() " << endl;
}

int main() {
    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

  
    vector<string> lines = readFromFile(inputFilename);
    printToScreen(lines);
    writeToFile(lines, outputFilename);

    return 0;
}
}
