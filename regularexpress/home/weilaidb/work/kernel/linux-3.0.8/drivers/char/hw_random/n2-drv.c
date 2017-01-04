#define DRV_MODULE_NAME		"n2rng"
#define PFX DRV_MODULE_NAME	": "
#define DRV_MODULE_VERSION	"0.1"
#define DRV_MODULE_RELDATE	"May 15, 2008"
static char version[] __devinitdata =
DRV_MODULE_NAME ".c:v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_DESCRIPTION("Niagara2 RNG driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
static int n2rng_hv_err_trans(unsigned long hv_err)
static unsigned long n2rng_generic_read_control_v2(unsigned long ra,
unsigned long unit)
static unsigned long n2rng_control_settle_v2(struct n2rng *np, int unit)
static unsigned long n2rng_write_ctl_one(struct n2rng *np, int unit,
unsigned long state,
unsigned long control_ra,
unsigned long watchdog_timeout,
unsigned long *ticks)
static int n2rng_generic_read_data(unsigned long data_ra)
static unsigned long n2rng_read_diag_data_one(struct n2rng *np,
unsigned long unit,
unsigned long data_ra,
unsigned long data_len,
unsigned long *ticks)
static int n2rng_generic_read_diag_data(struct n2rng *np,
unsigned long unit,
unsigned long data_ra,
unsigned long data_len)
static int n2rng_generic_write_control(struct n2rng *np,
unsigned long control_ra,
unsigned long unit,
unsigned long state)
static int n2rng_try_read_ctl(struct n2rng *np)
#define CONTROL_DEFAULT_BASE		\
((2 << RNG_CTL_ASEL_SHIFT) |	\
(N2RNG_ACCUM_CYCLES_DEFAULT << RNG_CTL_WAIT_SHIFT) |	\
RNG_CTL_LFSR)
#define CONTROL_DEFAULT_0		\
(CONTROL_DEFAULT_BASE |		\
(1 << RNG_CTL_VCO_SHIFT) |	\
RNG_CTL_ES1)
#define CONTROL_DEFAULT_1		\
(CONTROL_DEFAULT_BASE |		\
(2 << RNG_CTL_VCO_SHIFT) |	\
RNG_CTL_ES2)
#define CONTROL_DEFAULT_2		\
(CONTROL_DEFAULT_BASE |		\
(3 << RNG_CTL_VCO_SHIFT) |	\
RNG_CTL_ES3)
#define CONTROL_DEFAULT_3		\
(CONTROL_DEFAULT_BASE |		\
RNG_CTL_ES1 | RNG_CTL_ES2 | RNG_CTL_ES3)
static void n2rng_control_swstate_init(struct n2rng *np)
static int n2rng_grab_diag_control(struct n2rng *np)
static int n2rng_init_control(struct n2rng *np)
static int n2rng_data_read(struct hwrng *rng, u32 *data)
static int n2rng_guest_check(struct n2rng *np)
static int n2rng_entropy_diag_read(struct n2rng *np, unsigned long unit,
u64 *pre_control, u64 pre_state,
u64 *buffer, unsigned long buf_len,
u64 *post_control, u64 post_state)
static u64 advance_polynomial(u64 poly, u64 val, int count)
static int n2rng_test_buffer_find(struct n2rng *np, u64 val)
static void n2rng_dump_test_buffer(struct n2rng *np)
static int n2rng_check_selftest_buffer(struct n2rng *np, unsigned long unit)
static int n2rng_control_selftest(struct n2rng *np, unsigned long unit)
static int n2rng_control_check(struct n2rng *np)
static int n2rng_control_configure_units(struct n2rng *np)
static void n2rng_work(struct work_struct *work)
static void __devinit n2rng_driver_version(void)
static const struct of_device_id n2rng_match[];
static int __devinit n2rng_probe(struct platform_device *op)
static int __devexit n2rng_remove(struct platform_device *op)
static const struct of_device_id n2rng_match[] = ;
MODULE_DEVICE_TABLE(of, n2rng_match);
static struct platform_driver n2rng_driver = ;
static int __init n2rng_init(void)
static void __exit n2rng_exit(void)
module_init(n2rng_init);
module_exit(n2rng_exit);
