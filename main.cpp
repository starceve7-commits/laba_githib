#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


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
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "erorr: " << input << endl;
        return;
    }

    for (const auto& line : lines) {
        file << line << endl;
    }
    file.close();
    cout << "good " << lines.size() << " string: " << input << endl;
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
