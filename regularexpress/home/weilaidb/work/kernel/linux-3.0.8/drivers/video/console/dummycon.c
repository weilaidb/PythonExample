#if defined(__arm__)
#define DUMMY_COLUMNS	screen_info.orig_video_cols
#define DUMMY_ROWS	screen_info.orig_video_lines
#elif defined(__hppa__)
#define DUMMY_COLUMNS	CONFIG_DUMMY_CONSOLE_COLUMNS
#define DUMMY_ROWS	CONFIG_DUMMY_CONSOLE_ROWS
#define DUMMY_COLUMNS	80
#define DUMMY_ROWS	25
static const char *dummycon_startup(void)
static void dummycon_init(struct vc_data *vc, int init)
static int dummycon_dummy(void)
#define DUMMY	(void *)dummycon_dummy
const struct consw dummy_con = ;
