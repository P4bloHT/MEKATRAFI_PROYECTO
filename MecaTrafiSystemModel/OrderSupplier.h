/**
 * Project MecaTrafiSystem
 */
#pragma once


#ifndef _ORDERSUPPLIER_H
#define _ORDERSUPPLIER_H

using namespace System;

namespace MecaTrafiSystemModel {
    public ref class OrderSupplier {
    public:
        property int id;
        property double Quantity;
        property double Subtotal;
    };
}



#endif //_ORDERSUPPLIER_H