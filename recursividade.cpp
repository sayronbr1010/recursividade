#include <iostream>
using namespace std;
int i=0;

int Fibonacci(int x);
int Fatorial(int x);
int main()
{
    int escolha = 0;
    bool continua;
    do {
        cout << "escola qual deve ser a sequencia\n\n";
        cout << "1-sequencia de Fibonacci\n2-Fatorial\n";
        cin >> escolha;
        if (escolha == 1) {
            cout << "agora escolha um numero para a possicao da sequencia de Fibonacci";
            cin >> escolha;
            cout<<"o numero da possicao "<<escolha<<" na sequencia fibonacci e "<<Fibonacci(escolha);
            continua = false;
        }
        else if (escolha == 2) {
            cout << "agora escolha um numero para ser faturado\n";
            cin >> escolha;
            cout<<Fatorial(escolha);
            continua = false;
        }
        else
        {
            cout << "opcao invalida";
            continua = true;
        }
    } while (continua);
    cout << "\n\n";
    system("pause");
}
int Fibonacci(int x) {

    if ((x == 1) || (x == 0)) {
        
        return(x);
    }
    else {
        
        return(Fibonacci(x - 1) + Fibonacci(x - 2));
    }
}
int Fatorial(int x) {

    if (x == 0) {
        return 1;
    }return x * Fatorial(x - 1);

    
}
