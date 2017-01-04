#if defined(HAVE_SYSTEM_INCLUDE_FILES) && defined(HAVE_BACKTRACE) && \
defined(HAVE_BACKTRACE_SYMBOLS) && defined(HAVE_EXECINFO_H)
#undef __DB_STACK_MAXFRAMES
#define	__DB_STACK_MAXFRAMES	25
void
__os_stack(env)
const ENV *env;
void
__os_stack_top(env, nframes, skipframes)
const ENV *env;
unsigned nframes;
unsigned skipframes;
void
__os_stack_text(env, result, bufsize, nframes, skip)
const ENV *env;
char *result;
size_t bufsize;
unsigned nframes;
unsigned skip;
int
__os_stack_save(env, nframes, frames)
const ENV *env;
unsigned nframes;
void **frames;
void
__os_stack_msgadd(env, mb, totalframes, skipframes, stack)
const ENV *env;
DB_MSGBUF *mb;
unsigned totalframes;
unsigned skipframes;
void **stack;
