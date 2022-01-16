#include <iostream>
#include <stack>  


using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    stack <int> steck; 
    int r;
    cout << " Введите начальный размер стека";
    cin >> r;


    int i = 0;

    cout << "Введите " << r << " чисел: " << endl; 

    while (i != r) {
        int a;
        cin >> a;

        steck.push(a); // добавляем верхний элемент 
        i++;
    }

    cout << "Верхний элемент стека: " << steck.top() << endl; 
    
    cout << "Удаляем верхний элемент стека " << endl;

    steck.pop();  // удаляем верхний элемент

    cout << "Теперь верхний элемент стека это: " << steck.top(); 
                                                            
    return 0;
}