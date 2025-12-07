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
        cerr << "Ошибка открытия файла: " << filename << endl;
        return lines;
    }

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();

    // Временный вывод для отладки 
    cout << "Debug (readFromFile): Прочитано " << lines.size() << " строк." << endl;
    for (const auto& l : lines) {
        scout << "  " << l << endl;
    }

    return lines;
}
// Вывод вектора строк на экран
void printToScreen(const vector<string>& lines) {
    // TODO: реализация вывода на экран
    cout << "Функция printToScreen() пока не реализована." << endl;
}

// Запись вектора строк в файл
void writeToFile(const vector<string>& lines, const string& filename) {
    // TODO: реализация записи в файл
    cout << "Функция writeToFile() пока не реализована." << endl;
}

int main() {
    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

    // Каркас будущей программы
    vector<string> lines = readFromFile(inputFilename);
    printToScreen(lines);
    writeToFile(lines, outputFilename);

    return 0;
}