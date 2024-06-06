/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _PURCHASE_H
#define _PURCHASE_H

using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class Purchase {
    public:
        property int id;
        property double Tax;
        property double DatePurchase;
        property double TotalPurchaseWithoutTax;
        property double TotalPuchaseWithTax;
    };
}


#endif //_PURCHASE_H