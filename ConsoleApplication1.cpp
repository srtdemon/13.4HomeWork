#include <iostream>
#include <stack>  


using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    stack <int> steck; 
    int r;
    cout << " ������� ��������� ������ �����";
    cin >> r;


    int i = 0;

    cout << "������� " << r << " �����: " << endl; 

    while (i != r) {
        int a;
        cin >> a;

        steck.push(a); // ��������� ������� ������� 
        i++;
    }

    cout << "������� ������� �����: " << steck.top() << endl; 
    
    cout << "������� ������� ������� ����� " << endl;

    steck.pop();  // ������� ������� �������

    cout << "������ ������� ������� ����� ���: " << steck.top(); 
                                                            
    return 0;
}