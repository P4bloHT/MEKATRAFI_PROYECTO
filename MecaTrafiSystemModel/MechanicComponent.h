/**
 * Project MecaTrafiSystem
 */
#pragma once


#ifndef _MECHANICCOMPONENT_H
#define _MECHANICCOMPONENT_H

using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class MechanicComponent {
    public:
        property int Id;
        property String^ Name;
        property String^ Description;
        property double UnitaryPrice;
        property int Stock;
        property array<Byte>^ Photo;
        property String^ Brand;
        property String^ Model;
        property String^ Proveedor;
        MechanicComponent();
        MechanicComponent(int id, String^ name, String^ proveedor, String^ description, double unitaryPrice, int stock, array<Byte>^ photo, String^ brand, String^ model);
    };
}



#endif //_MECHANICCOMPONENT_H