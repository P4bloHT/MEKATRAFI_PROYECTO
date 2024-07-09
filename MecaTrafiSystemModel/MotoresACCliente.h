/**
 * Project MecaTrafiSystem
 */
#pragma once


#ifndef _MOTORESACCLIENTE_H
#define _MOTORESACCLIENTE_H

#include "MechanicComponent.h"


using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class MotoresACCliente : public MechanicComponent {
    public:
        property String^ Frame;
        property String^ Potencia;
        property String^ ClaseProteccion;
        property bool CompibilidadInversor;
        property String^ Fases;
        property String^ FormaFijacion;
        property String^ Voltaje;
        MotoresACCliente() {}
        MotoresACCliente(int id, String^ name, String^ description, double unitaryPrice, int stock, array<Byte>^ photo, String^ brand, String^ model,
            String^ frame, String^ potencia, String^ claseProteccion, bool compibilidadInversor, String^ fases, String^ formaFijacion, String^ voltaje, String^ proveedor ) :
            MechanicComponent(id, proveedor, name, description, unitaryPrice, stock, photo, brand, model) {
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



#endif //_MOTORESACCLIENTE_H