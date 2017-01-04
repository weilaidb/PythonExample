#define KGDB_MAX_THREAD_QUERY 17
static char			remcom_in_buffer[BUFMAX];
static char			remcom_out_buffer[BUFMAX];
static unsigned long		gdb_regs[(NUMREGBYTES +
sizeof(unsigned long) - 1) /
sizeof(unsigned long)];
static int gdbstub_read_wait(void)
static int gdbstub_read_wait(void)
static void get_packet(char *buffer)
static void put_packet(char *buffer)
static char gdbmsgbuf[BUFMAX + 1];
void gdbstub_msg_write(const char *s, int len)
char *kgdb_mem2hex(char *mem, char *buf, int count)
int kgdb_hex2mem(char *buf, char *mem, int count)
int kgdb_hex2long(char **ptr, unsigned long *long_val)
static int kgdb_ebin2mem(char *buf, char *mem, int count)
#if DBG_MAX_REG_NUM > 0
void pt_regs_to_gdb_regs(unsigned long *gdb_regs, struct pt_regs *regs)
void gdb_regs_to_pt_regs(unsigned long *gdb_regs, struct pt_regs *regs)
static int write_mem_msg(int binary)
static void error_packet(char *pkt, int error)
#define BUF_THREAD_ID_SIZE	8
static char *pack_threadid(char *pkt, unsigned char *id)
static void int_to_threadref(unsigned char *id, int value)
static struct task_struct *getthread(struct pt_regs *regs, int tid)
static inline int shadow_pid(int realpid)
static void gdb_cmd_status(struct kgdb_state *ks)
static void gdb_get_regs_helper(struct kgdb_state *ks)
static void gdb_cmd_getregs(struct kgdb_state *ks)
static void gdb_cmd_setregs(struct kgdb_state *ks)
static void gdb_cmd_memread(struct kgdb_state *ks)
static void gdb_cmd_memwrite(struct kgdb_state *ks)
#if DBG_MAX_REG_NUM > 0
static char *gdb_hex_reg_helper(int regnum, char *out)
static void gdb_cmd_reg_get(struct kgdb_state *ks)
static void gdb_cmd_reg_set(struct kgdb_state *ks)
static void gdb_cmd_binwrite(struct kgdb_state *ks)
static void gdb_cmd_detachkill(struct kgdb_state *ks)
static int gdb_cmd_reboot(struct kgdb_state *ks)
static void gdb_cmd_query(struct kgdb_state *ks)
static void gdb_cmd_task(struct kgdb_state *ks)
static void gdb_cmd_thread(struct kgdb_state *ks)
static void gdb_cmd_break(struct kgdb_state *ks)
static int gdb_cmd_exception_pass(struct kgdb_state *ks)
int gdb_serial_stub(struct kgdb_state *ks)
int gdbstub_state(struct kgdb_state *ks, char *cmd)
void gdbstub_exit(int status)
