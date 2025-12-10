#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<string> readFromFile(const string& filename) {
    vector<string> lines;
    ifstream file(filename);
}
intToScreen(const vector<string>& lines) {
    if (lines.empty()) {
        cout << "vector 0." << endl;
        return;
    }
    cout << "=== window (" << lines.size() << " string) ===" << endl;
    for (size_t i = 0; i < lines.size(); ++i) {
        cout << "[" << i + 1 << "] " << lines[i] << endl;
    }
    cout << "=== end ===" << endl;
}
void writeToFile(const vector<string>& lines, const string& input) {
    ofstream file(input);

    if (!file.is_open()) {
        cerr << "error " << filename << endl;
        return lines;
    }

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;  
}

int main() {
    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

    // Каркас программы
    vector<string> lines = readFromFile(inputFilename);
    printToScreen(lines);
    writeToFile(lines, outputFilename);

    return 0;
}
    return 0;
}
}
