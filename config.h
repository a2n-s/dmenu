/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
  "mononoki Nerd Font-20",
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

// THEME: Cobalt_Neon
static const char *colors[SchemeLast][2] = {
	                         /*    fg         bg   */
	[SchemeSel]            = { "#142630", "#781aa0" },  // only selected item.
	[SchemeMid]            = { "#8ff586", "#142838" },  // side selections
	[SchemeNorm]           = { "#8ff586", "#142838" },  // general
	[SchemeSelHighlight]   = { "#3aa5ff", "#142630" },  // filtered characters selection
	[SchemeNormHighlight]  = { "#3aa5ff", "#142630" },  // filtered characters others
	[SchemeOut]            = { "#142630", "#8ff586" },
};

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
