#define _LINUX_TTY_LDISC_H
struct tty_ldisc_ops ;
struct tty_ldisc ;
#define TTY_LDISC_MAGIC	0x5403
#define LDISC_FLAG_DEFINED	0x00000001
#define MODULE_ALIAS_LDISC(ldisc) \
MODULE_ALIAS("tty-ldisc-" __stringify(ldisc))
