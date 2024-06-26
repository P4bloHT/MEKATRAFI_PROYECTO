/**
 * Project MecaTrafiSystem
 */
#pragma once
#include "SupplyProduct.h" //Asi con cada uno de ellos

#ifndef _ORDERSUPPLIER_H
#define _ORDERSUPPLIER_H

using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class OrderSupplier {
    public:
        property int Id;
        property double Quantity;
        property double Subtotal;
        property SupplyProduct^ ProductoCompra;
    };
}



#endif //_ORDERSUPPLIER_H