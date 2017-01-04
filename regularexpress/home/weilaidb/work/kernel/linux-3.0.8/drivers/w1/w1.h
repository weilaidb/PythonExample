#define __W1_H
struct w1_reg_num
;
#define W1_MAXNAMELEN		32
#define W1_SEARCH		0xF0
#define W1_ALARM_SEARCH		0xEC
#define W1_CONVERT_TEMP		0x44
#define W1_SKIP_ROM		0xCC
#define W1_READ_SCRATCHPAD	0xBE
#define W1_READ_ROM		0x33
#define W1_READ_PSUPPLY		0xB4
#define W1_MATCH_ROM		0x55
#define W1_RESUME_CMD		0xA5
#define W1_SLAVE_ACTIVE		0
struct w1_slave
;
typedef void (*w1_slave_found_callback)(struct w1_master *, u64);
struct w1_bus_master
;
struct w1_master
;
int w1_create_master_attributes(struct w1_master *);
void w1_destroy_master_attributes(struct w1_master *master);
void w1_search(struct w1_master *dev, u8 search_type, w1_slave_found_callback cb);
void w1_search_devices(struct w1_master *dev, u8 search_type, w1_slave_found_callback cb);
struct w1_slave *w1_search_slave(struct w1_reg_num *id);
void w1_slave_found(struct w1_master *dev, u64 rn);
void w1_search_process_cb(struct w1_master *dev, u8 search_type,
w1_slave_found_callback cb);
struct w1_master *w1_search_master_id(u32 id);
void w1_reconnect_slaves(struct w1_family *f, int attach);
void w1_slave_detach(struct w1_slave *sl);
u8 w1_triplet(struct w1_master *dev, int bdir);
void w1_write_8(struct w1_master *, u8);
u8 w1_read_8(struct w1_master *);
int w1_reset_bus(struct w1_master *);
u8 w1_calc_crc8(u8 *, int);
void w1_write_block(struct w1_master *, const u8 *, int);
void w1_touch_block(struct w1_master *, u8 *, int);
u8 w1_read_block(struct w1_master *, u8 *, int);
int w1_reset_select_slave(struct w1_slave *sl);
int w1_reset_resume_command(struct w1_master *);
void w1_next_pullup(struct w1_master *, int);
static inline struct w1_slave* dev_to_w1_slave(struct device *dev)
static inline struct w1_slave* kobj_to_w1_slave(struct kobject *kobj)
static inline struct w1_master* dev_to_w1_master(struct device *dev)
extern struct device_driver w1_master_driver;
extern struct device w1_master_device;
extern int w1_max_slave_count;
extern int w1_max_slave_ttl;
extern struct list_head w1_masters;
extern struct mutex w1_mlock;
extern int w1_process(void *);
