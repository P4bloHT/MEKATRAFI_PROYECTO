/**
 * Project MecaTrafiSystem
 */
#pragma once


#ifndef _FAJASSUPPLIER_H
#define _FAJASSUPPLIER_H

#include "SupplyProduct.h"


using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class FajasSupplier : public SupplyProduct {
    public:
        property String^ Tipo;
        property double DiametroInter;
        property double DiametroExter;
        property double AltoDeGoma;
        FajasSupplier() {}
        FajasSupplier(int id, String^ name, String^ description, double unitaryPrice, double needed, array<Byte>^ photo, String^ store, String^ brand, String^ model,
            String^ contact, String^ tipo, double diametroInter, double diametroExter, double altoDeGoma) :
            SupplyProduct(id, name, description, unitaryPrice, needed, photo, store, brand, model,
                contact) {
            Tipo = tipo;
            DiametroInter = diametroInter;
            DiametroExter = diametroExter;
            AltoDeGoma = altoDeGoma;
        }
    };
}



#endif //_FAJASSUPPLIER_H