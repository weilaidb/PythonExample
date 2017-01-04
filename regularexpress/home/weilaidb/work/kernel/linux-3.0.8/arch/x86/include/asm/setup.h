#define _ASM_X86_SETUP_H
#define COMMAND_LINE_SIZE 2048
#define MAXMEM_PFN	PFN_DOWN(MAXMEM)
#define MAX_NONPAE_PFN	(1 << 20)
#define PARAM_SIZE 4096
#define OLD_CL_MAGIC		0xA33F
#define OLD_CL_ADDRESS		0x020
#define NEW_CL_POINTER		0x228
void vsmp_init(void);
static inline void vsmp_init(void)
void setup_bios_corruption_check(void);
extern void visws_early_detect(void);
static inline void visws_early_detect(void)
extern unsigned long saved_video_mode;
extern void reserve_standard_io_resources(void);
extern void i386_reserve_resources(void);
extern void setup_default_timer_irq(void);
extern void x86_mrst_early_setup(void);
static inline void x86_mrst_early_setup(void)
extern void x86_ce4100_early_setup(void);
static inline void x86_ce4100_early_setup(void)
extern struct boot_params boot_params;
#define LOWMEMSIZE()	(0x9f000)
extern unsigned long _brk_end;
void *extend_brk(size_t size, size_t align);
#define RESERVE_BRK(name,sz)						\
static void __section(.discard.text) __used notrace		\
__brk_reservation_fn_##name##__(void)
#define RESERVE_BRK_ARRAY(type, name, entries)		\
type *name;					\
RESERVE_BRK(name, sizeof(type) * entries)
extern void probe_roms(void);
void __init i386_start_kernel(void);
void __init x86_64_start_kernel(char *real_mode);
void __init x86_64_start_reservations(char *real_mode_data);
#define RESERVE_BRK(name,sz)				\
.pushsection .brk_reservation,"aw",@nobits;	\
.brk.name:						\
1:	.skip sz;					\
.size .brk.name,.-1b;				\
.popsection
