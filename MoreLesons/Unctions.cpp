#include "Unctions.h"
#include <fstream>

bool number_name(int num, std::string file_path)
{
    std::string name;

    if (num < 10 || num >= 100)
        return false;
    short n1, n2;
    n1 = num / 10;//�������
    n2 = num % 10;//�������
    std::ofstream out;
    out.open(file_path);
    if (!out.is_open())
        return false;

    if (n1 == 1) {
        switch (n2) {
        case 0: name = "������"; break;
        case 1: name = "�����������"; break;
        case 2: name = "����������"; break;
        case 3: name = "����������"; break;
        case 4: name = "������������"; break;
        case 5: name = "����������"; break;
        case 6: name = "�����������"; break;
        case 7: name = "����������"; break;
        case 8: name = "������������"; break;
        case 9: name = "������������"; break;
        }
        out << name << '\n';
        return true;

    }
    switch (n1) {    
    case 2: name = "��������"; break;
    case 3: name = "��������"; break;
    case 4: name = "�����"; break;
    case 5: name = "���������"; break;
    case 6: name = "����������"; break;
    case 7: name = "���������"; break;
    case 8: name = "�����������"; break;
    case 9: name = "���������"; break;
    }

    switch(n2) {
    case 1: name += " ����"; break;
    case 2: name += " ���"; break;
    case 3: name += " ���"; break;
    case 4: name += " ������"; break;
    case 5: name += " ����"; break;
    case 6: name += " �����"; break;
    case 7: name += " ����"; break;
    case 8: name += " ������"; break;
    case 9: name += " ������"; break;
    }

    out << name << '\n';
    out.close();
    return true;
}
