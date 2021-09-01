//Версия 1.0
#include<iostream>  
  
using namespace std; 

int main() 
{ 
    setlocale(LC_ALL, "Russian");
    
    double money, result, percent;
    float in, out;  //Точки закупки и продажи
    double taker, maker;  //Комиссия за покупку и продажу
    char menu;
    
    cout << "Привет, это калькулятор подсчёта дохода или убытка от продаж криптовалюты CriptoCalc. \nОн поможет тебе узнать, по какой цене продавать крипту, чтобы не уйти в минус.\n\n\n";
    
    cout << "Выбери один из пунктов:\n 1. Предварительный доход\n 2. Точка выхода в 'ноль'\n";
    
    cin >> menu;

    switch (menu){  //Выбор между операциями
      case '1':
        cout << "ПРЕДВАРИТЕЛЬНЫЙ ДОХОД\n\n";

        cout << "Для расчёта введите: \nНа сколько USDT закупились: ";
        cin >> money;
        cout << "\nЦену монеты на момент покупки: ";
        cin >> in;
        cout << "\nЦену монеты на момент продажи: ";
        cin >> out;
        cout << "\nКомиссия биржы с покупки: ";
        cin >> taker;
        cout << "\nКомиссия биржы с продажи: ";
        cin >> maker;

      percent = ((out - in) / in) * 100;
      percent = percent / 100;

      result = percent * money + money;
      percent = percent * 100;
      

      break;
      case '2':
        cout << "ТОЧКА ВЫХОДА В 'НОЛЬ'\n";

        cout << "Для расчёта введите цену монеты на момент покупки: " << endl;

        cin >> in;  //Точка закупки
      break;
      default:
      
      break;
    }
    cout << "Итого: " << result << "USDT\n";
    cout << "Процент: "<< percent << "%";

    return 0; 
} 
