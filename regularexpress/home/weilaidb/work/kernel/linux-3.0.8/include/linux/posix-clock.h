#define _LINUX_POSIX_CLOCK_H_
struct posix_clock;
struct posix_clock_operations ;
struct posix_clock ;
int posix_clock_register(struct posix_clock *clk, dev_t devid);
void posix_clock_unregister(struct posix_clock *clk);
