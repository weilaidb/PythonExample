extern struct i2o_driver i2o_exec_driver;
extern int i2o_exec_lct_get(struct i2o_controller *);
extern int __init i2o_exec_init(void);
extern void i2o_exec_exit(void);
extern struct bus_type i2o_bus_type;
extern int i2o_driver_dispatch(struct i2o_controller *, u32);
extern int __init i2o_driver_init(void);
extern void i2o_driver_exit(void);
extern int __init i2o_pci_init(void);
extern void __exit i2o_pci_exit(void);
extern struct device_attribute i2o_device_attrs[];
extern void i2o_device_remove(struct i2o_device *);
extern int i2o_device_parse_lct(struct i2o_controller *);
int i2o_parm_issue(struct i2o_device *i2o_dev, int cmd, void *oplist,
int oplen, void *reslist, int reslen);
extern struct i2o_controller *i2o_iop_alloc(void);
static inline void i2o_iop_free(struct i2o_controller *c)
extern int i2o_iop_add(struct i2o_controller *);
extern void i2o_iop_remove(struct i2o_controller *);
#define I2O_IRQ_STATUS	0x30
#define I2O_IRQ_MASK	0x34
#define I2O_IN_PORT	0x40
#define I2O_OUT_PORT	0x44
#define I2O_MOTOROLA_PORT_OFFSET	0x10400
#define I2O_IRQ_OUTBOUND_POST	0x00000008
