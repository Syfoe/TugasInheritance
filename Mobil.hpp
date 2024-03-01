#ifndef _MOBIL_HPP_
#define _MOBIL_HPP_

#include "Kendaraan.hpp"

class Mobil : public Kendaraan{
    private:
        std::string supir;

    public:
        //constructor
        Mobil();
        Mobil(int nomor_param, std::string merk_param, int tahun_param, std::string supir_param);

        //destructor  
        virtual ~Mobil();

        void printInfo() const;

        long BiayaSewa(int lamaSewa);
};



#endif