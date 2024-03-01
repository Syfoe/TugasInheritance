#ifndef _KENDARAAN_HPP_
#define _KENDARAAN_HPP_

#include <iostream>
#include <string>

class Kendaraan{
    public:
        Kendaraan();
        Kendaraan(int nomor_param, std::string merk_param, int tahun_param);

        virtual ~Kendaraan();

        virtual void printInfo() const;

        virtual long BiayaSewa(int) = 0;

    protected:
        int nomor;
        std::string merk;
        int tahun;

};


#endif