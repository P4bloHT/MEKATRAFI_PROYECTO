/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _FAJASCLIENTE_H
#define _FAJASCLIENTE_H

#include "MechanicComponent.h"



using namespace System;

namespace MecaTrafiSystemModel {
    public ref class FajasCliente : public MechanicComponent {
    public:
        property String^ Tipo;
        property double DiametroInter;
        property double DiametroExter;
        property double AltoDeGoma;
        FajasCliente() {}
        FajasCliente(int id, String^ name, String^ description, double unitaryPrice, int stock, array<Byte>^ photo, String^ brand, String^ model, String^ component_code,
            String^ tipo, double diametroInter, double diametroExter, double altoDeGoma) :
            MechanicComponent(id, name, Proveedor, description, unitaryPrice, stock, photo, brand, model, component_code) {
            Tipo = tipo;
            DiametroInter = diametroInter;
            DiametroExter = diametroExter;
            AltoDeGoma = altoDeGoma;
        }
    };
}



#endif //_FAJASCLIENTE_H