#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    // Variaveis


    float n1 = 0;
    float n2 = 0;
    char operacao;
    float soma;
    float sub;
    float mult;
    float resultado;
    float porc;
    float div ;
    char calcular;

    cout << " \n ------- Seja Bem Vindo a Calcula Facil!------- \n";
    cout << " \n --------------- Vamos Calcular?-------\n";
     cout << "\n---------------Calculadora Simples-------------\n ";
    cout << " \n Digite um Numero: ";
    cin >> n1;
    cout << " \n Digite outro Numero: ";
    cin >> n2;
    cout << " \n Escolha a Operacao: ";
    cin >> operacao;
    soma = n1+n2; sub = n1-n2; mult = n1*n2; div = n1/n2; porc = n1*n2/100;

        switch (operacao)
        {
        case '+':
           cout << soma; /* code */
            break;
        case '-':
           cout << sub; /* code */
            break;
        case '*':
           cout << mult; /* code */
            break;
        case '/':
           cout << div; /* code */
            break;
        case '%':
           cout << porc; /* code */
            break;
        default: cout << " \n Operacao Invalida ";
            break;
        }
        calcular = 's';

    while ( calcular == 's')
    {

    cout << " \n ------- Seja Bem Vindo a Calcula Facil!------- \n";
    cout << " \n --------------- Vamos Calcular?-------\n";
     cout << "\n---------------Calculadora Simples-------------\n ";
    cout << " \n Digite um Numero: ";
    cin >> n1;
    cout << " \n Digite outro Numero: ";
    cin >> n2;
    cout << " \n Escolha a Operacao: ";
    cin >> operacao;
    soma = n1+n2; sub = n1-n2; mult = n1*n2; div = n1/n2; porc = n1*n2/100;

        switch (operacao)
        {
        case '+':
           cout << soma; /* code */
            break;
        case '-':
           cout << sub; /* code */
            break;
        case '*':
           cout << mult; /* code */
            break;
        case '/':
           cout << div; /* code */
            break;
        case '%':
           cout << porc; /* code */
            break;
        default: cout << " \n Operacao Invalida ";
            break;
        }

        cout << " \n Para Continuar = s \n \n Para Encerrar = n \n";
                cin >> calcular;

                if ( calcular == 'n')
            {
                cout << "\n Obrigado Por usar Calcula Facil \n Volte Sempre!! \n";
            }
        else cout << "\n Vamos pra cima, Calculando...\n ";
    }



}
