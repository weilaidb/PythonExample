#define BNX2X_DUMP_H
#define XSTORM_WAITP_ADDR    0x2b8a80
#define TSTORM_WAITP_ADDR    0x1b8a80
#define USTORM_WAITP_ADDR    0x338a80
#define CSTORM_WAITP_ADDR    0x238a80
#define TSTORM_CAM_MODE         0x1B1440
#define MAX_TIMER_PENDING      200
#define TIMER_SCAN_DONT_CARE   0xFF
#define RI_E1			0x1
#define RI_E1H			0x2
#define RI_E2			0x4
#define RI_ONLINE		0x100
#define RI_PATH0_DUMP		0x200
#define RI_PATH1_DUMP		0x400
#define RI_E1_OFFLINE		(RI_E1)
#define RI_E1_ONLINE		(RI_E1 | RI_ONLINE)
#define RI_E1H_OFFLINE		(RI_E1H)
#define RI_E1H_ONLINE		(RI_E1H | RI_ONLINE)
#define RI_E2_OFFLINE		(RI_E2)
#define RI_E2_ONLINE		(RI_E2 | RI_ONLINE)
#define RI_E1E1H_OFFLINE	(RI_E1 | RI_E1H)
#define RI_E1E1H_ONLINE		(RI_E1 | RI_E1H | RI_ONLINE)
#define RI_E1HE2_OFFLINE	(RI_E2 | RI_E1H)
#define RI_E1HE2_ONLINE		(RI_E2 | RI_E1H | RI_ONLINE)
#define RI_E1E2_OFFLINE		(RI_E2 | RI_E1)
#define RI_E1E2_ONLINE		(RI_E2 | RI_E1 | RI_ONLINE)
#define RI_ALL_OFFLINE         (RI_E1 | RI_E1H | RI_E2)
#define RI_ALL_ONLINE          (RI_E1 | RI_E1H | RI_E2 | RI_ONLINE)
struct dump_sign ;
struct dump_hdr ;
struct reg_addr ;
struct wreg_addr ;
#define REGS_COUNT			834
static const struct reg_addr reg_addrs[REGS_COUNT] = ;
#define IDLE_REGS_COUNT			237
static const struct reg_addr idle_addrs[IDLE_REGS_COUNT] = ;
#define WREGS_COUNT_E1			1
static const u32 read_reg_e1_0[] = ;
static const struct wreg_addr wreg_addrs_e1[WREGS_COUNT_E1] = ;
#define WREGS_COUNT_E1H			1
static const u32 read_reg_e1h_0[] = ;
static const struct wreg_addr wreg_addrs_e1h[WREGS_COUNT_E1H] = ;
#define WREGS_COUNT_E2			1
static const u32 read_reg_e2_0[] = ;
static const struct wreg_addr wreg_addrs_e2[WREGS_COUNT_E2] = ;
static const struct dump_sign dump_sign_all = ;
#define TIMER_REGS_COUNT_E1		2
static const u32 timer_status_regs_e1[TIMER_REGS_COUNT_E1] = ;
static const u32 timer_scan_regs_e1[TIMER_REGS_COUNT_E1] = ;
#define TIMER_REGS_COUNT_E1H		2
static const u32 timer_status_regs_e1h[TIMER_REGS_COUNT_E1H] = ;
static const u32 timer_scan_regs_e1h[TIMER_REGS_COUNT_E1H] = ;
#define TIMER_REGS_COUNT_E2		2
static const u32 timer_status_regs_e2[TIMER_REGS_COUNT_E2] = ;
static const u32 timer_scan_regs_e2[TIMER_REGS_COUNT_E2] = ;
#define PAGE_MODE_VALUES_E1 0
#define PAGE_READ_REGS_E1 0
#define PAGE_WRITE_REGS_E1 0
static const u32 page_vals_e1[] = ;
static const u32 page_write_regs_e1[] = ;
static const struct reg_addr page_read_regs_e1[] = ;
#define PAGE_MODE_VALUES_E1H 0
#define PAGE_READ_REGS_E1H 0
#define PAGE_WRITE_REGS_E1H 0
static const u32 page_vals_e1h[] = ;
static const u32 page_write_regs_e1h[] = ;
static const struct reg_addr page_read_regs_e1h[] = ;
#define PAGE_MODE_VALUES_E2 2
#define PAGE_READ_REGS_E2 1
#define PAGE_WRITE_REGS_E2 1
static const u32 page_vals_e2[PAGE_MODE_VALUES_E2] = ;
static const u32 page_write_regs_e2[PAGE_WRITE_REGS_E2] = ;
static const struct reg_addr page_read_regs_e2[PAGE_READ_REGS_E2] = ;
