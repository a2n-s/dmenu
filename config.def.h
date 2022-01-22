/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
//	"mononoki nerd:size=10",
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/*
 * SELECT YOUR COLOR SCHEME
 */
// #include "colors/gruvbox-dark.h"

// #include "colors/doom-one.h"
// #include "colors/dracula.h"
#include "colors/monokai-pro.h"
// #include "colors/nord.h"
// #include "colors/oceanic-next.h"
// #include "colors/solarized-dark.h"
// #include "colors/solarized-light.h"
// #include "colors/tomorrow-night.h"

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
