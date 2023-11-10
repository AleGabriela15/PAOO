#include "../headers/suc.hpp"

using namespace std;

namespace suc{
    template <typename T>
    Suc<T>::Suc(const std::string& name, const T& nrLitri){
        nume = name;
        numarLitri = nrLitri;
    }

    template <typename T>
    void Suc<T>::afiseazaSuc() const{
        cout << "Suc: " << nume << ", Numar de litri: " << numarLitri << endl;
    }

    // Explicitarea tipurilor care vor fi utilizate în aplicație
    template class Suc<int>;
    template class Suc<double>;

}
