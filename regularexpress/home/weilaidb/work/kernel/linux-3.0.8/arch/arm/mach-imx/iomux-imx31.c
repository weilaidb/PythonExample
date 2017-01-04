#define IOMUX_BASE	MX31_IO_ADDRESS(MX31_IOMUXC_BASE_ADDR)
#define IOMUXINT_OBS1	(IOMUX_BASE + 0x000)
#define IOMUXINT_OBS2	(IOMUX_BASE + 0x004)
#define IOMUXGPR	(IOMUX_BASE + 0x008)
#define IOMUXSW_MUX_CTL	(IOMUX_BASE + 0x00C)
#define IOMUXSW_PAD_CTL	(IOMUX_BASE + 0x154)
static DEFINE_SPINLOCK(gpio_mux_lock);
#define IOMUX_REG_MASK (IOMUX_PADNUM_MASK & ~0x3)
unsigned long mxc_pin_alloc_map[NB_PORTS * 32 / BITS_PER_LONG];
int mxc_iomux_mode(unsigned int pin_mode)
EXPORT_SYMBOL(mxc_iomux_mode);
void mxc_iomux_set_pad(enum iomux_pins pin, u32 config)
EXPORT_SYMBOL(mxc_iomux_set_pad);
int mxc_iomux_alloc_pin(unsigned int pin, const char *label)
EXPORT_SYMBOL(mxc_iomux_alloc_pin);
int mxc_iomux_setup_multiple_pins(const unsigned int *pin_list, unsigned count,
const char *label)
EXPORT_SYMBOL(mxc_iomux_setup_multiple_pins);
void mxc_iomux_release_pin(unsigned int pin)
EXPORT_SYMBOL(mxc_iomux_release_pin);
void mxc_iomux_release_multiple_pins(const unsigned int *pin_list, int count)
EXPORT_SYMBOL(mxc_iomux_release_multiple_pins);
void mxc_iomux_set_gpr(enum iomux_gp_func gp, bool en)
EXPORT_SYMBOL(mxc_iomux_set_gpr);
