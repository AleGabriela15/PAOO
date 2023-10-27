#ifndef PIZZA_HPP
#define PIZZA_HPP

namespace pizza{
    
    class Pizza{
    private:
        int nr_felii;
        char nume[10];
    
    public:
        Pizza(int nr_felii, char* nume);

        ~Pizza();
        
        Pizza(Pizza &pizza);

        int getNrFelii();

        char* getNume();

        void setNrFelii(int val);

        Pizza operator=(Pizza const &obj);
    };
}

#endif