/**
 * Project MecaTrafiSystem
 */
#pragma once // Usa lo que se compilo con anterioridad
#include "User.h"

#ifndef _CLIENT_H
#define _CLIENT_H



using namespace System;

namespace MecaTrafiSystemModel {
    [Serializable]
        public ref class Client : public User {
        public:
            property bool IsCorp;
            property bool IsFrequent;
            property String^ Curso;
            property int Ciclo;
            property String^ Carrera;
            property int Contact;
            property array<Byte>^ Photo;
            property int Dni;
            property int Codigo;
            property String^ Status;
            Client() {}
            Client(int id, String^ username, String^ password, String^ name, String^ lastname, bool isCorp, bool isFrequent,
                String^ curso, int ciclo, String^ carrera, int contact, array<Byte>^ Photo, int dni, int codigo, String^ status) :
                User(id, dni, codigo, username, password, name, lastname) {
                IsCorp = isCorp;
                IsFrequent = isFrequent;
                Curso = curso;
                Ciclo = ciclo;
                Carrera = carrera;
                Contact = contact;
                Photo = Photo;
                Codigo = codigo;
                Dni = dni;
                Status = status;
            }
    };
}



#endif //_CLIENT_H