/**
 * Project MecaTrafiSystem
 */

#pragma once
#include "MechanicComponent.h"


#ifndef _ORDERPRODUCT_H
#define _ORDERPRODUCT_H

using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable] 
    public ref class OrderProduct {
    public:
        property int id;
        property double Quantity;
        property double Subtotal;

        property MechanicComponent^ componente;
    };
}



#endif //_ORDERPRODUCT_H