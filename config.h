/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"TerminessTTF Nerd Font:pixelsize=12",
	"FiraCode-Regular:pixelsize=9:antialias=true:autohint=true",
	"JoyPixels:size=9"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_gray1[]       = "#282828";
static const char col_gray3[]       = "#a89984";
static const char col_cyan[]        = "#83a598";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_gray3, col_gray1 },
	[SchemeSel] = { col_cyan, col_gray1 },
	[SchemeOut] = { col_gray3, col_gray1 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;
static unsigned int columns    = 2;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
