/**
 * Project MecaTrafiSystem
 */
#pragma once


#ifndef _USER_H
#define _USER_H
using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class User {
    public:
        int Id;
        property String^ Username;
        property String^ Password;
        property String^ Name;
        property String^ Lastname;
       
        User();
        User(int id, String^ username, String^ password, String^ name, String^ lastname);

    };
}

#endif //_USER_H