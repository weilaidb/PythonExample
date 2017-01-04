#define _KDB_H
#define KDB_POLL_FUNC_MAX	5
extern int kdb_poll_idx;
extern int kdb_initial_cpu;
extern atomic_t kdb_event;
#define KDB_MAXARGS    16
typedef enum  kdb_repeat_t;
typedef int (*kdb_func_t)(int, const char **);
#define KDB_NOTFOUND	(-1)
#define KDB_ARGCOUNT	(-2)
#define KDB_BADWIDTH	(-3)
#define KDB_BADRADIX	(-4)
#define KDB_NOTENV	(-5)
#define KDB_NOENVVALUE	(-6)
#define KDB_NOTIMP	(-7)
#define KDB_ENVFULL	(-8)
#define KDB_ENVBUFFULL	(-9)
#define KDB_TOOMANYBPT	(-10)
#define KDB_TOOMANYDBREGS (-11)
#define KDB_DUPBPT	(-12)
#define KDB_BPTNOTFOUND	(-13)
#define KDB_BADMODE	(-14)
#define KDB_BADINT	(-15)
#define KDB_INVADDRFMT  (-16)
#define KDB_BADREG      (-17)
#define KDB_BADCPUNUM   (-18)
#define KDB_BADLENGTH	(-19)
#define KDB_NOBP	(-20)
#define KDB_BADADDR	(-21)
extern const char *kdb_diemsg;
#define KDB_FLAG_EARLYKDB	(1 << 0)
#define KDB_FLAG_CATASTROPHIC	(1 << 1)
#define KDB_FLAG_CMD_INTERRUPT	(1 << 2)
#define KDB_FLAG_NOIPI		(1 << 3)
#define KDB_FLAG_ONLY_DO_DUMP	(1 << 4)
#define KDB_FLAG_NO_CONSOLE	(1 << 5)
#define KDB_FLAG_NO_VT_CONSOLE	(1 << 6)
#define KDB_FLAG_NO_I8042	(1 << 7)
extern int kdb_flags;
extern void kdb_save_flags(void);
extern void kdb_restore_flags(void);
#define KDB_FLAG(flag)		(kdb_flags & KDB_FLAG_##flag)
#define KDB_FLAG_SET(flag)	((void)(kdb_flags |= KDB_FLAG_##flag))
#define KDB_FLAG_CLEAR(flag)	((void)(kdb_flags &= ~KDB_FLAG_##flag))
typedef enum  kdb_reason_t;
extern int kdb_trap_printk;
extern int vkdb_printf(const char *fmt, va_list args)
__attribute__ ((format (printf, 1, 0)));
extern int kdb_printf(const char *, ...)
__attribute__ ((format (printf, 1, 2)));
typedef int (*kdb_printf_t)(const char *, ...)
__attribute__ ((format (printf, 1, 2)));
extern void kdb_init(int level);
typedef int (*get_char_func)(void);
extern get_char_func kdb_poll_funcs[];
extern int kdb_get_kbd_char(void);
static inline
int kdb_process_cpu(const struct task_struct *p)
extern struct pt_regs *kdb_current_regs;
extern const char *kdb_walk_kallsyms(loff_t *pos);
static inline const char *kdb_walk_kallsyms(loff_t *pos)
extern int kdb_register(char *, kdb_func_t, char *, char *, short);
extern int kdb_register_repeat(char *, kdb_func_t, char *, char *,
short, kdb_repeat_t);
extern int kdb_unregister(char *);
#define kdb_printf(...)
#define kdb_init(x)
#define kdb_register(...)
#define kdb_register_repeat(...)
#define kdb_uregister(x)
enum ;
extern int kdbgetintenv(const char *, int *);
extern int kdb_set(int, const char **);
