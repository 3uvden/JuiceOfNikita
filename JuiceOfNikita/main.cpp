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
            std::cout << "\n����� ��� ������� �������?\n";
            std::cout << "-----------------------------------------------------------------\n";
            std::cout << "|���������: 1.�������� - 79�, 2.������������ - 99�,             |\n";
            std::cout << "|           3.����������� - 119�, 4.�������� - 65�.             |\n";
            std::cout << "|�������: 5.�������� - 45�, 6.������� - 79�, 7.o�������� - 89�  |\n";
            std::cout << "|���: 8.��������� - 79�, 9.���������� - 69�                     |\n";
            std::cout << "-----------------------------------------------------------------\n";
            std::cout << "�������� �������: ";
            std::cin >> ChoiseJuice;

            while (ChoiseJuice <= 0 || ChoiseJuice > 9) {
                std::cout << "������� ������������� � ����, �������� ����: ";
                std::cin >> ChoiseJuice;
            }

            std::cout << "������� ������ ���� ��� ����: ";
            std::cin >> QuantityJuice;

            while (QuantityJuice <= 0) {
                std::cout << "������� ������ 0 ������: ";
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
            std::cout << "\n� ��� " << result << " ������\n";
            

//Choise------------------------------------------------------------------------------------------
            std::cout << "������� �������� ��� ���?[y/n] ";
            std::cin >> MoreJuice;

        } while (MoreJuice == 'y' || MoreJuice == 'Y');

//Discounts------------------------------------------------------------------------------------------
        if (sum >= 555)
        {
            float discount1 = (sum * 13) / 100;
            sum -= discount1;
            std::cout << "\n��� ������ 13% �� ������� ������ 555 ������\n";
        }

        int freeLitres = QuantityJuice / FreeLitre;
        if (ChoiseJuice == 6)
        {
            std::cout << "��� �� ��� " << freeLitres << "� ���� � �������\n";
        }

        if (ChoiseJuice == 9 && QuantityJuice == 3)
        {
            float discount2 = (sum * 5) / 100;
            parsley -= discount2;
            std::cout << "��� ������ 5% �� ������� ����������� ���\n";
        }

        std::cout << "�� ������ ��������?[y/n] ";
        std::cin >> pay;

        if (pay == 'y' || pay == 'Y')
        {
            std::cout << "������ ������ �������, ������� �� �������!\n";
        }
        else
        {
            std::cout << "�� ���������� ����������\n";
        }

        std::cout << "������� �������� �����?[y/n] ";
        std::cin >> MoreJuice;

    } while (MoreJuice == 'y' || MoreJuice == 'Y');

    return 0;
}