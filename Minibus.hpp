#ifndef _MINIBUS_HPP_
#define _MINIBUS_HPP_

#include "Kendaraan.hpp"
#include <string>
#include <iostream>

class Minibus : public Kendaraan{
    private:

    public:
        //constructor
        Minibus();
        Minibus(int nomor_param, std::string merk_param, int tahun_param);

        //destructor
        virtual ~Minibus();

        void printInfo() const;

        long BiayaSewa(int lamaSewa);

        long diskon(int lamaSewa);
};


#endif