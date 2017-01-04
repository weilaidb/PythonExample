enum ps3_vendor_id ;
enum ps3_lpar_id ;
#define dump_field(_a, _b) _dump_field(_a, _b, __func__, __LINE__)
static void _dump_field(const char *hdr, u64 n, const char *func, int line)
#define dump_node_name(_a, _b, _c, _d, _e) \
_dump_node_name(_a, _b, _c, _d, _e, __func__, __LINE__)
static void _dump_node_name(unsigned int lpar_id, u64 n1, u64 n2, u64 n3,
u64 n4, const char *func, int line)
#define dump_node(_a, _b, _c, _d, _e, _f, _g) \
_dump_node(_a, _b, _c, _d, _e, _f, _g, __func__, __LINE__)
static void _dump_node(unsigned int lpar_id, u64 n1, u64 n2, u64 n3, u64 n4,
u64 v1, u64 v2, const char *func, int line)
static u64 make_first_field(const char *text, u64 index)
static u64 make_field(const char *text, u64 index)
static int read_node(unsigned int lpar_id, u64 n1, u64 n2, u64 n3, u64 n4,
u64 *_v1, u64 *_v2)
int ps3_repository_read_bus_str(unsigned int bus_index, const char *bus_str,
u64 *value)
int ps3_repository_read_bus_id(unsigned int bus_index, u64 *bus_id)
int ps3_repository_read_bus_type(unsigned int bus_index,
enum ps3_bus_type *bus_type)
int ps3_repository_read_bus_num_dev(unsigned int bus_index,
unsigned int *num_dev)
int ps3_repository_read_dev_str(unsigned int bus_index,
unsigned int dev_index, const char *dev_str, u64 *value)
int ps3_repository_read_dev_id(unsigned int bus_index, unsigned int dev_index,
u64 *dev_id)
int ps3_repository_read_dev_type(unsigned int bus_index,
unsigned int dev_index, enum ps3_dev_type *dev_type)
int ps3_repository_read_dev_intr(unsigned int bus_index,
unsigned int dev_index, unsigned int intr_index,
enum ps3_interrupt_type *intr_type, unsigned int *interrupt_id)
int ps3_repository_read_dev_reg_type(unsigned int bus_index,
unsigned int dev_index, unsigned int reg_index,
enum ps3_reg_type *reg_type)
int ps3_repository_read_dev_reg_addr(unsigned int bus_index,
unsigned int dev_index, unsigned int reg_index, u64 *bus_addr, u64 *len)
int ps3_repository_read_dev_reg(unsigned int bus_index,
unsigned int dev_index, unsigned int reg_index,
enum ps3_reg_type *reg_type, u64 *bus_addr, u64 *len)
int ps3_repository_find_device(struct ps3_repository_device *repo)
int ps3_repository_find_device_by_id(struct ps3_repository_device *repo,
u64 bus_id, u64 dev_id)
int __devinit ps3_repository_find_devices(enum ps3_bus_type bus_type,
int (*callback)(const struct ps3_repository_device *repo))
int ps3_repository_find_bus(enum ps3_bus_type bus_type, unsigned int from,
unsigned int *bus_index)
int ps3_repository_find_interrupt(const struct ps3_repository_device *repo,
enum ps3_interrupt_type intr_type, unsigned int *interrupt_id)
int ps3_repository_find_reg(const struct ps3_repository_device *repo,
enum ps3_reg_type reg_type, u64 *bus_addr, u64 *len)
int ps3_repository_read_stor_dev_port(unsigned int bus_index,
unsigned int dev_index, u64 *port)
int ps3_repository_read_stor_dev_blk_size(unsigned int bus_index,
unsigned int dev_index, u64 *blk_size)
int ps3_repository_read_stor_dev_num_blocks(unsigned int bus_index,
unsigned int dev_index, u64 *num_blocks)
int ps3_repository_read_stor_dev_num_regions(unsigned int bus_index,
unsigned int dev_index, unsigned int *num_regions)
int ps3_repository_read_stor_dev_region_id(unsigned int bus_index,
unsigned int dev_index, unsigned int region_index,
unsigned int *region_id)
int ps3_repository_read_stor_dev_region_size(unsigned int bus_index,
unsigned int dev_index,	unsigned int region_index, u64 *region_size)
int ps3_repository_read_stor_dev_region_start(unsigned int bus_index,
unsigned int dev_index, unsigned int region_index, u64 *region_start)
int ps3_repository_read_stor_dev_info(unsigned int bus_index,
unsigned int dev_index, u64 *port, u64 *blk_size,
u64 *num_blocks, unsigned int *num_regions)
int ps3_repository_read_stor_dev_region(unsigned int bus_index,
unsigned int dev_index, unsigned int region_index,
unsigned int *region_id, u64 *region_start, u64 *region_size)
int ps3_repository_read_num_pu(u64 *num_pu)
int ps3_repository_read_pu_id(unsigned int pu_index, u64 *pu_id)
int ps3_repository_read_rm_size(unsigned int ppe_id, u64 *rm_size)
int ps3_repository_read_region_total(u64 *region_total)
int ps3_repository_read_mm_info(u64 *rm_base, u64 *rm_size, u64 *region_total)
int ps3_repository_read_num_spu_reserved(unsigned int *num_spu_reserved)
int ps3_repository_read_num_spu_resource_id(unsigned int *num_resource_id)
int ps3_repository_read_spu_resource_id(unsigned int res_index,
enum ps3_spu_resource_type *resource_type, unsigned int *resource_id)
static int ps3_repository_read_boot_dat_address(u64 *address)
int ps3_repository_read_boot_dat_size(unsigned int *size)
int ps3_repository_read_vuart_av_port(unsigned int *port)
int ps3_repository_read_vuart_sysmgr_port(unsigned int *port)
int ps3_repository_read_boot_dat_info(u64 *lpar_addr, unsigned int *size)
int ps3_repository_read_num_be(unsigned int *num_be)
int ps3_repository_read_be_node_id(unsigned int be_index, u64 *node_id)
int ps3_repository_read_be_id(u64 node_id, u64 *be_id)
int ps3_repository_read_tb_freq(u64 node_id, u64 *tb_freq)
int ps3_repository_read_be_tb_freq(unsigned int be_index, u64 *tb_freq)
int ps3_repository_read_lpm_privileges(unsigned int be_index, u64 *lpar,
u64 *rights)
#if defined(DEBUG)
int ps3_repository_dump_resource_info(const struct ps3_repository_device *repo)
static int dump_stor_dev_info(struct ps3_repository_device *repo)
static int dump_device_info(struct ps3_repository_device *repo,
unsigned int num_dev)
int ps3_repository_dump_bus_info(void)
