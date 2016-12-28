#pragma once
#include "nana/gui/basis.hpp"


class dropper
	: nana::noncopyable
{
public:
	dropper() {}
	~dropper() {}

	void trigger(nana::window);

};

