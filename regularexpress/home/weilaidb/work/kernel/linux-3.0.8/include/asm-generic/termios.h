#define _ASM_GENERIC_TERMIOS_H
struct winsize ;
#define NCC 8
struct termio ;
#define TIOCM_LE	0x001
#define TIOCM_DTR	0x002
#define TIOCM_RTS	0x004
#define TIOCM_ST	0x008
#define TIOCM_SR	0x010
#define TIOCM_CTS	0x020
#define TIOCM_CAR	0x040
#define TIOCM_RNG	0x080
#define TIOCM_DSR	0x100
#define TIOCM_CD	TIOCM_CAR
#define TIOCM_RI	TIOCM_RNG
#define TIOCM_OUT1	0x2000
#define TIOCM_OUT2	0x4000
#define TIOCM_LOOP	0x8000
#define INIT_C_CC "\003\034\177\025\004\0\1\0\021\023\032\0\022\017\027\026\0"
static inline int user_termio_to_kernel_termios(struct ktermios *termios,
const struct termio __user *termio)
static inline int kernel_termios_to_user_termio(struct termio __user *termio,
struct ktermios *termios)
static inline int user_termios_to_kernel_termios(struct ktermios *k,
struct termios2 __user *u)
static inline int kernel_termios_to_user_termios(struct termios2 __user *u,
struct ktermios *k)
static inline int user_termios_to_kernel_termios_1(struct ktermios *k,
struct termios __user *u)
static inline int kernel_termios_to_user_termios_1(struct termios __user *u,
struct ktermios *k)
static inline int user_termios_to_kernel_termios(struct ktermios *k,
struct termios __user *u)
static inline int kernel_termios_to_user_termios(struct termios __user *u,
struct ktermios *k)
