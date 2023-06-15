#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int a, b, menor, contDiv = 0;

    do{
        cout << "Digite o valor de A: ";
        cin >> a;
        cout << "Digite o valor de B: ";
        cin >> b;
    }while(a<2||b<2); //o valor entrada nao pode ser 1 porque todos os mumeros sao diviseis por uma

    menor = a;
    if (b < menor)
        menor = b;

    for(int i=2; i<=menor; i++){
        if ((a%i==0)&&(b%i==0)){
            contDiv++;
        }
    }

    if (contDiv == 0){
        cout << "Os valores: a=" << a <<" e b="<< b <<" SÃO primos entre si!"<<endl;
    }else{
        cout << "Os valores: a=" << a <<" e b="<< b <<" NÃO primos entre si!"<<endl;
    }


    return 0;
}

    /*
    for(int i=2; i<=min(a,b); i++){
        if ((a%i==0)&&(b%i==0)){
            contDiv++;
        }

    }*/
