#define __ASM_GDB_STUB_H
#undef GDBSTUB_DEBUG_IO
#undef GDBSTUB_DEBUG_PROTOCOL
#define GDB_REG_GR(N)	(N)
#define GDB_REG_FR(N)	(64+(N))
#define GDB_REG_PC	128
#define GDB_REG_PSR	129
#define GDB_REG_CCR	130
#define GDB_REG_CCCR	131
#define GDB_REG_TBR	135
#define GDB_REG_BRR	136
#define GDB_REG_DBAR(N)	(137+(N))
#define GDB_REG_SCR(N)	(141+(N))
#define GDB_REG_LR	145
#define GDB_REG_LCR	146
#define GDB_REG_FSR0	149
#define GDB_REG_ACC(N)	(150+(N))
#define GDB_REG_ACCG(N)	(158+(N)/4)
#define GDB_REG_MSR(N)	(160+(N))
#define GDB_REG_GNER(N)	(162+(N))
#define GDB_REG_FNER(N)	(164+(N))
#define GDB_REG_SP	GDB_REG_GR(1)
#define GDB_REG_FP	GDB_REG_GR(2)
extern void show_registers_only(struct pt_regs *regs);
extern void gdbstub_init(void);
extern void gdbstub(int type);
extern void gdbstub_exit(int status);
extern void gdbstub_io_init(void);
extern void gdbstub_set_baud(unsigned baud);
extern int gdbstub_rx_char(unsigned char *_ch, int nonblock);
extern void gdbstub_tx_char(unsigned char ch);
extern void gdbstub_tx_flush(void);
extern void gdbstub_do_rx(void);
extern asmlinkage void __debug_stub_init_break(void);
extern asmlinkage void __break_hijack_kernel_event(void);
extern asmlinkage void __break_hijack_kernel_event_breaks_here(void);
extern asmlinkage void gdbstub_rx_handler(void);
extern asmlinkage void gdbstub_rx_irq(void);
extern asmlinkage void gdbstub_intercept(void);
extern uint32_t __entry_usertrap_table[];
extern uint32_t __entry_kerneltrap_table[];
extern volatile u8	gdbstub_rx_buffer[PAGE_SIZE];
extern volatile u32	gdbstub_rx_inp;
extern volatile u32	gdbstub_rx_outp;
extern volatile u8	gdbstub_rx_overflow;
extern u8		gdbstub_rx_unget;
extern void gdbstub_printk(const char *fmt, ...);
extern void debug_to_serial(const char *p, int n);
extern void console_set_baud(unsigned baud);
#define gdbstub_io(FMT,...) gdbstub_printk(FMT, ##__VA_ARGS__)
#define gdbstub_io(FMT,...) ()
#define gdbstub_proto(FMT,...) gdbstub_printk(FMT,##__VA_ARGS__)
#define gdbstub_proto(FMT,...) ()
register struct frv_frame0 *__debug_frame0 asm("gr31");
#define __debug_frame		(&__debug_frame0->regs)
#define __debug_user_context	(&__debug_frame0->uc)
#define __debug_regs		(&__debug_frame0->debug)
#define __debug_reg(X)		((unsigned long *) ((unsigned long) &__debug_frame0 + (X)))
struct frv_debug_status ;
extern struct frv_debug_status __debug_status;
