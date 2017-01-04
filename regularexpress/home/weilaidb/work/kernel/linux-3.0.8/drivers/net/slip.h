#define _LINUX_SLIP_H
#if defined(CONFIG_INET) && defined(CONFIG_SLIP_COMPRESSED)
# define SL_INCLUDE_CSLIP
# define SL_MODE_DEFAULT SL_MODE_ADAPTIVE
# define SL_MODE_DEFAULT SL_MODE_SLIP
#define SL_NRUNIT	256
#define SL_MTU		296
#define END             0300
#define ESC             0333
#define ESC_END         0334
#define ESC_ESC         0335
struct slip ;
#define SLIP_MAGIC 0x5302
