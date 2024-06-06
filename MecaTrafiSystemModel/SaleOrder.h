/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _SALEORDER_H
#define _SALEORDER_H

using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class SaleOrder {
    public:
        property int id;
        property String^ Date;
        property double TotalPrice;
        property int NumberCustomer;
        property double Warranty;
    };
}


#endif //_SALE ORDER_H