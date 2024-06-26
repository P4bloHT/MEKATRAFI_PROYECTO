/**
 * Project MecaTrafiSystem
 */

#pragma once
#include "OrderSupplier.h"
#include "Store.h"
#ifndef _PURCHASEORDER_H
#define _PURCHASEORDER_H

using namespace System;
using namespace System::Collections::Generic;
namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class PurchaseOrder {
    public:
        property int id;
        property String^ Date;
        property double TotalPrice;
        //Agregado nuevo para transaccion
        property Store^ Store;
        property List<OrderSupplier^>^ OrderSuplies;
    };
}


#endif //_PURCHASE ORDER_H