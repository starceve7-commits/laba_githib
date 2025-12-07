#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Функция 1: Чтение строк из файла в вектор (пока заглушка)
vector<string> readFromFile(const string& filename) {
    vector<string> lines;
    // TODO: реализация чтения из файла
    cout << "Функция readFromFile() пока не реализована." << endl;
    return lines;
}

// Функция 2: Вывод вектора строк на экран
void printToScreen(const vector<string>& lines) {
    if (lines.empty()) {
        cout << "vector 0." << endl;
        return;
    }
    
    cout << "=== input (" << lines.size() << " string) ===" << endl;
    for (size_t i = 0; i < lines.size(); ++i) {
        cout << "[" << i + 1 << "] " << lines[i] << endl;
    }
    cout << "=== error end ===" << endl;
}

// Функция 3: Запись вектора строк в файл
void writeToFile(const vector<string>& lines, const string& filename) {
    ofstream file(filename);
    
    if (!file.is_open()) {
        cerr << "erorr" << filename << endl;
        return;
    }
    
    for (const auto& line : lines) {
        file << line << endl;
    }
    
    file.close();
    cout << "Успешно записано " << lines.size() << " строк в файл: " << filename << endl;
}

int main() {
    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

    // ВРЕМЕННЫЙ КОД ДЛЯ ОТЛАДКИ (убрать перед слиянием!)
    cout << "=== ТЕСТОВЫЙ РЕЖИМ (Участник №2) ===" << endl;
    vector<string> testLines = {
        "Первая тестовая строка",
        "Вторая строка для проверки",
        "Третья строка - вывод работает!",
        "Четвертая строка",
        "Пятая и последняя тестовая строка"
    };
    
    // Тестируем свои функции
    printToScreen(testLines);
    writeToFile(testLines, outputFilename);
    
    cout << "===end test===" << endl;
    
    // РЕАЛЬНЫЙ КОД (раскомментировать после слияния)
    // vector<string> lines = readFromFile(inputFilename);
    // printToScreen(lines);
    // writeToFile(lines, outputFilename);

    return 0;
}