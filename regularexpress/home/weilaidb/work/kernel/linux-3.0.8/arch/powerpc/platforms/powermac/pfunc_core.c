#define LOG_PARSE(fmt...)
#define LOG_ERROR(fmt...)	printk(fmt)
#define LOG_BLOB(t,b,c)
#undef DEBUG
#define DBG(fmt...)		printk(fmt)
#define DBG(fmt...)
#define PMF_CMD_LIST			0
#define PMF_CMD_WRITE_GPIO		1
#define PMF_CMD_READ_GPIO		2
#define PMF_CMD_WRITE_REG32		3
#define PMF_CMD_READ_REG32		4
#define PMF_CMD_WRITE_REG16		5
#define PMF_CMD_READ_REG16		6
#define PMF_CMD_WRITE_REG8		7
#define PMF_CMD_READ_REG8		8
#define PMF_CMD_DELAY			9
#define PMF_CMD_WAIT_REG32		10
#define PMF_CMD_WAIT_REG16		11
#define PMF_CMD_WAIT_REG8		12
#define PMF_CMD_READ_I2C		13
#define PMF_CMD_WRITE_I2C		14
#define PMF_CMD_RMW_I2C			15
#define PMF_CMD_GEN_I2C			16
#define PMF_CMD_SHIFT_BYTES_RIGHT	17
#define PMF_CMD_SHIFT_BYTES_LEFT	18
#define PMF_CMD_READ_CFG		19
#define PMF_CMD_WRITE_CFG		20
#define PMF_CMD_RMW_CFG			21
#define PMF_CMD_READ_I2C_SUBADDR	22
#define PMF_CMD_WRITE_I2C_SUBADDR	23
#define PMF_CMD_SET_I2C_MODE		24
#define PMF_CMD_RMW_I2C_SUBADDR		25
#define PMF_CMD_READ_REG32_MASK_SHR_XOR	26
#define PMF_CMD_READ_REG16_MASK_SHR_XOR	27
#define PMF_CMD_READ_REG8_MASK_SHR_XOR	28
#define PMF_CMD_WRITE_REG32_SHL_MASK	29
#define PMF_CMD_WRITE_REG16_SHL_MASK	30
#define PMF_CMD_WRITE_REG8_SHL_MASK	31
#define PMF_CMD_MASK_AND_COMPARE	32
#define PMF_CMD_COUNT			33
struct pmf_cmd ;
static u32 pmf_next32(struct pmf_cmd *cmd)
static const void* pmf_next_blob(struct pmf_cmd *cmd, int count)
#define PMF_PARSE_CALL(name, cmd, handlers, p...) \
do  while(0) \
static int pmf_parser_write_gpio(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_read_gpio(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_write_reg32(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_read_reg32(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_write_reg16(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_read_reg16(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_write_reg8(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_read_reg8(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_delay(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_wait_reg32(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_wait_reg16(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_wait_reg8(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_read_i2c(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_write_i2c(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_rmw_i2c(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_read_cfg(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_write_cfg(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_rmw_cfg(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_read_i2c_sub(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_write_i2c_sub(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_set_i2c_mode(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_rmw_i2c_sub(struct pmf_cmd *cmd, struct pmf_handlers *h)
static int pmf_parser_read_reg32_msrx(struct pmf_cmd *cmd,
struct pmf_handlers *h)
static int pmf_parser_read_reg16_msrx(struct pmf_cmd *cmd,
struct pmf_handlers *h)
static int pmf_parser_read_reg8_msrx(struct pmf_cmd *cmd,
struct pmf_handlers *h)
static int pmf_parser_write_reg32_slm(struct pmf_cmd *cmd,
struct pmf_handlers *h)
static int pmf_parser_write_reg16_slm(struct pmf_cmd *cmd,
struct pmf_handlers *h)
static int pmf_parser_write_reg8_slm(struct pmf_cmd *cmd,
struct pmf_handlers *h)
static int pmf_parser_mask_and_compare(struct pmf_cmd *cmd,
struct pmf_handlers *h)
typedef int (*pmf_cmd_parser_t)(struct pmf_cmd *cmd, struct pmf_handlers *h);
static pmf_cmd_parser_t pmf_parsers[PMF_CMD_COUNT] =
;
struct pmf_device ;
static LIST_HEAD(pmf_devices);
static DEFINE_SPINLOCK(pmf_lock);
static DEFINE_MUTEX(pmf_irq_mutex);
static void pmf_release_device(struct kref *kref)
static inline void pmf_put_device(struct pmf_device *dev)
static inline struct pmf_device *pmf_get_device(struct pmf_device *dev)
static inline struct pmf_device *pmf_find_device(struct device_node *np)
static int pmf_parse_one(struct pmf_function *func,
struct pmf_handlers *handlers,
void *instdata, struct pmf_args *args)
static int pmf_add_function_prop(struct pmf_device *dev, void *driverdata,
const char *name, u32 *data,
unsigned int length)
static int pmf_add_functions(struct pmf_device *dev, void *driverdata)
int pmf_register_driver(struct device_node *np,
struct pmf_handlers *handlers,
void *driverdata)
EXPORT_SYMBOL_GPL(pmf_register_driver);
struct pmf_function *pmf_get_function(struct pmf_function *func)
EXPORT_SYMBOL_GPL(pmf_get_function);
static void pmf_release_function(struct kref *kref)
static inline void __pmf_put_function(struct pmf_function *func)
void pmf_put_function(struct pmf_function *func)
EXPORT_SYMBOL_GPL(pmf_put_function);
void pmf_unregister_driver(struct device_node *np)
EXPORT_SYMBOL_GPL(pmf_unregister_driver);
struct pmf_function *__pmf_find_function(struct device_node *target,
const char *name, u32 flags)
int pmf_register_irq_client(struct device_node *target,
const char *name,
struct pmf_irq_client *client)
EXPORT_SYMBOL_GPL(pmf_register_irq_client);
void pmf_unregister_irq_client(struct pmf_irq_client *client)
EXPORT_SYMBOL_GPL(pmf_unregister_irq_client);
void pmf_do_irq(struct pmf_function *func)
EXPORT_SYMBOL_GPL(pmf_do_irq);
int pmf_call_one(struct pmf_function *func, struct pmf_args *args)
EXPORT_SYMBOL_GPL(pmf_call_one);
int pmf_do_functions(struct device_node *np, const char *name,
u32 phandle, u32 fflags, struct pmf_args *args)
EXPORT_SYMBOL_GPL(pmf_do_functions);
struct pmf_function *pmf_find_function(struct device_node *target,
const char *name)
EXPORT_SYMBOL_GPL(pmf_find_function);
int pmf_call_function(struct device_node *target, const char *name,
struct pmf_args *args)
EXPORT_SYMBOL_GPL(pmf_call_function);
