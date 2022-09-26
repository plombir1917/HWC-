#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ru");
    int a, b, sum=0;
    cout << "Введите диапазон чисел: ";
    cin >> a >> b;
    while(a<b){
        if(a%2!=0){
            sum+=a;
            a++;
        }
        else
        a++;
    }
    cout << "Сумма всех нечётных чисел в введённом диапазоне = " << sum;
    return 0;
}

