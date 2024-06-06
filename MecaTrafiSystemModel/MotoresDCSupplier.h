/**
 * Project MecaTrafiSystem
 */
#pragma once


#ifndef _MOTORESDCSUPPLIER_H
#define _MOTORESDCSUPPLIER_H

#include "SupplyProduct.h"


using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class MotoresDCSupplier : public SupplyProduct {
    public:
        property String^ Potencia;
        property String^ Voltaje;
        property double Velocidad;
        property String^ Montaje;
        MotoresDCSupplier() {}
        MotoresDCSupplier(int id, String^ name, String^ description, double unitaryPrice, double needed, array<Byte>^ photo, String^ store, String^ brand, String^ model,
            String^ contact, String^ voltaje, String^ potencia, double velocidad, String^ montaje) :
            SupplyProduct(id, name, description, unitaryPrice, needed, photo, store, brand, model,
                contact) {
            Potencia = potencia;
            Voltaje = voltaje;
            Velocidad = velocidad;
            Montaje = montaje;

        }
    };
}


#endif //_MOTORESDCSUPPLIER_H