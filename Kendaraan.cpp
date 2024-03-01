#include "Kendaraan.hpp"

Kendaraan::Kendaraan() : nomor(0), merk("---"), tahun(0){
}

Kendaraan::Kendaraan(int nomor_param, std::string merk_param, int tahun_param)
    : nomor(nomor_param), merk(merk_param), tahun(tahun_param)
    {
    }

Kendaraan::~Kendaraan(){
    std::cout << "destructor for Kendaraan [" << this->nomor << ", " << this->merk << ", " << this->tahun << "] called..." << std::endl;
}

void Kendaraan::printInfo() const{
    std::cout << "Kendaraan: [" << this->nomor << ", " << this->merk << ", " << this->tahun << "]" << std::endl;
}