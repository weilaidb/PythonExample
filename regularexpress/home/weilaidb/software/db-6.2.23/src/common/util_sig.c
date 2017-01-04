static int	interrupt;
static void	set_signal __P((int, int));
static void	signal_handler __P((int));
static void
signal_handler(signo)
int signo;
static void
set_signal(s, is_dflt)
int s, is_dflt;
void
__db_util_siginit()
int
__db_util_interrupted()
void
__db_util_sigresend()
