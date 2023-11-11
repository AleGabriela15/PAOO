#ifndef PERSOANA_HPP
#define PERSOANA_HPP

#include <iostream>
#include <memory>
#include <string>

#include "adresa.hpp"

using namespace adresa;
using namespace std;

namespace persoana{
    
    class Persoana {
        private:
            string nume;
            shared_ptr<Adresa_livrare> adresa;

        public:
            Persoana(string nume, shared_ptr<Adresa_livrare> address);
            void afiseazaPersoana();
    };

}

#endif // PERSOANA_HPP
