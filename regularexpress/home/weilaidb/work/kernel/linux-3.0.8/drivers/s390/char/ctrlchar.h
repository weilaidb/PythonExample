extern unsigned int
ctrlchar_handle(const unsigned char *buf, int len, struct tty_struct *tty);
#define CTRLCHAR_NONE  (1 << 8)
#define CTRLCHAR_CTRL  (2 << 8)
#define CTRLCHAR_SYSRQ (3 << 8)
#define CTRLCHAR_MASK (~0xffu)
