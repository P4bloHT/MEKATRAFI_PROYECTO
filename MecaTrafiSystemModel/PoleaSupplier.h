/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _POLEASUPPLIER_H
#define _POLEASUPPLIER_H

#include "SupplyProduct.h"


using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class PoleaSupplier : public SupplyProduct {
    public:
        property String^ Tipo;
        property double DiametroExter;
        property double DiametroExterUtil;
        property double AnchoPaso;
        property double DiametroEje;
        property String^ Material;
        PoleaSupplier() {}
        PoleaSupplier(int id, String^ name, String^ description, double unitaryPrice, double needed, array<Byte>^ photo, String^ store, String^ brand, String^ model,
            String^ contact, String^ tipo, double diametroExter, double diametroExterUtil, double anchoPaso, double diametroEje, String^ material) :
            SupplyProduct(id, name, description, unitaryPrice, needed, photo, store, brand, model,
                contact) {
            Tipo = tipo;
            DiametroExter = diametroExter;
            DiametroExterUtil = diametroExterUtil;
            AnchoPaso = anchoPaso;
            DiametroEje = diametroEje;
            Material = material;

        }
    };
}


#endif //_POLEASUPPLIER_H