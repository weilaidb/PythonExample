#define LINUX_NUBUS_H
enum nubus_category ;
enum nubus_type_network ;
enum nubus_type_display ;
enum nubus_type_cpu ;
enum nubus_drsw ;
enum nubus_drhw ;
enum nubus_res_id ;
enum nubus_board_res_id ;
enum nubus_vendor_res_id ;
enum nubus_net_res_id ;
enum nubus_cpu_res_id ;
enum nubus_display_res_id ;
struct nubus_dir
;
struct nubus_dirent
;
struct nubus_board ;
struct nubus_dev ;
extern struct nubus_dev* nubus_devices;
extern struct nubus_board* nubus_boards;
void nubus_scan_bus(void);
extern void nubus_proc_init(void);
int get_nubus_list(char *buf);
int nubus_proc_attach_device(struct nubus_dev *dev);
int nubus_proc_detach_device(struct nubus_dev *dev);
struct nubus_dev* nubus_find_device(unsigned short category,
unsigned short type,
unsigned short dr_hw,
unsigned short dr_sw,
const struct nubus_dev* from);
struct nubus_dev* nubus_find_type(unsigned short category,
unsigned short type,
const struct nubus_dev* from);
struct nubus_dev* nubus_find_slot(unsigned int slot,
const struct nubus_dev* from);
int nubus_get_root_dir(const struct nubus_board* board,
struct nubus_dir* dir);
int nubus_get_board_dir(const struct nubus_board* board,
struct nubus_dir* dir);
int nubus_get_func_dir(const struct nubus_dev* dev,
struct nubus_dir* dir);
int nubus_readdir(struct nubus_dir* dir,
struct nubus_dirent* ent);
int nubus_find_rsrc(struct nubus_dir* dir,
unsigned char rsrc_type,
struct nubus_dirent* ent);
int nubus_rewinddir(struct nubus_dir* dir);
int nubus_get_subdir(const struct nubus_dirent* ent,
struct nubus_dir* dir);
void nubus_get_rsrc_mem(void* dest,
const struct nubus_dirent *dirent,
int len);
void nubus_get_rsrc_str(void* dest,
const struct nubus_dirent *dirent,
int maxlen);
static inline void *nubus_slot_addr(int slot)
