#define _SPARC_TERMIOS_H
#if defined(__KERNEL__) || defined(__DEFINE_BSD_TERMIOS)
struct sgttyb ;
struct tchars ;
struct ltchars ;
struct winsize ;
#define _VMIN	4
#define _VTIME	5
#define INIT_C_CC "\003\034\177\025\004\000\000\000\021\023\032\031\022\025\027\026\001"
#define user_termio_to_kernel_termios(termios, termio) \
()
#define kernel_termios_to_user_termio(termio, termios) \
()
#define user_termios_to_kernel_termios(k, u) \
()
#define kernel_termios_to_user_termios(u, k) \
()
#define user_termios_to_kernel_termios_1(k, u) \
()
#define kernel_termios_to_user_termios_1(u, k) \
()
