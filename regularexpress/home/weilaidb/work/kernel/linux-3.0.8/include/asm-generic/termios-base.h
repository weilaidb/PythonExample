#define _ASM_GENERIC_TERMIOS_BASE_H
static inline int user_termio_to_kernel_termios(struct ktermios *termios,
struct termio __user *termio)
static inline int kernel_termios_to_user_termio(struct termio __user *termio,
struct ktermios *termios)
#define user_termios_to_kernel_termios(k, u) copy_from_user(k, u, sizeof(struct termios))
#define kernel_termios_to_user_termios(u, k) copy_to_user(u, k, sizeof(struct termios))
#define user_termios_to_kernel_termios_1(k, u) copy_from_user(k, u, sizeof(struct termios))
#define kernel_termios_to_user_termios_1(u, k) copy_to_user(u, k, sizeof(struct termios))
