#define _SPARC_KDEBUG_H
#define DEBUG_BP_TRAP     126
typedef unsigned int (*debugger_funct)(void);
struct kernel_debug ;
extern struct kernel_debug *linux_dbvec;
static inline void sp_enter_debugger(void)
#define SP_ENTER_DEBUGGER do  while(0)
enum die_val ;
#define KDEBUG_ENTRY_OFF    0x0
#define KDEBUG_DUNNO_OFF    0x4
#define KDEBUG_DUNNO2_OFF   0x8
#define KDEBUG_TEACH_OFF    0xc
