#define _I8042_H
#if defined(CONFIG_MACH_JAZZ)
#elif defined(CONFIG_SGI_HAS_I8042)
#elif defined(CONFIG_SNI_RM)
#elif defined(CONFIG_PPC)
#elif defined(CONFIG_SPARC)
#elif defined(CONFIG_X86) || defined(CONFIG_IA64)
#elif defined(CONFIG_UNICORE32)
#define I8042_CTL_TIMEOUT	10000
#define I8042_STR_PARITY	0x80
#define I8042_STR_TIMEOUT	0x40
#define I8042_STR_AUXDATA	0x20
#define I8042_STR_KEYLOCK	0x10
#define I8042_STR_CMDDAT	0x08
#define I8042_STR_MUXERR	0x04
#define I8042_STR_IBF		0x02
#define	I8042_STR_OBF		0x01
#define I8042_CTR_KBDINT	0x01
#define I8042_CTR_AUXINT	0x02
#define I8042_CTR_IGNKEYLOCK	0x08
#define I8042_CTR_KBDDIS	0x10
#define I8042_CTR_AUXDIS	0x20
#define I8042_CTR_XLATE		0x40
#define I8042_RET_CTL_TEST	0x55
#define I8042_BUFFER_SIZE	16
#define I8042_NUM_MUX_PORTS	4
static unsigned long i8042_start_time;
#define dbg_init() do  while (0)
#define dbg(format, arg...)							\
do  while (0)
#define dbg_init() do  while (0)
#define dbg(format, arg...)							\
do  while (0)
