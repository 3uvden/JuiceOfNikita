#include <iostream> 
#include <windows.h> 

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int apple = 79, orange = 99, apricot = 119, pear = 65, tomato = 45, onion = 79, cucumber = 89, garlic = 79, parsley = 69;
    float ChoiseJuice;
    int QuantityJuice;
    float result;
    char pay;
    int FreeLitre = 4;
    char MoreJuice;
    int sum = 0;
    //Menu------------------------------------------------------------------------------------------
    do
    {
        std::cout << "Welcum to the club buddy\n";
        do
        {
            std::cout << "\nКакой сок желаете выбрать?\n";
            std::cout << "-----------------------------------------------------------------\n";
            std::cout << "|Фруктовые: 1.яблочный - 79р, 2.апельсиновый - 99р,             |\n";
            std::cout << "|           3.абрикосовый - 119р, 4.грушевый - 65р.             |\n";
            std::cout << "|Овощные: 5.томатный - 45р, 6.луковый - 79р, 7.oгуречный - 89р  |\n";
            std::cout << "|Чаи: 8.чесночный - 79р, 9.петрушевый - 69р                     |\n";
            std::cout << "-----------------------------------------------------------------\n";
            std::cout << "Выберите напиток: ";
            std::cin >> ChoiseJuice;

            while (ChoiseJuice <= 0 || ChoiseJuice > 9) {
                std::cout << "Напитки пронумерованы в меню, выберите один: ";
                std::cin >> ChoiseJuice;
            }

            std::cout << "Сколько литров сока вам надо: ";
            std::cin >> QuantityJuice;

            while (QuantityJuice <= 0) {
                std::cout << "Введите больше 0 литров: ";
                std::cin >> QuantityJuice;
            }

//Choise of juice------------------------------------------------------------------------------------------
            if (ChoiseJuice == 1)
            {
                result = apple * QuantityJuice;
            }
            else if (ChoiseJuice == 2)
            {
                result = orange * QuantityJuice;
            }
            else if (ChoiseJuice == 3)
            {
                result = apricot * QuantityJuice;
            }
            else if (ChoiseJuice == 4)
            {
                result = pear * QuantityJuice;
            }
            else if (ChoiseJuice == 5)
            {
                result = tomato * QuantityJuice;
            }
            else if (ChoiseJuice == 6)
            {
                result = onion * QuantityJuice;
            }
            else if (ChoiseJuice == 7)
            {
                result = cucumber * QuantityJuice;
            }
            else if (ChoiseJuice == 8)
            {
                result = garlic * QuantityJuice;
            }
            else if (ChoiseJuice == 9)
            {
                result = parsley * QuantityJuice;
            }



//Pay------------------------------------------------------------------------------------------
            sum += result;
            std::cout << "\nС вас " << result << " рублей\n";
            

//Choise------------------------------------------------------------------------------------------
            std::cout << "Желаете заказать ещё сок?[y/n] ";
            std::cin >> MoreJuice;

        } while (MoreJuice == 'y' || MoreJuice == 'Y');

//Discounts------------------------------------------------------------------------------------------
        if (sum >= 555)
        {
            float discount1 = (sum * 13) / 100;
            sum -= discount1;
            std::cout << "\nВам скидка 13% за покупку больше 555 рублей\n";
        }

        int freeLitres = QuantityJuice / FreeLitre;
        if (ChoiseJuice == 6)
        {
            std::cout << "Так же вам " << freeLitres << "л сока в подарок\n";
        }

        if (ChoiseJuice == 9 && QuantityJuice == 3)
        {
            float discount2 = (sum * 5) / 100;
            parsley -= discount2;
            std::cout << "Вам скидка 5% за покупку петрушевого чая\n";
        }

        std::cout << "Вы готовы оплатить?[y/n] ";
        std::cin >> pay;

        if (pay == 'y' || pay == 'Y')
        {
            std::cout << "Оплата прошла успешно, спасибо за покупку!\n";
        }
        else
        {
            std::cout << "Вы отказались оплачивать\n";
        }

        std::cout << "Желаете заказать снова?[y/n] ";
        std::cin >> MoreJuice;

    } while (MoreJuice == 'y' || MoreJuice == 'Y');

    return 0;
}