/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _POLEACLIENTE_H
#define _POLEACLIENTE_H

#include "MechanicComponent.h"


using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class PoleaCliente : public MechanicComponent {
    public:
        property String^ Tipo;
        property double DiametroExter;
        property double DiametroExterUtil;
        property String^ Material;
        property  double DiametroEje;
        property double AnchoPaso;
        PoleaCliente() {}
        PoleaCliente(int id, String^ name, String^ description, double unitaryPrice, int stock, array<Byte>^ photo, String^ brand, String^ model,
            String^ tipo, double diametroExter, double diametroExterUtil, String^ material, double diametroEje, double anchoPaso) :
            MechanicComponent(id, name, Proveedor, description, unitaryPrice, stock, photo, brand, model) {
            Tipo = tipo;
            DiametroExter = diametroExter;
            DiametroExterUtil = diametroExterUtil;
            Material = material;
            DiametroEje = diametroEje;
            AnchoPaso = anchoPaso;
        }
    };
}


#endif //_POLEACLIENTE_H