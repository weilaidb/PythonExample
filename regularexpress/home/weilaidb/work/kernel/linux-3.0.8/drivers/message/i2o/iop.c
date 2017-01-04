#define OSM_NAME	"i2o"
#define OSM_VERSION	"1.325"
#define OSM_DESCRIPTION	"I2O subsystem"
LIST_HEAD(i2o_controllers);
static struct i2o_dma i2o_systab;
static int i2o_hrt_get(struct i2o_controller *c);
struct i2o_message *i2o_msg_get_wait(struct i2o_controller *c, int wait)
;
#if BITS_PER_LONG == 64
u32 i2o_cntxt_list_add(struct i2o_controller * c, void *ptr)
;
u32 i2o_cntxt_list_remove(struct i2o_controller * c, void *ptr)
;
void *i2o_cntxt_list_get(struct i2o_controller *c, u32 context)
;
u32 i2o_cntxt_list_get_ptr(struct i2o_controller * c, void *ptr)
;
struct i2o_controller *i2o_find_iop(int unit)
;
struct i2o_device *i2o_iop_find_device(struct i2o_controller *c, u16 tid)
;
static int i2o_iop_quiesce(struct i2o_controller *c)
;
static int i2o_iop_enable(struct i2o_controller *c)
;
static inline void i2o_iop_quiesce_all(void)
;
static inline void i2o_iop_enable_all(void)
;
static int i2o_iop_clear(struct i2o_controller *c)
static int i2o_iop_init_outbound_queue(struct i2o_controller *c)
static int i2o_iop_reset(struct i2o_controller *c)
;
static int i2o_iop_activate(struct i2o_controller *c)
;
static int i2o_iop_systab_set(struct i2o_controller *c)
static int i2o_iop_online(struct i2o_controller *c)
;
void i2o_iop_remove(struct i2o_controller *c)
static int i2o_systab_build(void)
;
static int i2o_parse_hrt(struct i2o_controller *c)
;
int i2o_status_get(struct i2o_controller *c)
static int i2o_hrt_get(struct i2o_controller *c)
static void i2o_iop_release(struct device *dev)
;
struct i2o_controller *i2o_iop_alloc(void)
;
int i2o_iop_add(struct i2o_controller *c)
;
int i2o_event_register(struct i2o_device *dev, struct i2o_driver *drv,
int tcntxt, u32 evt_mask)
;
static int __init i2o_iop_init(void)
static void __exit i2o_iop_exit(void)
;
module_init(i2o_iop_init);
module_exit(i2o_iop_exit);
MODULE_AUTHOR("Red Hat Software");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(OSM_DESCRIPTION);
MODULE_VERSION(OSM_VERSION);
#if BITS_PER_LONG == 64
EXPORT_SYMBOL(i2o_cntxt_list_add);
EXPORT_SYMBOL(i2o_cntxt_list_get);
EXPORT_SYMBOL(i2o_cntxt_list_remove);
EXPORT_SYMBOL(i2o_cntxt_list_get_ptr);
EXPORT_SYMBOL(i2o_msg_get_wait);
EXPORT_SYMBOL(i2o_find_iop);
EXPORT_SYMBOL(i2o_iop_find_device);
EXPORT_SYMBOL(i2o_event_register);
EXPORT_SYMBOL(i2o_status_get);
EXPORT_SYMBOL(i2o_controllers);
