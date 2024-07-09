/**
 * Project MecaTrafiSystem
 */
#pragma once


#ifndef _TORNILLOCLIENTE_H
#define _TORNILLOCLIENTE_H

#include "MechanicComponent.h"

using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class TornilloCliente : public MechanicComponent {
    public:
        property String^ Tipo;
        property String^ Rosca;
        property String^ Punta;
        property String^ Cabeza;
        property double Longitud;
        property String^ Material;
        property String^ DiametroRosca;
        

        TornilloCliente() {}
        TornilloCliente(int id, String^ name, String^ description, double unitaryPrice, int stock, array<Byte>^ photo, String^ brand, String^ model,
            String^ tipo, String^ rosca, String^ punta, String^ cabeza, double longitud, String^ material, String^ diametroRosca, String^ proveedor) :
            MechanicComponent(id, proveedor, name, description, unitaryPrice, stock, photo, brand,  model) {
            Tipo = tipo;
            Rosca = rosca;
            Punta = punta;
            Cabeza = cabeza;
            Longitud = longitud;
           
            Material = material;
            DiametroRosca = diametroRosca;
        }
    };
}


#endif //_TORNILLOCLIENTE_H