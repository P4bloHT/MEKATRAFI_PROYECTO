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

MecaTrafiSystemModel::User::User(int id, String^ username, String^ password, String^ name, String^ lastname)
{
	this->Id = id;
	this->Username = username;
	this->Password = password;
	this->Name = name;
	this->Lastname = lastname;	
}
