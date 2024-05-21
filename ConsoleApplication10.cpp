#include <iostream>
#include <vector>
#include <algorithm>

int hash(int key, int size) {
    return key % size;
}

void insert(std:: int key, int size) {
    int index = hash(key, size);

    while (table[index] != -1) {
        index = (index + 1) % size;
    }

    
}

bool search(const std::vector<int>& table, int key, int size) {
    int index = hash(key, size);

    while
        index = (index + 1) % size;
    }

    return true;
}

void printTable(const std::vector<int>& table) {
    std::cout << "\nХеш-таблица:" << std::endl;
    for (int i = 0; i < table.size(); ++i) {
        std::cout << "Хеш[" << i << "]: ";
        if (table[i] != -1) {
            std::cout << table[i];
        }
        else {
            std::cout << "Пусто";
        }
        std::cout << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "");
    const int n = 11;
    const int M = 15;
    const int rangeStart = 44000;
    const int rangeEnd = 73000;

  
    

    

    std::cout << "Исходный массив:" << std::endl;
    for (int i = 0; i < n; +i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    printTable(hashTable);

    int searchKey = array 0 ; // Просто берем первый элемент для поиска
    if (search(hashTable, searchKey, M)) {
        std::cout << "\nЭлемент " << searchKey << " найден в хеш-таблице." << std::endl;
    }
    else {
        std::cout << "\nЭлемент " << searchKey << " не найден в хеш-таблице." << std::endl;
    }

    return 0;
}
