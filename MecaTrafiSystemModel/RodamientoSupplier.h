/**
 * Project MecaTrafiSystem
 */
#pragma once


#ifndef _RODAMIENTOSUPPLIER_H
#define _RODAMIENTOSUPPLIER_H

#include "SupplyProduct.h"


using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class RodamientoSupplier : public SupplyProduct {
    public:
        property String^ Tipo;
        property double DiametroIner;
        property double DiametroExter;
        property double Ancho;
        RodamientoSupplier() {}
        RodamientoSupplier(int id, String^ name, String^ description, double unitaryPrice, double needed, array<Byte>^ photo, String^ store, String^ brand, String^ model,
            String^ contact, String^ tipo, double diametroInter, double diametroExter, double ancho) :
            SupplyProduct(id, name, description, unitaryPrice, needed, photo, store, brand, model,
                contact) {
            Tipo = tipo;
            DiametroExter = diametroExter;
            DiametroIner = diametroInter;
            Ancho = ancho;
        }
    };
}


#endif //_RODAMIENTOSUPPLIER_H