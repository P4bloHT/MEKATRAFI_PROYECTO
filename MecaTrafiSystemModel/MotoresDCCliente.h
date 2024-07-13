/**
 * Project MecaTrafiSystem
 */
#pragma once


#ifndef _MOTORESDCCLIENTE_H
#define _MOTORESDCCLIENTE_H

#include "MechanicComponent.h"


using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class MotoresDCCliente : public MechanicComponent {
    public:
        property String^ Potencia;
        property String^ Voltaje;
        property double Velocidad;
        property String^ Montaje;
        MotoresDCCliente() {}
        MotoresDCCliente(int id, String^ name, String^ description, double unitaryPrice, int stock, array<Byte>^ photo, String^ brand, String^ model, String^  component_code, 
            String^ potencia , String^ voltaje, double velocidad, String^ montaje) :
            MechanicComponent(id, name, Proveedor, description, unitaryPrice, stock, photo, brand, model, component_code) {
            Potencia = potencia;
            Voltaje = voltaje;
            Velocidad = velocidad;
            Montaje = montaje;
        }
    };
}



#endif //_MOTORESDCCLIENTE_H