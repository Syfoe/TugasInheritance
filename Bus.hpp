#ifndef _BUS_HPP_
#define _BUS_HPP_

#include "Kendaraan.hpp"

class Bus : public Kendaraan{
    private:
        int kapasitas;

    public:
        //constructor
        Bus();
        Bus(int nomor_param, std::string merk_param, int tahun_param, int kapasitas_param);

        //destructor
        virtual ~Bus();

        void printInfo() const;

        long BiayaSewa(int lamaSewa);
};


#endif