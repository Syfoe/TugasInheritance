#include "Kendaraan.hpp"
#include "Minibus.hpp"

Minibus::Minibus() : Kendaraan()
{
}

Minibus::Minibus(int nomor_param, std::string merk_param, int tahun_param)
    : Kendaraan(nomor_param, merk_param, tahun_param)
    {
    }

Minibus::~Minibus(){
    std::cout <<  "destructor for Minibus [" << this->nomor << ", " << this->merk << ", " << this->tahun << "] called..." << std::endl;
}

void Minibus::printInfo() const{
    std::cout << "Minibus: [" << this->nomor << ", " << this->merk << ", " << this->tahun << "]" << std::endl;
}

long Minibus::BiayaSewa(int lamaSewa){
    if(lamaSewa <= 5){
        return 5000000;
    } else{
        return 5000000 + (5000000*(lamaSewa-5));
    }
}

long Minibus::diskon(int lamaSewa){
    long temp = this->BiayaSewa(lamaSewa);
    if(lamaSewa > 10){
        return temp - temp/10;
    } else{
        return temp;
    }
}