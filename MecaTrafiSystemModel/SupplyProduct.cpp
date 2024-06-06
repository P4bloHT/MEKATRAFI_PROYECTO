/**
 * Project MecaTrafiSystem
 */

#include "pch.h"
#include "SupplyProduct.h"

/**
 * Supply Product implementation
 */

MecaTrafiSystemModel::SupplyProduct::SupplyProduct()
{

}

MecaTrafiSystemModel::SupplyProduct::SupplyProduct(int id, String^ name, String^ description, double unitaryPrice, double needed, array<Byte>^ photo, String^ store, String^ brand, String^ model, String^ contact)
{
	this->Id = id;
	this->Name = name;
	this->Description = description;
	this->UnitaryPrice = unitaryPrice;
	this->Needed = needed;
	this->Photo = photo;
	this->Store = store;
	this->Contact = contact;
	this->Brand = brand;
	this->Model = model;
}
