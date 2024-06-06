/**
 * Project MecaTrafiSystem
 */
#pragma once


#ifndef _DISCOUNT_H
#define _DISCOUNT_H

using namespace System;

namespace MecaTrafiSystemModel {
    public ref class Discount {
    public:
        property double PercentDescount;
        property Double TotalDescount;
        property String^ Type;
    };
}



#endif //_DISCOUNT_H