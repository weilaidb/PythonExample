#define _N2RNG_H
#define RNG_CTL_WAIT       0x0000000001fffe00ULL
#define RNG_CTL_WAIT_SHIFT 9
#define RNG_CTL_BYPASS     0x0000000000000100ULL
#define RNG_CTL_VCO        0x00000000000000c0ULL
#define RNG_CTL_VCO_SHIFT  6
#define RNG_CTL_ASEL       0x0000000000000030ULL
#define RNG_CTL_ASEL_SHIFT 4
#define RNG_CTL_LFSR       0x0000000000000008ULL
#define RNG_CTL_ES3        0x0000000000000004ULL
#define RNG_CTL_ES2        0x0000000000000002ULL
#define RNG_CTL_ES1        0x0000000000000001ULL
#define HV_FAST_RNG_GET_DIAG_CTL	0x130
#define HV_FAST_RNG_CTL_READ		0x131
#define HV_FAST_RNG_CTL_WRITE		0x132
#define HV_FAST_RNG_DATA_READ_DIAG	0x133
#define HV_FAST_RNG_DATA_READ		0x134
#define HV_RNG_STATE_UNCONFIGURED	0
#define HV_RNG_STATE_CONFIGURED		1
#define HV_RNG_STATE_HEALTHCHECK	2
#define HV_RNG_STATE_ERROR		3
#define HV_RNG_NUM_CONTROL		4
extern unsigned long sun4v_rng_get_diag_ctl(void);
extern unsigned long sun4v_rng_ctl_read_v1(unsigned long ctl_regs_ra,
unsigned long *state,
unsigned long *tick_delta);
extern unsigned long sun4v_rng_ctl_read_v2(unsigned long ctl_regs_ra,
unsigned long unit,
unsigned long *state,
unsigned long *tick_delta,
unsigned long *watchdog,
unsigned long *write_status);
extern unsigned long sun4v_rng_ctl_write_v1(unsigned long ctl_regs_ra,
unsigned long state,
unsigned long write_timeout,
unsigned long *tick_delta);
extern unsigned long sun4v_rng_ctl_write_v2(unsigned long ctl_regs_ra,
unsigned long state,
unsigned long write_timeout,
unsigned long unit);
extern unsigned long sun4v_rng_data_read_diag_v1(unsigned long data_ra,
unsigned long len,
unsigned long *tick_delta);
extern unsigned long sun4v_rng_data_read_diag_v2(unsigned long data_ra,
unsigned long len,
unsigned long unit,
unsigned long *tick_delta);
extern unsigned long sun4v_rng_data_read(unsigned long data_ra,
unsigned long *tick_delta);
struct n2rng_unit ;
struct n2rng ;
#define N2RNG_BLOCK_LIMIT	60000
#define N2RNG_BUSY_LIMIT	100
#define N2RNG_HCHECK_LIMIT	100
