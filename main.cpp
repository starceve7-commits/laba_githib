#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
// Чтение строк из файла в вектор
vector <string> readFromFile(const string& filename) {
    vector <string> lines;
    // TODO: реализация чтения из файла
    cout << "Функция readFromFile() пока не реализована." << endl;
    return lines; // возвращаем пустой вектор для компиляции
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