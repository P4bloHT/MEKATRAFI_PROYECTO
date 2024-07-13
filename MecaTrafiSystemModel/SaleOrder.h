/**
 * Project MecaTrafiSystem
 */

#pragma once



#include "Client.h"
#include "OrderProduct.h"

#ifndef _SALEORDER_H
#define _SALEORDER_H

using namespace System;
using namespace System::Collections::Generic;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class SaleOrder {
    public:
        property int id;
        property String^ Date;
        property double TotalPrice;
        property int NumberCustomer;
        property double Warranty;
        property int Codigopucp;
        property int DNI;
        property int Descuento;
        property String^ Responsableventa;
        property String^ CodVentas;
        property int Noperacion;
        property Client^ Client;
        property List <OrderProduct^>^ OrderMeca;
    };
}


#endif //_SALE ORDER_H