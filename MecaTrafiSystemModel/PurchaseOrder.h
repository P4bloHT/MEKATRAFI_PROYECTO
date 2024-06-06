/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _PURCHASEORDER_H
#define _PURCHASEORDER_H

using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class PurchaseOrder {
    public:
        property int id;
        property String^ Date;
        property double TotalPrice;
        property int NumberCustomer;
    };
}


#endif //_PURCHASE ORDER_H