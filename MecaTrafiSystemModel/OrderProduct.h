/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _ORDERPRODUCT_H
#define _ORDERPRODUCT_H

using namespace System;

namespace MecaTrafiSystemModel {
    public ref class OrderProduct {
    public:
        property int id;
        property double Quantity;
        property double Subtotal;
    };
}



#endif //_ORDERPRODUCT_H