#include <iostream>
#include <vector>
#include <memory>

#include "../headers/pizza.hpp"
#include "../headers/suc.hpp"
#include "../headers/adresa.hpp"
#include "../headers/persoana.hpp"

using namespace std;
using namespace pizza;
using namespace adresa;
using namespace persoana;


int main()
{
    int option;
    const char* pizzaName = "Margerita";
    Pizza* margerita = new Pizza(4, pizzaName);
    pizzaName = "Prosciuto";
    Pizza* prosciuto = new Pizza(4, pizzaName);
    pizzaName = "Con Carne";
    Pizza* concarne = new Pizza(10, pizzaName);

    Pizza* pizza = margerita; // Copy-Constructor
    concarne = prosciuto; // Assigment
    Pizza* movePizza = std::move(concarne); // Move Constructor

    vector<suc::Suc<int>> vectorSucuri;
    suc::Suc<double> mere("Mere", 1.5);

    pizzaName = "Quattro Formaggi";
    unique_ptr<Pizza> uniquePtr_Pizza = make_unique<Pizza>(7, pizzaName);

    auto commonAddress = make_shared<Adresa_livrare>("str Wien",5);
    Persoana* persoana1 = new Persoana("Maria", commonAddress);
    Persoana* persoana2 = new Persoana("Lucas", commonAddress);
    cout<<"\n\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n";

    do{
        cout<<"\n Pentru tema 1, option = 1";
        cout<<"\n Pentru tema 2, option = 2";
        cout<<"\n Pentru tema 3, partea cu template, option = 3";
        cout<<"\n Pentru tema 3, partea cu pointers, option = 4";
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
            margerita->tipBlat();
            cout<<"\nPizza dupa apelarea move contructor se numeste: "<< movePizza->getNume()<<" si are: "<< movePizza->getNrFelii()<<" felii.";
            break;

        case 3:
            vectorSucuri.push_back(suc::Suc<int>("Portocale", 2));
            vectorSucuri.push_back(suc::Suc<int>("Mere", 1));
            vectorSucuri.push_back(suc::Suc<int>("Grepfrut", 1));

            for (const auto& suc : vectorSucuri) {
                suc.afiseazaSuc();
            }

            mere.afiseazaSuc();

            break;
        
        case 4:
            cout<<"\nPizza alocata cu unique pointer este: "<< uniquePtr_Pizza->getNume()<<" si are: "<< uniquePtr_Pizza->getNrFelii()<<" felii."<<endl;
            
            persoana1->afiseazaPersoana();
            persoana2->afiseazaPersoana();
            break;
        
        default:
            cout<<" Optiune invalida, introdu o optiune valida.";
            break;
        }
        cout<<"\n\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n";

    }while(option != 0);

    return 0;
}