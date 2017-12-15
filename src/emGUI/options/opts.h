#ifndef EMGUI_DEFAULT_OPTS_H
#define EMGUI_DEFAULT_OPTS_H

#ifndef ARDUINO
	#include "emGUI_port_opts.h"
#else
	#include "Ports/Arduino/emGUI_port_opts.h"
#endif

#include "Images/Images.h"

#ifndef DEBUG_EMGUI
#define DEBUG_EMGUI				0
#endif // !DEBUG_EMGUI

#ifndef LCD_TsBtn_SIZE
#define LCD_TsBtn_SIZE			100
#endif // !LCD_TsBtn_SIZE

#ifndef LCD_SizeX
#define LCD_SizeX				240
#endif  

#ifndef LCD_SizeY
#define LCD_SizeY				240
#endif 

#ifndef LCD_STATUS_BAR_HEIGHT
#define LCD_STATUS_BAR_HEIGHT	26
#endif 

#ifndef WIDGET_COLOR_WHITE
#define WIDGET_COLOR_WHITE		0xFFFF
#endif

#ifndef WIDGET_COLOR_BLACK
#define WIDGET_COLOR_BLACK		0
#endif

#ifndef WINDOW_HEADER_LENGTH
#define WINDOW_HEADER_LENGTH	25
#endif

#ifndef LABEL_MAX_LENGTH
#define LABEL_MAX_LENGTH 10000
#endif


// DEFAULT IMAGES

#ifndef XPICTURE_TYPE
#error "Please define XPICTURE_TYPE"
#endif

#ifndef XFONT_TYPE
#define XFONT_TYPE const GFXfont *
#endif

#ifndef EM_GUI_SMALL_FONT
#define EM_GUI_SMALL_FONT (&FreeSans9pt7b)
#endif

#ifndef EM_GUI_MIDDLE_FONT
#define EM_GUI_MIDDLE_FONT (&FreeSans9pt7b)
#endif

#ifndef EM_GUI_PIC_CROSS 
#error "Please define EM_GUI_PIC_CROSS"
#endif


// GUI COLORS

// RGB565 definition 
#define COLOR_SEA_5 0x02AC	// Sea colors map from drakest to lightest
#define COLOR_SEA_4 0x1B2E
#define COLOR_SEA_3 0x0413
#define COLOR_SEA_2 0x3599
#define COLOR_SEA_1 0x5DD9 

#define COLOR_BROWN_5 0xA280	// Earth colors map from drakest to lightest
#define COLOR_BROWN_4 0xBBA5
#define COLOR_BROWN_3 0xFBC0
#define COLOR_BROWN_2 0xFCC7
#define COLOR_BROWN_1 0xFDAD 


// STATUSBAR STORY
#ifndef COLOR_MENU_HEADER_TEXT
#define COLOR_MENU_HEADER_TEXT WIDGET_COLOR_WHITE //WHITE
#endif

#ifndef COLOR_STATUS_BAR_BG
#define COLOR_STATUS_BAR_BG COLOR_SEA_5 //light-blue
#endif

#ifndef COLOR_MESSAGE_BACKGROUND
#define COLOR_MESSAGE_BACKGROUND COLOR_BROWN_1
#endif // !COLOR_MESSAGE_BACKGROUND

#ifndef COLOR_MESSAGE_TEXT
#define COLOR_MESSAGE_TEXT WIDGET_COLOR_BLACK
#endif // !COLOR_MESSAGE_TEXT

#ifndef MENU_BUTTON_LABEL_TEXT_COLOR
#define MENU_BUTTON_LABEL_TEXT_COLOR WIDGET_COLOR_BLACK
#endif // MENU_BUTTON_LABEL_TEXT_COLOR

#ifndef MENU_BUTTON_LABEL_BG_COLOR
#define MENU_BUTTON_LABEL_BG_COLOR WIDGET_COLOR_WHITE
#endif // MENU_BUTTON_LABEL_TEXT_COLOR

// PLOT STORY

#ifndef COLOR_PLOT_BACKGROUND
#define COLOR_PLOT_BACKGROUND WIDGET_COLOR_WHITE
#endif // !COLOR_PLOT_BACKGROUND

#ifndef COLOR_PLOT_GRIDS
#define COLOR_PLOT_GRIDS COLOR_SEA_1
#endif // !COLOR_PLOT_GRIDS

#ifndef COLOR_PLOT_SCALE_MARKER
#define COLOR_PLOT_SCALE_MARKER    COLOR_BROWN_5
#endif // !COLOR_PLOT_SCALE_MARKER

#ifndef COLOR_PLOT_GRAPH
#define COLOR_PLOT_GRAPH    COLOR_BROWN_4
#endif // !COLOR_PLOT_SCALE_MARKER


#endif // !OPTS_H