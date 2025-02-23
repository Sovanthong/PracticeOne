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
        cout<<"-------------<press Enter to continue>>---------"<<endl;
        cin.ignore();//clear buffer
        cin.get();//get input from user
        {
        case 1:{
            float value1 , value2, result = 0;
            char op;
        cout<< "[<] Calculator Program[>]"<<endl;
        cout<<"-> choose [+, -, *, /]";
        cin>>op;
        switch (op)
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
        default:
        {
        cout<<"invalid operator, choose [+, -, *, /]"<<endl;
        }cout<<"result is:"<<result<<endl;
        }
        case 2:
         {
            int op, n;
        cout<< "[<] odd/Even Print program[>]"<<endl;
        cout<<"1. Print Even number "<<endl;
        cout<<"2. Print odd number "<<endl;
        cout<<"->choose your option: ";
        cin>> op;
        switch (op)
        {
            case 1 :
        cout<<"=> Enter n:";
        cin>>n;
        for (int i = 1; i <=n; i++){
            if (i%2 !=0)continue;
            cout<<" "<<i;
        }
        cout<<endl;
        break;
        }
        case 2 :
        cout<<"=> Enter n:";
        cin>>n;
        for (int i = 1; i <=n; i++){
            if (i%2 !==0)continue;
            cout<<"  "<<i;
        }
        cout<<endl;{
        break;
        default:
        cout<<"invalid option!! choose again from 1-2"<<endl;
        break;
        }
            break;
        case 3:
        cout<< "[<] Day finder program[>]"<<endl;
            break;
        }
        case 4:
        cout<< "[<] Exit from our program[>]"<<endl;
            break;
            default:
            cout<< "invalid option choose again from 1-4"<<endl;
            break;
        }
        cin >> option;
    } while (option != 4);
}