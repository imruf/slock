/* user and group to drop privileges to */
static const char *user  = "masud";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;


/* default message */
static const char * message = "Enter Pass:>_";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
/* static const char * font_name = "lucidasanstypewriter-18"; */
static const char * font_name = "lucidasans-bold-18";
