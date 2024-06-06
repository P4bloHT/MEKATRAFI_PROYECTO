/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _TORNILLOSUPPLIER_H
#define _TORNILLOSUPPLIER_H

#include "SupplyProduct.h"


using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class TornilloSupplier : public SupplyProduct {
    public:
        property String^ Tipo;
        property String^ Rosca;
        property String^ Punta;
        property String^ Cabeza;
        property double Longitud;
        property String^ Material;
        property String^ DiametroRosca;
        TornilloSupplier(){}
        TornilloSupplier(int id, String^ name, String^ description, double unitaryPrice, double needed, array<Byte>^ photo, String^ store, String^ brand, String^ model,
            String^ contact, String^ tipo, String^ rosca, String^ punta, String^ cabeza, double longitud, String^ material, String^ diametroRosca) :
            SupplyProduct(id, name, description, unitaryPrice, needed, photo, store, brand, model,
                contact) {
            Tipo = tipo;
            Rosca = rosca;
            Punta = punta;
            Cabeza = cabeza ;
            Longitud = longitud;
            Material = material;
            DiametroRosca = diametroRosca;

        }
    };
}

#endif //_TORNILLOSUPPLIER_H