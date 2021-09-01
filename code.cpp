//Версия 1.0
#include<iostream>  
  
using namespace std; 

int main() 
{ 
    setlocale(LC_ALL, "Russian");
    
    double money;
    float in, out;  //Точки закупки и продажи
    double taker, maker;  //Комиссия за покупку и продажу
    char menu;
    
    cout << "Привет, это калькулятор подсчёта дохода или убытка от продаж криптовалюты CriptoCalc. \nОн поможет тебе узнать, по какой цене продавать крипту, чтобы не уйти в минус.\n\n\n";
    
    cout << "Выбери один из пунктов:\n 1. Предварительный доход\n 2. Точка выхода в 'ноль'\n";
    
    cin >> menu;

    switch (menu){  //Выбор между операциями
      case '1':
        cout << "ПРЕДВАРИТЕЛЬНЫЙ ДОХОД\n";
      break;
      case '2':
        cout << "ТОЧКА ВЫХОДА В 'НОЛЬ'\n";
      break;
      default:
      
      break;
    }

    if(menu == 1){
      cout << "Для расчёта введите: \n\tНа сколько USDT закупились: " << endl;
      cin >> money;
      cout << "\n\tЦену монеты на момент покупки: ";
      cin >> in;
      cout << "\n\tЦену монеты на момент продажи: ";
      cin >> out;
      cout << "\n\tКомиссия биржы с покупки: ";
      cin >> taker;
      cout << "\n\tКомиссия биржы с продажи: ";
      cin >> maker;

    }else
      cout << "Для расчёта введите цену монеты на момент покупки: " << endl;

      cin >> in;  //Точка закупки



      
    return 0; 
} 
