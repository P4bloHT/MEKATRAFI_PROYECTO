/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _MOTORESACSUPPLIER_H
#define _MOTORESACSUPPLIER_H

#include "SupplyProduct.h"


using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class MotoresACSupplier : public SupplyProduct {
    public:
        property String^ Frame;
        property String^ Potencia;
        property String^ ClaseProteccion;
        property bool CompibilidadInversor;
        property String^ Fases;
        property String^ FormaFijacion;
        property String^ Voltaje;
        MotoresACSupplier() {}
        MotoresACSupplier(int id, String^ name, String^ description, double unitaryPrice, double needed, array<Byte>^ photo, String^ store, String^ brand, String^ model,
            String^ contact, String^ frame, String^ potencia, String^ claseProteccion, bool compibilidadInversor, String^ fases, String^ formaFijacion, String^ voltaje):
            SupplyProduct(id, name, description, unitaryPrice, needed, photo, store, brand, model,
                contact) {
            Frame = frame;
            Potencia = potencia;
            ClaseProteccion = claseProteccion;
            CompibilidadInversor = compibilidadInversor;
            Fases = fases;
            FormaFijacion = formaFijacion;
            Voltaje = voltaje;
        }
    };
}



#endif //_MOTORESACSUPPLIER_H