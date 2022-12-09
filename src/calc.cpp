#include <iostream>

using std::cin, std::cout;

int main()
{
    int32_t num1, num2;
    char op;
    cout << "Enter op: ";
    cin >> num1 >> op >> num2;

    switch (op)
    {
        case '+':
            cout << num1 + num2 << "\n";
            break;

        case '-':
            cout << num1 - num2 << "\n";
            break;

        case '*':
            cout << num1 * num2 << "\n";
            break;

        case '/':
            if (num2 != 0) cout << num1 / num2 << "\n";
            else cout << "DO NOT DEVIDE BY 0 \n";
            break;

        default:
            cout << "\n Wtf? \n";
    }

    return 0;
}
