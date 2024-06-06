/**
 * Project MecaTrafiSystem
 */
#pragma once
#include "User.h"

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H



using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable] //PARA PODER SERIALIZAR LA CLASE
    public ref class Employee : public User {
    public:
        property int Quota;
        property bool Status;
        property int Sales;
        property double WorkHours;
        property double Tasks;
        property double Salary;
        property String^ Warnings;
        property array<Byte>^ Photo;
        property String^ BirthDate;
        property int PhoneNumber;
        property String^ ContrationDate;

        Employee() {}
        Employee(int id, String^ username, String^ password, String^ name, String^ lastname, int quota, bool status,
            int sales, double workHours, double tasks, double salary, String^ warnings, array<Byte>^ photo, String^ birthDate,int phoneNumber, String^ contrationDate) :
            User(id, username, password, name, lastname) {
            Quota = quota;
            Status = status;
            Sales = sales;
            WorkHours = workHours;
            Tasks = tasks;
            Salary = salary;
            Warnings = warnings;
            Photo = photo;
            BirthDate = birthDate;
            PhoneNumber = phoneNumber;
            ContrationDate = contrationDate;
        }
    };
}

#endif //_EMPLOYEE_H