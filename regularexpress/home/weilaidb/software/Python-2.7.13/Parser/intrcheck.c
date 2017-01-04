void
PyOS_InitInterrupts(void)
void
PyOS_FiniInterrupts(void)
int
PyOS_InterruptOccurred(void)
#define OK
#if defined(_M_IX86) && !defined(__QNX__)
#if defined(MSDOS) && !defined(QUICKWIN)
void
PyOS_InitInterrupts(void)
void
PyOS_FiniInterrupts(void)
int
PyOS_InterruptOccurred(void)
void
PyOS_InitInterrupts(void)
void
PyOS_FiniInterrupts(void)
int
PyOS_InterruptOccurred(void)
#define OK
static int interrupted;
void
PyErr_SetInterrupt(void)
extern int PyErr_CheckSignals(void);
static int
checksignals_witharg(void * arg)
static void
intcatcher(int sig)
static void (*old_siginthandler)(int) = SIG_DFL;
void
PyOS_InitInterrupts(void)
void
PyOS_FiniInterrupts(void)
int
PyOS_InterruptOccurred(void)
void
PyOS_AfterFork(void)
