/**
 * Project MecaTrafiSystem
 */
#pragma once
#include "User.h"

#ifndef _ADMIN_H
#define _ADMIN_H



using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
    public ref class Admin : public User {
    public:
        property String^ Observation;
        property bool Active;
        property double Salary;
        Admin(){}
        Admin(int id, String^ username, String^ password, String^ name, String^ lastname, String^ observation, bool active, double salary, int dni, int codigo) :
            User(id,dni,codigo, username, password, name, lastname) {
            Observation = observation;
            Active = active;
            Salary = salary;
        }
            
    };
}

#endif //_ADMIN_H