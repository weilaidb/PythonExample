#define LS_SIZE                 0x40000
typedef unsigned int u32;
typedef unsigned long long u64;
#define BR_INSTR		0x327fff80
#define NOP_INSTR		0x40200000
#define HEQ_INSTR		0x7b000000
#define STOP_INSTR		0x00000000
#define ILLEGAL_INSTR		0x00800000
#define RESTORE_COMPLETE	0x00003ffc
static inline void fetch_regs_from_mem(addr64 lscsa_ea)
static inline void restore_upper_240kb(addr64 lscsa_ea)
static inline void restore_decr(void)
static inline void write_ppu_mb(void)
static inline void write_ppuint_mb(void)
static inline void restore_fpcr(void)
static inline void restore_srr0(void)
static inline void restore_event_mask(void)
static inline void restore_tag_mask(void)
static inline void restore_complete(void)
int main()
