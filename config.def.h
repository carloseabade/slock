/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",     /* after initialization */
	[INPUT] =  "#7c6f64",   /* during input */
	[FAILED] = "#fe8019",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
