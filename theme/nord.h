/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#3b4252", /* black   */
	"#bf616a", /* red     */
	"#a3be8c", /* green   */
	"#ebcb8b", /* yellow  */
	"#81a1c1", /* blue    */
	"#b48ead", /* magenta */
	"#88c0d0", /* cyan    */
	"#e5e9f0", /* white   */

	/* 8 bright colors */
	"#4c566a", /* black   */
	"#bf616a", /* red     */
	"#a3be8c", /* green   */
	"#ebcb8b", /* yellow  */
	"#81a1c1", /* blue    */
	"#b48ead", /* magenta */
	"#8fbcbb", /* cyan    */
	"#eceff4", /* white   */

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#d8dee9", /* default foreground colour */
	"#2e3440", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor, selection
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 256;
unsigned int selectionbg = 0;
unsigned int selectionfg = 256;
/* If 0 use selectionfg as foreground in order to have a uniform foreground-color */
/* Else if 1 keep original foreground-color of each cell => more colors :) */
static int ignoreselfg = 1;
