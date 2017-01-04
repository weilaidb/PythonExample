#define __PROCESS_H__
#define barrier() __asm__ __volatile__("": : :"memory")
extern void sig_handler(int sig, struct sigcontext *sc);
extern void alarm_handler(int sig, struct sigcontext *sc);
