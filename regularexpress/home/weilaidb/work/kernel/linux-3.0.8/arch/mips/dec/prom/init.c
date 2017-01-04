int (*__rex_bootinit)(void);
int (*__rex_bootread)(void);
int (*__rex_getbitmap)(memmap *);
unsigned long *(*__rex_slot_address)(int);
void *(*__rex_gettcinfo)(void);
int (*__rex_getsysid)(void);
void (*__rex_clear_cache)(void);
int (*__prom_getchar)(void);
char *(*__prom_getenv)(char *);
int (*__prom_printf)(char *, ...);
int (*__pmax_open)(char*, int);
int (*__pmax_lseek)(int, long, int);
int (*__pmax_read)(int, void *, int);
int (*__pmax_close)(int);
void __init which_prom(s32 magic, s32 *prom_vec)
void __init prom_init(void)
