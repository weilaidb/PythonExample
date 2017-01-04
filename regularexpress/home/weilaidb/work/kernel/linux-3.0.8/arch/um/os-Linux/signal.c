#define barrier() __asm__ __volatile__("": : :"memory")
void (*sig_info[NSIG])(int, struct uml_pt_regs *) = ;
static void sig_handler_common(int sig, struct sigcontext *sc)
#define SIGIO_BIT 0
#define SIGIO_MASK (1 << SIGIO_BIT)
#define SIGVTALRM_BIT 1
#define SIGVTALRM_MASK (1 << SIGVTALRM_BIT)
static int signals_enabled;
static unsigned int signals_pending;
void sig_handler(int sig, struct sigcontext *sc)
static void real_alarm_handler(struct sigcontext *sc)
void alarm_handler(int sig, struct sigcontext *sc)
void timer_init(void)
void set_sigstack(void *sig_stack, int size)
static void (*handlers[_NSIG])(int sig, struct sigcontext *sc);
void handle_signal(int sig, struct sigcontext *sc)
extern void hard_handler(int sig);
void set_handler(int sig, void (*handler)(int), int flags, ...)
int change_sig(int signal, int on)
void block_signals(void)
void unblock_signals(void)
int get_signals(void)
int set_signals(int enable)
