/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _RODAMIENTOSCLIENTE_H
#define _RODAMIENTOSCLIENTE_H

#include "MechanicComponent.h"


using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class RodamientosCliente : public MechanicComponent{
    public:
        property String^ Tipo;
        property double DiametroInter;
        property double DiametroExter;
        property double Ancho;
        RodamientosCliente() {}
        RodamientosCliente(int id, String^ name, String^ description, double unitaryPrice, int stock, array<Byte>^ photo, String^ brand, String^ model,
            String^ tipo, double diametroInter, double diametroExter, double ancho) :
            MechanicComponent(id, Proveedor, name, description, unitaryPrice, stock, photo, brand, model) {
            Tipo = tipo;
            DiametroInter = diametroInter;
            DiametroExter = diametroExter;
            Ancho = ancho;
        }
    };
}


#endif //_RODAMIENTOSCLIENTE_H