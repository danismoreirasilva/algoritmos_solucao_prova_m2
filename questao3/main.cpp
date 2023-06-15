#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    char tipoConsumidor;
    int idConsumidor, qteKwh, n;
    float precoR, precoC, precoI, totalR = 0.0, totalC = 0.0, totalI = 0.0, precoPagar = 0;

    do{
        cout << "Digite o preço do Kwh(R): R$ ";
        cin >> precoR;
    }while(precoR<1);

    do{
        cout << "Digite o preço do Kwh(C): R$ ";
        cin >> precoC;
    }while(precoC<1);

    do{
        cout << "Digite o preço do Kwh(I): R$ ";
        cin >> precoI;
    }while(precoI<1);

     do{
        cout << "Digite a quantidade de consumidores: ";
        cin >> n;
    }while(n<1);

    cout << "==============================================="<<endl;
    for(int i=1; i<=n; i++){

        do{
            cout << "Número "<<i<<"º unidade consumidora: ";
            cin >> (idConsumidor);
            cin.ignore();
        }while(idConsumidor<1);

        do{
            cout << "Quantidade de Kwh consumidos: ";
            cin >> (qteKwh);
            cin.ignore();
        }while(qteKwh<1);

        do{
            cout << "Tipo de Consumidor (R)esidencial, (C)omercial ou (I)ndividual: ";
            tipoConsumidor = tolower(cin.get());
            cin.ignore();
        }while(tipoConsumidor != 'r'&&tipoConsumidor != 'c'&&tipoConsumidor != 'i');


        switch(tipoConsumidor){
            case 'r':
                totalR += qteKwh;
                precoPagar = qteKwh * precoR;
                break;
            case 'c':
                totalC += qteKwh;
                precoPagar = qteKwh * precoC;
                break;
            case 'i':
                totalI += qteKwh;
                precoPagar = qteKwh * precoI;
                break;
        }


        cout << "ID matrícula da "<<i<<"º unidade consumidora:  " << idConsumidor <<endl;
        cout << "Total a pagar: R$ " << precoPagar <<endl;
        cout << "==============================================="<<endl;
    }
    cout <<"Total de Consumo por tipo de consumidor: "<< endl;
    cout << "Total de Kwh: Consumidor R==>: "<< totalR << endl;
    cout << "Total de Kwh: Consumidor C==>: "<< totalC << endl;
    cout << "Total de Kwh: Consumidor I==>: "<< totalI << endl;
    cout << "==============================================="<<endl;
    return 0;
}
