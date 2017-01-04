#undef DEBUG
#undef DEBUG_LOW
#define DBG(x...) do  while(0)
#define DBG(x...)
#define DBG_LOW(x...) do  while(0)
#define DBG_LOW(x...)
static int pmac_i2c_force_poll = 1;
struct pmac_i2c_bus
;
static LIST_HEAD(pmac_i2c_busses);
struct pmac_i2c_host_kw
;
typedef enum  reg_t;
#define KW_POLL_TIMEOUT		(2*HZ)
#define KW_I2C_MODE_100KHZ	0x00
#define KW_I2C_MODE_50KHZ	0x01
#define KW_I2C_MODE_25KHZ	0x02
#define KW_I2C_MODE_DUMB	0x00
#define KW_I2C_MODE_STANDARD	0x04
#define KW_I2C_MODE_STANDARDSUB	0x08
#define KW_I2C_MODE_COMBINED	0x0C
#define KW_I2C_MODE_MODE_MASK	0x0C
#define KW_I2C_MODE_CHAN_MASK	0xF0
#define KW_I2C_CTL_AAK		0x01
#define KW_I2C_CTL_XADDR	0x02
#define KW_I2C_CTL_STOP		0x04
#define KW_I2C_CTL_START	0x08
#define KW_I2C_STAT_BUSY	0x01
#define KW_I2C_STAT_LAST_AAK	0x02
#define KW_I2C_STAT_LAST_RW	0x04
#define KW_I2C_STAT_SDA		0x08
#define KW_I2C_STAT_SCL		0x10
#define KW_I2C_IRQ_DATA		0x01
#define KW_I2C_IRQ_ADDR		0x02
#define KW_I2C_IRQ_STOP		0x04
#define KW_I2C_IRQ_START	0x08
#define KW_I2C_IRQ_MASK		0x0F
enum ;
#define WRONG_STATE(name) do  while(0)
static const char *__kw_state_names[] = ;
static inline u8 __kw_read_reg(struct pmac_i2c_host_kw *host, reg_t reg)
static inline void __kw_write_reg(struct pmac_i2c_host_kw *host,
reg_t reg, u8 val)
#define kw_write_reg(reg, val)	__kw_write_reg(host, reg, val)
#define kw_read_reg(reg)	__kw_read_reg(host, reg)
static u8 kw_i2c_wait_interrupt(struct pmac_i2c_host_kw *host)
static void kw_i2c_do_stop(struct pmac_i2c_host_kw *host, int result)
static void kw_i2c_handle_interrupt(struct pmac_i2c_host_kw *host, u8 isr)
static irqreturn_t kw_i2c_irq(int irq, void *dev_id)
static void kw_i2c_timeout(unsigned long data)
static int kw_i2c_open(struct pmac_i2c_bus *bus)
static void kw_i2c_close(struct pmac_i2c_bus *bus)
static int kw_i2c_xfer(struct pmac_i2c_bus *bus, u8 addrdir, int subsize,
u32 subaddr, u8 *data, int len)
static struct pmac_i2c_host_kw *__init kw_i2c_host_init(struct device_node *np)
static void __init kw_i2c_add(struct pmac_i2c_host_kw *host,
struct device_node *controller,
struct device_node *busnode,
int channel)
static void __init kw_i2c_probe(void)
struct pmu_i2c_hdr ;
static void pmu_i2c_complete(struct adb_request *req)
static int pmu_i2c_xfer(struct pmac_i2c_bus *bus, u8 addrdir, int subsize,
u32 subaddr, u8 *data, int len)
static void __init pmu_i2c_probe(void)
static void smu_i2c_complete(struct smu_i2c_cmd *cmd, void *misc)
static int smu_i2c_xfer(struct pmac_i2c_bus *bus, u8 addrdir, int subsize,
u32 subaddr, u8 *data, int len)
static void __init smu_i2c_probe(void)
struct pmac_i2c_bus *pmac_i2c_find_bus(struct device_node *node)
EXPORT_SYMBOL_GPL(pmac_i2c_find_bus);
u8 pmac_i2c_get_dev_addr(struct device_node *device)
EXPORT_SYMBOL_GPL(pmac_i2c_get_dev_addr);
struct device_node *pmac_i2c_get_controller(struct pmac_i2c_bus *bus)
EXPORT_SYMBOL_GPL(pmac_i2c_get_controller);
struct device_node *pmac_i2c_get_bus_node(struct pmac_i2c_bus *bus)
EXPORT_SYMBOL_GPL(pmac_i2c_get_bus_node);
int pmac_i2c_get_type(struct pmac_i2c_bus *bus)
EXPORT_SYMBOL_GPL(pmac_i2c_get_type);
int pmac_i2c_get_flags(struct pmac_i2c_bus *bus)
EXPORT_SYMBOL_GPL(pmac_i2c_get_flags);
int pmac_i2c_get_channel(struct pmac_i2c_bus *bus)
EXPORT_SYMBOL_GPL(pmac_i2c_get_channel);
struct i2c_adapter *pmac_i2c_get_adapter(struct pmac_i2c_bus *bus)
EXPORT_SYMBOL_GPL(pmac_i2c_get_adapter);
struct pmac_i2c_bus *pmac_i2c_adapter_to_bus(struct i2c_adapter *adapter)
EXPORT_SYMBOL_GPL(pmac_i2c_adapter_to_bus);
int pmac_i2c_match_adapter(struct device_node *dev, struct i2c_adapter *adapter)
EXPORT_SYMBOL_GPL(pmac_i2c_match_adapter);
int pmac_low_i2c_lock(struct device_node *np)
EXPORT_SYMBOL_GPL(pmac_low_i2c_lock);
int pmac_low_i2c_unlock(struct device_node *np)
EXPORT_SYMBOL_GPL(pmac_low_i2c_unlock);
int pmac_i2c_open(struct pmac_i2c_bus *bus, int polled)
EXPORT_SYMBOL_GPL(pmac_i2c_open);
void pmac_i2c_close(struct pmac_i2c_bus *bus)
EXPORT_SYMBOL_GPL(pmac_i2c_close);
int pmac_i2c_setmode(struct pmac_i2c_bus *bus, int mode)
EXPORT_SYMBOL_GPL(pmac_i2c_setmode);
int pmac_i2c_xfer(struct pmac_i2c_bus *bus, u8 addrdir, int subsize,
u32 subaddr, u8 *data, int len)
EXPORT_SYMBOL_GPL(pmac_i2c_xfer);
enum ;
static void pmac_i2c_devscan(void (*callback)(struct device_node *dev,
int quirks))
#define MAX_I2C_DATA	64
struct pmac_i2c_pf_inst
;
static void* pmac_i2c_do_begin(struct pmf_function *func, struct pmf_args *args)
static void pmac_i2c_do_end(struct pmf_function *func, void *instdata)
static int pmac_i2c_do_read(PMF_STD_ARGS, u32 len)
static int pmac_i2c_do_write(PMF_STD_ARGS, u32 len, const u8 *data)
static void pmac_i2c_do_apply_rmw(struct pmac_i2c_pf_inst *inst,
u32 len, const u8 *mask, const u8 *val)
static int pmac_i2c_do_rmw(PMF_STD_ARGS, u32 masklen, u32 valuelen,
u32 totallen, const u8 *maskdata,
const u8 *valuedata)
static int pmac_i2c_do_read_sub(PMF_STD_ARGS, u8 subaddr, u32 len)
static int pmac_i2c_do_write_sub(PMF_STD_ARGS, u8 subaddr, u32 len,
const u8 *data)
static int pmac_i2c_do_set_mode(PMF_STD_ARGS, int mode)
static int pmac_i2c_do_rmw_sub(PMF_STD_ARGS, u8 subaddr, u32 masklen,
u32 valuelen, u32 totallen, const u8 *maskdata,
const u8 *valuedata)
static int pmac_i2c_do_mask_and_comp(PMF_STD_ARGS, u32 len,
const u8 *maskdata,
const u8 *valuedata)
static int pmac_i2c_do_delay(PMF_STD_ARGS, u32 duration)
static struct pmf_handlers pmac_i2c_pfunc_handlers = ;
static void __init pmac_i2c_dev_create(struct device_node *np, int quirks)
static void __init pmac_i2c_dev_init(struct device_node *np, int quirks)
static void pmac_i2c_dev_suspend(struct device_node *np, int quirks)
static void pmac_i2c_dev_resume(struct device_node *np, int quirks)
void pmac_pfunc_i2c_suspend(void)
void pmac_pfunc_i2c_resume(void)
int __init pmac_i2c_init(void)
machine_arch_initcall(powermac, pmac_i2c_init);
static int __init pmac_i2c_create_platform_devices(void)
machine_subsys_initcall(powermac, pmac_i2c_create_platform_devices);
