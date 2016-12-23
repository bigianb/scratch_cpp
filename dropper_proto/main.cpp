#include <windows.h>

#include "nana/gui.hpp"
#include "nana/gui/widgets/button.hpp"
#include "nana/gui/widgets/panel.hpp"

#include "dropper.h"

using namespace nana;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	form fm;
	place plc(fm);
	plc.div("<lhs>|<rhs>");
	panel<true> palettePanel(fm);
	panel<true> scriptPanel(fm);

	button btn(palettePanel, rectangle(0, 0, 100, 30));
	btn.caption("hello");

	
	plc["lhs"] << palettePanel;
	plc["rhs"] << scriptPanel;
	plc.collocate();

	fm.show();
	exec();
}