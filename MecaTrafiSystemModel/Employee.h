/**
 * Project MecaTrafiSystem
 */
#pragma once
#include "User.h"

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable] // PARA PODER SERIALIZAR LA CLASE
        public ref class Employee : public User {
        public:
            property double Quota;
            property bool Status;
            property double Sales;
            property double WorkHours;
            property double Tasks;
            property double Salary;
            property String^ Warnings;
            property array<Byte>^ Photo;
            property String^ BirthDate;
            property int PhoneNumber;
            property String^ Turn;
            property DateTime^ InicioContratoDate; // Utilizando DateTime^ para fechas
            property DateTime^ FinContratoDate;    // Utilizando DateTime^ para fechas
            property int Codigo;
            property int Dni;

            Employee() {}

            // Constructor con inicialización de todas las propiedades
            Employee(int id, String^ username, String^ password, String^ name, String^ lastname, double quota, bool status,
                double sales, double workHours, double tasks, double salary, String^ warnings, array<Byte>^ photo,
                String^ birthDate, int phoneNumber, DateTime^ inicioContratoDate, DateTime^ finContratoDate, int dni, int codigo) :
                User(id, dni, codigo, username, password, name, lastname) {
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
                InicioContratoDate = inicioContratoDate;
                FinContratoDate = finContratoDate;
            }
    };
}

#endif //_EMPLOYEE_H