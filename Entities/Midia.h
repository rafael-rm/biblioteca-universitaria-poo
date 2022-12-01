#pragma once
#include "AcervoBase.h"


enum EnumMidia {
	FITA,
	VHS,
	CD,
	DVD
};


class Midia : public AcervoBase
{
	public:
		Midia();
		~Midia();
		EnumMidia getTipo();
		void setTipo(EnumMidia tipo);


	protected:
		EnumMidia tipo;
};