/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1.5;	/* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;	/* -c option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */
/*
 * Use prefix matching by default; can be inverted with the -x flag.
 */
static int use_prefix = 1;


/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"SF Pro Display:size=14"};
static const char *prompt = NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = {"#bbbbbb", "#222222"},
	[SchemeSel] = {"#eeeeee", "#005577"},
	[SchemeOut] = {"#000000", "#00ffff"},
	[SchemeHp] = {"#bbbbbb", "#333333"},
	[SchemeSelHighlight] = {"#00ff00", "#005577"},
	[SchemeNormHighlight] = {"#ffc978", "#222222"}};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 5;
/* -h option; minimum height of a menu line     */
static unsigned int lineheight = 50;

/* Size of the window border */
static unsigned int border_width = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
