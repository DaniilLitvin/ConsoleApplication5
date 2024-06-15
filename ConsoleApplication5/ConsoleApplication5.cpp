#include <iostream>

using namespace std;

float a, b, c;
char d;
int p;
int main()
{
    setlocale(LC_ALL, "Russian");
    while (p != 2)
    {
        cout << "1 = calculator \n 2 - exit \n";
        cin >> p;
        switch (p)
        {
        case 1:
        {
            cout << "First number ";
            cin >> a;
            cout << "Action with numbers ";
            cin >> d;
            cout << "Second number ";
            cin >> b;
            if (d == '+')
                c = a + b;
            if (d == '-')
                c = a - b;
            if (d == '*')
                c = a * b;
            if (d == '/')
                c = a / b;
        }
        case 2:
        {
            break;
        }
        }
        cout << "Result =" << c << endl;
    }
}
//Кажется он не работает
//Оно работает, но не хочет говорить со мной по-русски, кажется эта штука не патриот.Придеться перейти к крайнем мерам включаю Шамана 
//Я в тупике Шаман не помог в чем же дело, ХММ 
//Глобальная сеть не даёт мне ответ на мой вопрос.Я не понимаю что он хочет он общяеться на англиском а я его не знаю. Зря я решил стать програмистом (((( Отчаинья и боль 