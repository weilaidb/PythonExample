struct dio_bus dio_bus = ;
#define CONFIG_DIO_CONSTANTS
struct dioname
;
#define DIONAME(x)
#define DIOFBNAME(x)
static struct dioname names[] =
;
#undef DIONAME
#undef DIOFBNAME
static const char *unknowndioname
= "unknown DIO board -- please email <linux-m68k@lists.linux-m68k.org>!";
static const char *dio_getname(int id)
static char dio_no_name[] = ;
#define dio_getname(_id)	(dio_no_name)
int __init dio_find(int deviceid)
static int __init dio_init(void)
subsys_initcall(dio_init);
unsigned long dio_scodetophysaddr(int scode)
