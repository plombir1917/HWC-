#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ru");
    int number, line;
    char symbol;
    cout << "Введите число символов: ";
    cin >> number;
    cout << "Введите символ: ";
    cin >> symbol;
    cout << "Какую линию предпочитаете?" << endl <<
    "Вертикальная - 1" << endl <<
    "Горизонтальная - 2" << endl;
    cin >> line;
    if (line == 1){
        while(number!=0){
            cout << symbol << endl;
            number--;
        }
    }
    else{
        while(number!=0){
            cout << symbol;
            number--;
        }
    }
    return 0;
}

