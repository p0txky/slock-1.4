/* user and group to drop privileges to */
static const char *user  = "p0txky";
static const char *group = "p0txky";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#68a6f8",   /* during input */
	[FAILED] = "#f86868",   /* wrong password */
	[CAPS] = "#68f879",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;


/* default message */
static const char * message = "Please enter your password! ";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "9x15";
