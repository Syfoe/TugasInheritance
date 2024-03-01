#include "Kendaraan.hpp"
#include "Bus.hpp"

Bus::Bus() : Kendaraan(), kapasitas(0)
{
}

Bus::Bus(int nomor_param, std::string merk_param, int tahun_param, int kapasitas_param)
    : Kendaraan(nomor_param, merk_param, tahun_param), kapasitas(kapasitas_param)
    {
    }

Bus::~Bus(){
    std::cout <<  "destructor for Bus [" << this->nomor << ", " << this->merk << ", " << this->tahun << ", " << this->kapasitas << "] called..." << std::endl;
}

void Bus::printInfo() const{
    std::cout << "Bus: [" << this->nomor << ", " << this->merk << ", " << this->tahun << "," << this->kapasitas << "]" << std::endl;
}

long Bus::BiayaSewa(int lamaSewa){
    return 1000000*lamaSewa;
}