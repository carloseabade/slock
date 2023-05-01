/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",     /* after initialization */
	[INPUT] =  "#282828",   /* during input */
	[FAILED] = "#fe8019",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Welcome back, Carlos. Type your password";

/* text color */
static const char * text_color = "#fe8019";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
