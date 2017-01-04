#define _LINUX_I2C_H
extern struct bus_type i2c_bus_type;
extern struct device_type i2c_adapter_type;
struct i2c_msg;
struct i2c_algorithm;
struct i2c_adapter;
struct i2c_client;
struct i2c_driver;
union i2c_smbus_data;
struct i2c_board_info;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
extern int i2c_master_send(const struct i2c_client *client, const char *buf,
int count);
extern int i2c_master_recv(const struct i2c_client *client, char *buf,
int count);
extern int i2c_transfer(struct i2c_adapter *adap, struct i2c_msg *msgs,
int num);
extern s32 i2c_smbus_xfer(struct i2c_adapter *adapter, u16 addr,
unsigned short flags, char read_write, u8 command,
int size, union i2c_smbus_data *data);
extern s32 i2c_smbus_read_byte(const struct i2c_client *client);
extern s32 i2c_smbus_write_byte(const struct i2c_client *client, u8 value);
extern s32 i2c_smbus_read_byte_data(const struct i2c_client *client,
u8 command);
extern s32 i2c_smbus_write_byte_data(const struct i2c_client *client,
u8 command, u8 value);
extern s32 i2c_smbus_read_word_data(const struct i2c_client *client,
u8 command);
extern s32 i2c_smbus_write_word_data(const struct i2c_client *client,
u8 command, u16 value);
extern s32 i2c_smbus_read_block_data(const struct i2c_client *client,
u8 command, u8 *values);
extern s32 i2c_smbus_write_block_data(const struct i2c_client *client,
u8 command, u8 length, const u8 *values);
extern s32 i2c_smbus_read_i2c_block_data(const struct i2c_client *client,
u8 command, u8 length, u8 *values);
extern s32 i2c_smbus_write_i2c_block_data(const struct i2c_client *client,
u8 command, u8 length,
const u8 *values);
struct i2c_driver ;
#define to_i2c_driver(d) container_of(d, struct i2c_driver, driver)
struct i2c_client ;
#define to_i2c_client(d) container_of(d, struct i2c_client, dev)
extern struct i2c_client *i2c_verify_client(struct device *dev);
static inline struct i2c_client *kobj_to_i2c_client(struct kobject *kobj)
static inline void *i2c_get_clientdata(const struct i2c_client *dev)
static inline void i2c_set_clientdata(struct i2c_client *dev, void *data)
struct i2c_board_info ;
#define I2C_BOARD_INFO(dev_type, dev_addr) \
.type = dev_type, .addr = (dev_addr)
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
extern struct i2c_client *
i2c_new_device(struct i2c_adapter *adap, struct i2c_board_info const *info);
extern struct i2c_client *
i2c_new_probed_device(struct i2c_adapter *adap,
struct i2c_board_info *info,
unsigned short const *addr_list,
int (*probe)(struct i2c_adapter *, unsigned short addr));
extern int i2c_probe_func_quick_read(struct i2c_adapter *, unsigned short addr);
extern struct i2c_client *
i2c_new_dummy(struct i2c_adapter *adap, u16 address);
extern void i2c_unregister_device(struct i2c_client *);
extern int
i2c_register_board_info(int busnum, struct i2c_board_info const *info,
unsigned n);
static inline int
i2c_register_board_info(int busnum, struct i2c_board_info const *info,
unsigned n)
struct i2c_algorithm ;
struct i2c_adapter ;
#define to_i2c_adapter(d) container_of(d, struct i2c_adapter, dev)
static inline void *i2c_get_adapdata(const struct i2c_adapter *dev)
static inline void i2c_set_adapdata(struct i2c_adapter *dev, void *data)
static inline struct i2c_adapter *
i2c_parent_is_i2c_adapter(const struct i2c_adapter *adapter)
int i2c_for_each_dev(void *data, int (*fn)(struct device *, void *));
void i2c_lock_adapter(struct i2c_adapter *);
void i2c_unlock_adapter(struct i2c_adapter *);
#define I2C_CLIENT_PEC	0x04
#define I2C_CLIENT_TEN	0x10
#define I2C_CLIENT_WAKE	0x80
#define I2C_CLASS_HWMON		(1<<0)
#define I2C_CLASS_DDC		(1<<3)
#define I2C_CLASS_SPD		(1<<7)
#define I2C_CLIENT_END		0xfffeU
#define ANY_I2C_BUS		0xffff
#define I2C_ADDRS(addr, addrs...) \
((const unsigned short []))
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
extern int i2c_add_adapter(struct i2c_adapter *);
extern int i2c_del_adapter(struct i2c_adapter *);
extern int i2c_add_numbered_adapter(struct i2c_adapter *);
extern int i2c_register_driver(struct module *, struct i2c_driver *);
extern void i2c_del_driver(struct i2c_driver *);
static inline int i2c_add_driver(struct i2c_driver *driver)
extern struct i2c_client *i2c_use_client(struct i2c_client *client);
extern void i2c_release_client(struct i2c_client *client);
extern void i2c_clients_command(struct i2c_adapter *adap,
unsigned int cmd, void *arg);
extern struct i2c_adapter *i2c_get_adapter(int nr);
extern void i2c_put_adapter(struct i2c_adapter *adap);
static inline u32 i2c_get_functionality(struct i2c_adapter *adap)
static inline int i2c_check_functionality(struct i2c_adapter *adap, u32 func)
static inline int i2c_adapter_id(struct i2c_adapter *adap)
struct i2c_msg ;
#define I2C_FUNC_I2C			0x00000001
#define I2C_FUNC_10BIT_ADDR		0x00000002
#define I2C_FUNC_PROTOCOL_MANGLING	0x00000004
#define I2C_FUNC_SMBUS_PEC		0x00000008
#define I2C_FUNC_SMBUS_BLOCK_PROC_CALL	0x00008000
#define I2C_FUNC_SMBUS_QUICK		0x00010000
#define I2C_FUNC_SMBUS_READ_BYTE	0x00020000
#define I2C_FUNC_SMBUS_WRITE_BYTE	0x00040000
#define I2C_FUNC_SMBUS_READ_BYTE_DATA	0x00080000
#define I2C_FUNC_SMBUS_WRITE_BYTE_DATA	0x00100000
#define I2C_FUNC_SMBUS_READ_WORD_DATA	0x00200000
#define I2C_FUNC_SMBUS_WRITE_WORD_DATA	0x00400000
#define I2C_FUNC_SMBUS_PROC_CALL	0x00800000
#define I2C_FUNC_SMBUS_READ_BLOCK_DATA	0x01000000
#define I2C_FUNC_SMBUS_WRITE_BLOCK_DATA 0x02000000
#define I2C_FUNC_SMBUS_READ_I2C_BLOCK	0x04000000
#define I2C_FUNC_SMBUS_WRITE_I2C_BLOCK	0x08000000
#define I2C_FUNC_SMBUS_BYTE		(I2C_FUNC_SMBUS_READ_BYTE | \
I2C_FUNC_SMBUS_WRITE_BYTE)
#define I2C_FUNC_SMBUS_BYTE_DATA	(I2C_FUNC_SMBUS_READ_BYTE_DATA | \
I2C_FUNC_SMBUS_WRITE_BYTE_DATA)
#define I2C_FUNC_SMBUS_WORD_DATA	(I2C_FUNC_SMBUS_READ_WORD_DATA | \
I2C_FUNC_SMBUS_WRITE_WORD_DATA)
#define I2C_FUNC_SMBUS_BLOCK_DATA	(I2C_FUNC_SMBUS_READ_BLOCK_DATA | \
I2C_FUNC_SMBUS_WRITE_BLOCK_DATA)
#define I2C_FUNC_SMBUS_I2C_BLOCK	(I2C_FUNC_SMBUS_READ_I2C_BLOCK | \
I2C_FUNC_SMBUS_WRITE_I2C_BLOCK)
#define I2C_FUNC_SMBUS_EMUL		(I2C_FUNC_SMBUS_QUICK | \
I2C_FUNC_SMBUS_BYTE | \
I2C_FUNC_SMBUS_BYTE_DATA | \
I2C_FUNC_SMBUS_WORD_DATA | \
I2C_FUNC_SMBUS_PROC_CALL | \
I2C_FUNC_SMBUS_WRITE_BLOCK_DATA | \
I2C_FUNC_SMBUS_I2C_BLOCK | \
I2C_FUNC_SMBUS_PEC)
#define I2C_SMBUS_BLOCK_MAX	32
union i2c_smbus_data ;
#define I2C_SMBUS_READ	1
#define I2C_SMBUS_WRITE	0
#define I2C_SMBUS_QUICK		    0
#define I2C_SMBUS_BYTE		    1
#define I2C_SMBUS_BYTE_DATA	    2
#define I2C_SMBUS_WORD_DATA	    3
#define I2C_SMBUS_PROC_CALL	    4
#define I2C_SMBUS_BLOCK_DATA	    5
#define I2C_SMBUS_I2C_BLOCK_BROKEN  6
#define I2C_SMBUS_BLOCK_PROC_CALL   7
#define I2C_SMBUS_I2C_BLOCK_DATA    8
