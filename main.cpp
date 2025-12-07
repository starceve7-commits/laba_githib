#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Чтение строк из файла в вектор (
vector<string> readFromFile(const string& filename) {
    vector<string> lines;
    // TODO: реализация чтения из файла
    cout << "Функция readFromFile() пока не реализована." << endl;
    return lines;
}

// Вывод вектора строк на экран
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

// Запись вектора строк в файл
void writeToFile(const vector<string>& lines, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "erorr: " << filename << endl;
        return;
    }

    for (const auto& line : lines) {
        file << line << endl;
    }
    file.close();
    cout << "good " << lines.size() << " string: " << filename << endl;
}

int main() {
    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

    // ОСНОВНОЙ КОД ПРОГРАММЫ
    vector<string> lines = readFromFile(inputFilename);
    printToScreen(lines);
    writeToFile(lines, outputFilename);

    return 0;
}