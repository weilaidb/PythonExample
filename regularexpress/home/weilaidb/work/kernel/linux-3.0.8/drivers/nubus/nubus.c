extern void via_nubus_init(void);
extern void oss_nubus_init(void);
#define FORMAT_BLOCK_SIZE 20
#define ROM_DIR_OFFSET 0x24
#define NUBUS_TEST_PATTERN 0x5A932BC7
#undef I_WANT_TO_PROBE_SLOT_ZERO
#undef TRY_TO_DODGE_WSOD
struct nubus_dev*   nubus_devices;
struct nubus_board* nubus_boards;
static inline int not_useful(void *p, int map)
static unsigned long nubus_get_rom(unsigned char **ptr, int len, int map)
static void nubus_rewind(unsigned char **ptr, int len, int map)
static void nubus_advance(unsigned char **ptr, int len, int map)
static void nubus_move(unsigned char **ptr, int len, int map)
static inline long nubus_expand32(long foo)
static inline void *nubus_rom_addr(int slot)
static unsigned char *nubus_dirptr(const struct nubus_dirent *nd)
void nubus_get_rsrc_mem(void *dest, const struct nubus_dirent* dirent,
int len)
EXPORT_SYMBOL(nubus_get_rsrc_mem);
void nubus_get_rsrc_str(void *dest, const struct nubus_dirent* dirent,
int len)
EXPORT_SYMBOL(nubus_get_rsrc_str);
int nubus_get_root_dir(const struct nubus_board* board,
struct nubus_dir* dir)
EXPORT_SYMBOL(nubus_get_root_dir);
int nubus_get_func_dir(const struct nubus_dev* dev,
struct nubus_dir* dir)
EXPORT_SYMBOL(nubus_get_func_dir);
int nubus_get_board_dir(const struct nubus_board* board,
struct nubus_dir* dir)
EXPORT_SYMBOL(nubus_get_board_dir);
int nubus_get_subdir(const struct nubus_dirent *ent,
struct nubus_dir *dir)
EXPORT_SYMBOL(nubus_get_subdir);
int nubus_readdir(struct nubus_dir *nd, struct nubus_dirent *ent)
EXPORT_SYMBOL(nubus_readdir);
int nubus_rewinddir(struct nubus_dir* dir)
EXPORT_SYMBOL(nubus_rewinddir);
struct nubus_dev*
nubus_find_device(unsigned short category,
unsigned short type,
unsigned short dr_hw,
unsigned short dr_sw,
const struct nubus_dev* from)
EXPORT_SYMBOL(nubus_find_device);
struct nubus_dev*
nubus_find_type(unsigned short category,
unsigned short type,
const struct nubus_dev* from)
EXPORT_SYMBOL(nubus_find_type);
struct nubus_dev*
nubus_find_slot(unsigned int slot,
const struct nubus_dev* from)
EXPORT_SYMBOL(nubus_find_slot);
int
nubus_find_rsrc(struct nubus_dir* dir, unsigned char rsrc_type,
struct nubus_dirent* ent)
EXPORT_SYMBOL(nubus_find_rsrc);
static int __init nubus_show_display_resource(struct nubus_dev* dev,
const struct nubus_dirent* ent)
static int __init nubus_show_network_resource(struct nubus_dev* dev,
const struct nubus_dirent* ent)
static int __init nubus_show_cpu_resource(struct nubus_dev* dev,
const struct nubus_dirent* ent)
static int __init nubus_show_private_resource(struct nubus_dev* dev,
const struct nubus_dirent* ent)
static struct nubus_dev* __init
nubus_get_functional_resource(struct nubus_board* board,
int slot,
const struct nubus_dirent* parent)
static int __init nubus_get_vidnames(struct nubus_board* board,
const struct nubus_dirent* parent)
static int __init nubus_get_icon(struct nubus_board* board,
const struct nubus_dirent* ent)
static int __init nubus_get_vendorinfo(struct nubus_board* board,
const struct nubus_dirent* parent)
static int __init nubus_get_board_resource(struct nubus_board* board, int slot,
const struct nubus_dirent* parent)
static void __init nubus_find_rom_dir(struct nubus_board* board)
static struct nubus_board* __init nubus_add_board(int slot, int bytelanes)
void __init nubus_probe_slot(int slot)
#if defined(CONFIG_PROC_FS)
static int sprint_nubus_board(struct nubus_board* board, char* ptr, int len)
static int nubus_read_proc(char *page, char **start, off_t off,
int count, int *eof, void *data)
void __init nubus_scan_bus(void)
static int __init nubus_init(void)
subsys_initcall(nubus_init);
