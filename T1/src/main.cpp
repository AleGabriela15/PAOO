#include <iostream>
#include <string>

#include "pizza.hpp"

using namespace std;
using namespace pizza;

int main()
{
    int option;

    const char* pizzaName = "Margerita";
    Pizza* margerita = new Pizza(4, pizzaName);
    pizzaName = "Prosciuto";
    Pizza* prosciuto = new Pizza(4, pizzaName);
    pizzaName = "Con Carne";
    Pizza* concarne = new Pizza(10, pizzaName);
    Pizza* pizza = margerita;
    concarne = prosciuto;
    cout<<"\n\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n";

    do{
        cout<<"\n Pentru tema 1, option = 1";
        cout<<"\n Pentru tema 2, option = 2";
        cout<<"\n Pentru finalizare, option = 0";
        cout<<"\n Introdu optiune = ";
        cin>>option;
        cout<<"\n\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n";
        
        switch (option)
        {
        case 0:
            option = 0;
            cout<<"Program finalizat.";
            break;
        case 1:
            cout<<"Prima pizza se numeste: "<< margerita->getNume()<<" si are: "<< margerita->getNrFelii()<<" felii.";
            cout<<"\nA doua pizza se numeste: "<< prosciuto->getNume()<<" si are: "<< prosciuto->getNrFelii()<<" felii.";
            cout<<"\nA treia pizza se numeste: "<< pizza->getNume()<<" si are: "<< pizza->getNrFelii()<<" felii.";
            cout<<"\nA patra se numeste: "<< concarne->getNume()<<" si are: "<< concarne->getNrFelii()<<" felii.";

            margerita->setNrFelii(5);
            cout<<"\nPrima pizza se numeste: "<< margerita->getNume()<<" si acum are: "<< margerita->getNrFelii()<<" felii.";
            cout<<"\nPizza dupa overloading se numeste: "<< concarne->getNume()<<" si are: "<< concarne->getNrFelii()<<" felii.";

            cout<<"\n";
            break;

        case 2:
            /* code */
            break;
        
        default:
            cout<<" Optiune invalida, introdu o optiune valida.";
            break;
        }
        cout<<"\n\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n";

    }while(option != 0);

    return 0;
}