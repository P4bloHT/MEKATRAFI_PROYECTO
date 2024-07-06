/**
 * Project MecaTrafiSystem
 */
#pragma once

#ifndef _STORE_H
#define _STORE_H



using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
        public ref class Store {
        public:
            property int id;
            property String^ Name;
            Store() {}
            Store(int id, String^ name){}
    };
}

#endif //_STORE_H

