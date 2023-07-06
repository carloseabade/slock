/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#212320",     /* after initialization */
	[INPUT] =  "#212320",   /* during input */
	[FAILED] = "#a21212",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Locked";

/* text color */
static const char * text_color = "#dddddd";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
