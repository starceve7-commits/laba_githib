#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


}
vector<string> readFromFile(const string& input) {
    vector<string> lines;
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "error: " << input << endl;
        return lines;
    }

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;  // Ïðîñòî âîçâðàùàåì âåêòîð áåç îòëàäî÷íîãî âûâîäà
}
//  Âûâîä âåêòîðà ñòðîê íà ýêðàí
void printToScreen(const vector<string>& lines) {
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

// Çàïèñü âåêòîðà ñòðîê â ôàéë (çàãëóøêà - ðåàëèçóåò User2)
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
