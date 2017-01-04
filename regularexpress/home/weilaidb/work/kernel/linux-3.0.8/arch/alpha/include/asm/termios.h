#define _ALPHA_TERMIOS_H
struct sgttyb ;
struct tchars ;
struct ltchars ;
struct winsize ;
#define NCC 8
struct termio ;
#define _VINTR	0
#define _VQUIT	1
#define _VERASE	2
#define _VKILL	3
#define _VEOF	4
#define _VMIN	4
#define _VEOL	5
#define _VTIME	5
#define _VEOL2	6
#define _VSWTC	7
#define INIT_C_CC "\004\000\000\177\027\025\022\000\003\034\032\000\021\023\026\025\001\000"
#define user_termio_to_kernel_termios(a_termios, u_termio)			\
()
#define kernel_termios_to_user_termio(u_termio, a_termios)		\
()
#define user_termios_to_kernel_termios(k, u) \
copy_from_user(k, u, sizeof(struct termios))
#define kernel_termios_to_user_termios(u, k) \
copy_to_user(u, k, sizeof(struct termios))
