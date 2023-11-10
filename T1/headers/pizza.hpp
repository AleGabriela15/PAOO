#ifndef PIZZA_HPP
#define PIZZA_HPP

#include "blat.hpp"

using namespace blat;

namespace pizza{
    
    class Pizza : public Blat{
        private:
            int nr_felii;
            char* nume;   
            
        public:
            Pizza(int nr_felii, const char* nume);
            ~Pizza();        
            Pizza(const Pizza &pizza);
            Pizza(Pizza &&pizza);
            // Getters
            int getNrFelii();
            const char* getNume();
            // Setters
            void setNrFelii(int val);
            // Others
            Pizza& operator=(Pizza const &obj);
            void tipBlat() override;
    };
}

#endif