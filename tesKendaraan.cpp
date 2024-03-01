#include "Kendaraan.hpp"
#include "Bus.hpp"
#include "Minibus.hpp"
#include "Mobil.hpp"

int main(){
    
    // mobil
    Mobil* ptr_mobil = new Mobil(6123, "Hyundai", 2022, "Joshua");
    ptr_mobil->printInfo();
    std::cout << "biaya sewa = 7 --- Rp." << ptr_mobil->BiayaSewa(7) << std::endl;
    delete ptr_mobil;

    // minibus
    Minibus* ptr_m1 = new Minibus(44, "Toyota", 2010);
    ptr_m1->printInfo();
    std::cout << "biaya sewa = 3 --- Rp." << ptr_m1->BiayaSewa(3) << std::endl;
    std::cout << "biaya sewa = 6 --- Rp." << ptr_m1->BiayaSewa(6) << std::endl;
    std::cout << "diskon sewa = 4 --- Rp." << ptr_m1->diskon(4) << std::endl;
    std::cout << "diskon sewa = 11 --- Rp." << ptr_m1->diskon(11) << std::endl;
    delete ptr_m1;


    // bus
    Bus* ptr_b1 = new Bus(34, "Mercedes", 2020, 100);
    ptr_b1->printInfo();
    std::cout << "biaya sewa = 3 --- Rp." << ptr_b1->BiayaSewa(3) << std::endl;
    delete ptr_b1;

    // kendaraan
    Kendaraan* k1 = new Minibus(242, "Suzuki", 2009);
    k1->printInfo();
    std::cout << "biaya sewa = 6 --- Rp." << k1->BiayaSewa(6) << std::endl;
    delete k1;
    
    return 0;
}