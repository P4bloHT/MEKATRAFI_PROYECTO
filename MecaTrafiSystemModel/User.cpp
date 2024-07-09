/**
 * Project MecaTrafiSystem
 */
#include "pch.h"

#include "User.h"

/**
 * User implementation
 */

MecaTrafiSystemModel::User::User()
{
}


MecaTrafiSystemModel::User::User(int id,int dni, int codigo, String^ username, String^ password, String^ name, String^ lastname)
{
	this->Id = id;
	this->Codigo = codigo;
	this->Dni = dni;
	this->Username = username;
	this->Password = password;
	this->Name = name;
	this->Lastname = lastname;	
	
}
