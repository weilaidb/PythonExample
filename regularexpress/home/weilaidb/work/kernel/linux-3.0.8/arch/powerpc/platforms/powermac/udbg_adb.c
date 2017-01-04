static void (*udbg_adb_old_putc)(char c);
static int (*udbg_adb_old_getc)(void);
static int (*udbg_adb_old_getc_poll)(void);
static enum  input_type = input_adb_none;
int xmon_wants_key, xmon_adb_keycode;
static inline void udbg_adb_poll(void)
static int udbg_adb_use_btext;
static int xmon_adb_shiftstate;
static unsigned char xmon_keytab[128] =
"asdfhgzxcv\000bqwer"
"yt123465=97-80]o"
"u[ip\rlj'k;\\,/nm."
"\t `\177\0\033\0\0\0\0\0\0\0\0\0\0"
"\0.\0*\0+\0\0\0\0\0/\r\0-\0"
"\0\0000123456789\0\0\0";
static unsigned char xmon_shift_keytab[128] =
"ASDFHGZXCV\000BQWER"
"YT!@#$^%+(&_*)}O"
"U{IP\rLJ\"K:|<?NM>"
"\t ~\177\0\033\0\0\0\0\0\0\0\0\0\0"
"\0.\0*\0+\0\0\0\0\0/\r\0-\0"
"\0\0000123456789\0\0\0";
static int udbg_adb_local_getc(void)
static int udbg_adb_getc(void)
static int udbg_adb_getc_poll(void)
static void udbg_adb_putc(char c)
void __init udbg_adb_init_early(void)
int __init udbg_adb_init(int force_btext)
