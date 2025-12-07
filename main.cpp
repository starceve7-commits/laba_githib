#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

// Чтение строк из файла в вектор
vector<string> readFromFile(const string& filename) {
    vector<string> lines;
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "error: " << filename << endl;
        return lines;
    }

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;  // Просто возвращаем вектор без отладочного вывода
}

//  Вывод вектора строк на экран
void printToScreen(const vector<string>& lines) {
    // TODO: реализация вывода на экран
    cout << "Функция printToScreen() пока не реализована." << endl;
}

// Запись вектора строк в файл (заглушка - реализует User2)
void writeToFile(const vector<string>& lines, const string& filename) {
    // TODO: реализация записи в файл
    cout << "Функция writeToFile() пока не реализована." << endl;
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
}