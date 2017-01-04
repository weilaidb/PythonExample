#define _ASM_POWERPC_TERMIOS_H
struct sgttyb ;
struct tchars ;
struct ltchars ;
struct winsize ;
#define NCC 10
struct termio ;
#define _VINTR	0
#define _VQUIT	1
#define _VERASE	2
#define _VKILL	3
#define _VEOF	4
#define _VMIN	5
#define _VEOL	6
#define _VTIME	7
#define _VEOL2	8
#define _VSWTC	9
#define INIT_C_CC "\003\034\177\025\004\001\000\000\000\000\027\022\032\021\023\026\025"
