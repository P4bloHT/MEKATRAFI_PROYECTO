/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _SALE_H
#define _SALE_H

using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class Sale {
    public:
        property int id;
        property double Tax;
        property double DateSale;
        property double TotalAmountWithoutTax;
        property double TotalAmountWithTax;
    };
}


#endif //_SALE_H