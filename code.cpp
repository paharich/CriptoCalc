//Версия 1.0
#include<iostream>  

using std::cout;  
using std::cin; 

int main() 
{ 
    setlocale(LC_ALL, "Russian");
    
    double money, result, percent;
    float in, out;  //Точки закупки и продажи
    double maker, taker;  //Комиссия за покупку и продажу
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
      cin >> maker;
      cout << "\nКомиссия биржы с продажи: ";
      cin >> taker;

      maker = maker / 100;  //Перевод обычного числа в проценты
      taker = taker / 100;
        
      percent = ((out - in) / in) * 100;  //Формула для расчёта процента
      percent = percent / 100;  //нормальные проценты, не такие как к примеру 0.56 это 56%

      result = percent * money + money; // Получение результата без комисси биржы
      percent = percent * 100;  // Получение результата в процентах
      maker = money * maker;   //Комиссия с покупки
      taker = result * taker;

      result = result - (taker + maker);  //Вычет комиссии

      break;
      // case '2':
      //   cout << "ТОЧКА ВЫХОДА В 'НОЛЬ'\n";

      //   cout << "Для расчёта введите цену монеты на момент покупки: \n";

      //   cin >> in;  //Точка закупки
      // break;
      default:
      
      break;
    }
    cout << "Комиссия за ввод: " << maker << "\n";
    cout << "Комиссия за вывод: " << taker << "\n";
    cout << "Итого: " << result << " USDT\t";
    cout << "Процент: "<< percent << " %\n";

    return 0; 
} 
