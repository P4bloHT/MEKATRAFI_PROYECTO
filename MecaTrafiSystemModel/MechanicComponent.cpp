/**
 * Project MecaTrafiSystem
 */
#include "pch.h"

#include "MechanicComponent.h"

/**
 * MechanicComponent implementation
 */



MecaTrafiSystemModel::MechanicComponent::MechanicComponent()
{
	//throw gcnew System::NotImplementedException();
}

MecaTrafiSystemModel::MechanicComponent::MechanicComponent(int id, String^ name, String^ proveedor, String^ description, double unitaryPrice, int stock, array<Byte>^ photo, String^ brand, String^ model)
{
	//throw gcnew System::NotImplementedException();
	this->Id = id;
	this->Name = name;
	this->Proveedor = proveedor;
	this->Description = description;
	this->UnitaryPrice = unitaryPrice;
	this->Stock = stock;
	this->Photo = photo;
	this->Brand = brand;
	this->Model = model;
}

/*MecaTrafiSystemModel::MechanicComponent::MechanicComponent(int id, String^ name, String^ proveedor, String^ description, double unitaryPrice, int stock, array<Byte>^ photo, String^ brand, String^ model)
{
	this->Id = id;
	this->Name=name;
	this->Proveedor = proveedor;
	this->Description = description;
	this->UnitaryPrice = unitaryPrice;
	this->Stock = stock;
	this->Photo = photo;
	this->Brand = brand;
	this->Model = model;
	//this->Tipoderosca = tipoderosca;
//	this->Tipodepunta = tipodepunta;

}*/


