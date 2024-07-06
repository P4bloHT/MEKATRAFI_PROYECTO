#pragma once
using namespace System;

namespace MecatrafiSystemModel {
	[Serializable]
		public ref class Brand
	{
		public:
			property int Id;
			property String^ Name;
			property String^ Country;
			property bool^ Original;
			property String^ Warranty;
	};

}

