#include "Mobil.hpp"

Mobil::Mobil() : Kendaraan(), supir("XXX")
{
}

Mobil::Mobil(int nomor_param, std::string merk_param, int tahun_param, std::string supir_param)
    : Kendaraan(nomor_param, merk_param, tahun_param), supir(supir_param)
    {
    }

Mobil::~Mobil(){
    std::cout << "destructor for Mobil [" << this->nomor << ", " << this->merk << ", " << this->tahun << "," << this->supir << "] called..." << std::endl;
}

void Mobil::printInfo() const{
    std::cout << "Mobil: [" << this->nomor << ", " << this->merk << ", " << this->tahun << "," << this->supir << "]" << std::endl;
}

long Mobil::BiayaSewa(int lamaSewa){
    return 500000*lamaSewa;
}