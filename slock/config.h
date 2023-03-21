/* user and group to drop privileges to */
static const char *user  = "Ankit";
static const char *group = "Ankit";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#3b4252",     /* after initialization */
	[INPUT] =  "#a3be8c",   /* during input */
	[FAILED] = "#bf616a",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
