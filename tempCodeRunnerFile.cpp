#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int option = 0;
    do
    {
        cout << "[+] Welcome to Program One [+]" << endl;
        cout << "1. Open Calculator" << endl;
        cout << "2. Odd/Even Printers " << endl;
        cout << "3. Days Finder (Month(1-12))" << endl;
        cout << "4. Exit " << endl;
        cout << "-> Choose your option(1-4): ";cin>>option;
        switch (option)
        {
        case 1:{
            float value1 , value2, result = 0;
            char op;
        cout<< "[<] Calculator Program[>]"<<endl;
        cout<<"-> choose [+, -, *, /]";
        cin>>op;
        switch (op)
        {
            case '+':
            cout<< "Enter value1 :";
            cin>> value1;
            cout<<"Enter value2 :";
            cin>> value2;
            result = value1 + value2;
            break;
            case '-':
            cout<< "Enter value1 :";
            cin>> value1;
            cout<<"Enter value2 :";
            cin>> value2;
            result = value1 - value2;
            break;
            case '*':
            cout<< "Enter value1 :";
            cin>> value1;
            cout<<"Enter value2 :";
            cin>> value2;
            result = value1 * value2;
            break;
            case '/':
            cout<< "Enter value1 :";
            cin>> value1;
            cout<<"Enter value2 :";
            cin>> value2;
            result = value1 / value2;
            break;
        }
        }
        case 2:
        cout<< "[<] odd/Even Print program[>]"<<endl;
            break;
        case 3:
        cout<< "[<] Day finder program[>]"<<endl;
            break;
        case 4:
        cout<< "[<] Exit from our program[>]"<<endl;
            break;
            default:
            cout<< "invalid option choose again from 1-4"<<endl;
            break;
        }
        cin >> option;
    } while (option != 4);
    return 0;
}