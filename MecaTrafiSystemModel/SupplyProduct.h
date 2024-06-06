/**
 * Project MecaTrafiSystem
 */

#pragma once

#ifndef _SUPPLYPRODUCT_H
#define _SUPPLYPRODUCT_H

using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class SupplyProduct {
    public:
        property int Id;
        property String^ Name;
        property String^ Description;
        property double UnitaryPrice;
        property double Needed;
        property array<Byte>^ Photo;
        property String^ Store;
        property String^ Brand;
        property String^ Model;
        property String^ Contact;
        SupplyProduct();
        SupplyProduct(int id, String^ name, String^ description, double unitaryPrice, double needed, array<Byte>^ photo,String^ store, String^ brand, String^ model,
        String^ contact);
    };
}


#endif //_SUPPLY PRODUCT_H