#define _DEBUG_CORE_H_
struct kgdb_state ;
#define DCPU_WANT_MASTER 0x1
#define DCPU_NEXT_MASTER 0x2
#define DCPU_IS_SLAVE    0x4
#define DCPU_SSTEP       0x8
struct debuggerinfo_struct ;
extern struct debuggerinfo_struct kgdb_info[];
extern int dbg_remove_all_break(void);
extern int dbg_set_sw_break(unsigned long addr);
extern int dbg_remove_sw_break(unsigned long addr);
extern int dbg_activate_sw_breakpoints(void);
extern int dbg_deactivate_sw_breakpoints(void);
extern int dbg_io_get_char(void);
#define DBG_PASS_EVENT -12345
#define DBG_SWITCH_CPU_EVENT -123456
extern int dbg_switch_cpu;
extern int gdb_serial_stub(struct kgdb_state *ks);
extern void gdbstub_msg_write(const char *s, int len);
extern int gdbstub_state(struct kgdb_state *ks, char *cmd);
extern int dbg_kdb_mode;
extern int kdb_stub(struct kgdb_state *ks);
extern int kdb_parse(const char *cmdstr);
static inline int kdb_stub(struct kgdb_state *ks)
