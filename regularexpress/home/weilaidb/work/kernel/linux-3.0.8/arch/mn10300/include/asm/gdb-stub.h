#define _ASM_GDB_STUB_H
#define GDB_REGID_PC		9
#define GDB_REGID_FP		7
#define GDB_REGID_SP		8
#define NUMREGS			64
#define GDB_FR_D0		(0 * 4)
#define GDB_FR_D1		(1 * 4)
#define GDB_FR_D2		(2 * 4)
#define GDB_FR_D3		(3 * 4)
#define GDB_FR_A0		(4 * 4)
#define GDB_FR_A1		(5 * 4)
#define GDB_FR_A2		(6 * 4)
#define GDB_FR_A3		(7 * 4)
#define GDB_FR_SP		(8 * 4)
#define GDB_FR_PC		(9 * 4)
#define GDB_FR_MDR		(10 * 4)
#define GDB_FR_EPSW		(11 * 4)
#define GDB_FR_LIR		(12 * 4)
#define GDB_FR_LAR		(13 * 4)
#define GDB_FR_MDRQ		(14 * 4)
#define GDB_FR_E0		(15 * 4)
#define GDB_FR_E1		(16 * 4)
#define GDB_FR_E2		(17 * 4)
#define GDB_FR_E3		(18 * 4)
#define GDB_FR_E4		(19 * 4)
#define GDB_FR_E5		(20 * 4)
#define GDB_FR_E6		(21 * 4)
#define GDB_FR_E7		(22 * 4)
#define GDB_FR_SSP		(23 * 4)
#define GDB_FR_MSP		(24 * 4)
#define GDB_FR_USP		(25 * 4)
#define GDB_FR_MCRH		(26 * 4)
#define GDB_FR_MCRL		(27 * 4)
#define GDB_FR_MCVF		(28 * 4)
#define GDB_FR_FPCR		(29 * 4)
#define GDB_FR_DUMMY0		(30 * 4)
#define GDB_FR_DUMMY1		(31 * 4)
#define GDB_FR_FS0		(32 * 4)
#define GDB_FR_SIZE		(NUMREGS * 4)
struct gdb_regs ;
extern void show_registers_only(struct pt_regs *regs);
extern asmlinkage void gdbstub_init(void);
extern asmlinkage void gdbstub_exit(int status);
extern asmlinkage void gdbstub_io_init(void);
extern asmlinkage void gdbstub_io_set_baud(unsigned baud);
extern asmlinkage int  gdbstub_io_rx_char(unsigned char *_ch, int nonblock);
extern asmlinkage void gdbstub_io_tx_char(unsigned char ch);
extern asmlinkage void gdbstub_io_tx_flush(void);
extern asmlinkage void gdbstub_io_rx_handler(void);
extern asmlinkage void gdbstub_rx_irq(struct pt_regs *, enum exception_code);
extern asmlinkage int  gdbstub_intercept(struct pt_regs *, enum exception_code);
extern asmlinkage void gdbstub_exception(struct pt_regs *, enum exception_code);
extern asmlinkage void __gdbstub_bug_trap(void);
extern asmlinkage void __gdbstub_pause(void);
extern asmlinkage void gdbstub_purge_cache(void);
#define gdbstub_purge_cache()	do  while (0)
extern asmlinkage int  gdbstub_read_byte(const u8 *, u8 *);
extern asmlinkage int  gdbstub_read_word(const u8 *, u8 *);
extern asmlinkage int  gdbstub_read_dword(const u8 *, u8 *);
extern asmlinkage int  gdbstub_write_byte(u32, u8 *);
extern asmlinkage int  gdbstub_write_word(u32, u8 *);
extern asmlinkage int  gdbstub_write_dword(u32, u8 *);
extern asmlinkage void gdbstub_read_byte_guard(void);
extern asmlinkage void gdbstub_read_byte_cont(void);
extern asmlinkage void gdbstub_read_word_guard(void);
extern asmlinkage void gdbstub_read_word_cont(void);
extern asmlinkage void gdbstub_read_dword_guard(void);
extern asmlinkage void gdbstub_read_dword_cont(void);
extern asmlinkage void gdbstub_write_byte_guard(void);
extern asmlinkage void gdbstub_write_byte_cont(void);
extern asmlinkage void gdbstub_write_word_guard(void);
extern asmlinkage void gdbstub_write_word_cont(void);
extern asmlinkage void gdbstub_write_dword_guard(void);
extern asmlinkage void gdbstub_write_dword_cont(void);
extern u8	gdbstub_rx_buffer[PAGE_SIZE];
extern u32	gdbstub_rx_inp;
extern u32	gdbstub_rx_outp;
extern u8	gdbstub_rx_overflow;
extern u8	gdbstub_busy;
extern u8	gdbstub_rx_unget;
extern void gdbstub_printk(const char *fmt, ...)
__attribute__((format(printf, 1, 2)));
static inline __attribute__((format(printf, 1, 2)))
void gdbstub_printk(const char *fmt, ...)
#define gdbstub_entry(FMT, ...) gdbstub_printk(FMT, ##__VA_ARGS__)
#define gdbstub_entry(FMT, ...) no_printk(FMT, ##__VA_ARGS__)
#define gdbstub_proto(FMT, ...) gdbstub_printk(FMT, ##__VA_ARGS__)
#define gdbstub_proto(FMT, ...) no_printk(FMT, ##__VA_ARGS__)
#define gdbstub_io(FMT, ...) gdbstub_printk(FMT, ##__VA_ARGS__)
#define gdbstub_io(FMT, ...) no_printk(FMT, ##__VA_ARGS__)
#define gdbstub_bkpt(FMT, ...) gdbstub_printk(FMT, ##__VA_ARGS__)
#define gdbstub_bkpt(FMT, ...) no_printk(FMT, ##__VA_ARGS__)
