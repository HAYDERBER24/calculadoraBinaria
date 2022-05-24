#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int valor;
    bool executa = true;
    int bin[8];

    while (executa){
            valor=0;
        cout<<"  "<<endl;
        cout<<"     Escolha um dos valores "<< endl;
        cout<<" [1]: converter Decimal para Binario"<<endl;
        cout<<" [2]: converter Binario para Decimal"<<endl;
        cout<<" [0]: sair do programa"<<endl;
        cin>>valor;
        cout<<"O valor selecionada foi: " <<valor<<endl;
        if (valor == 0){
            cout<<"Saindo do programa... até mais!"<<endl;
            executa= false;
            exit;
        }else{
            if (valor == 1){
                int decimal;
                cout<<"Digite o valor em Decimal: "<<endl;
                cin>>decimal;
                cout <<"O valor digitado foi: " <<endl;
                cout<< decimal;
                for (int i = 7; i >=0; i--){
                    if(decimal %2 == 0){
                        bin[i] = 0;
                    }else{
                        bin[i] = 1;
                    }
                    decimal = decimal / 2;
                }
                cout<<"  "<<endl;
                cout<<"Convertido em binario: "<<endl;
                for (int i = 0; i < 8; i++){
                    cout << bin[i];
                }
                cout << endl;
            }else{
                (valor ==2);
                int binario;
                int dec=0;
                cout<<"Digite o valor em binario:"<<endl;
                cin>>binario;
                cout <<"O valor digitado foi: " <<endl;
                cout<< binario;
                for (int i=0; binario>0; i++)
                    {
                    dec=dec+pow(2,i)*(binario%10);
                    binario=binario/10;
                    }
                cout<<"  "<<endl;
                cout <<"Convertido em decimal: "<<endl;
                cout<<dec;

            }

        }
    }
cout<<"  "<<endl;
}
