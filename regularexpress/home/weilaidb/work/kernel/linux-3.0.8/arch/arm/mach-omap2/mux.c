#define OMAP_MUX_BASE_OFFSET		0x30
#define OMAP_MUX_BASE_SZ		0x5ca
struct omap_mux_entry ;
static LIST_HEAD(mux_partitions);
static DEFINE_MUTEX(muxmode_mutex);
struct omap_mux_partition *omap_mux_get(const char *name)
u16 omap_mux_read(struct omap_mux_partition *partition, u16 reg)
void omap_mux_write(struct omap_mux_partition *partition, u16 val,
u16 reg)
void omap_mux_write_array(struct omap_mux_partition *partition,
struct omap_board_mux *board_mux)
static char *omap_mux_options;
static int __init _omap_mux_init_gpio(struct omap_mux_partition *partition,
int gpio, int val)
int __init omap_mux_init_gpio(int gpio, int val)
static int __init _omap_mux_get_by_name(struct omap_mux_partition *partition,
const char *muxname,
struct omap_mux **found_mux)
static int __init
omap_mux_get_by_name(const char *muxname,
struct omap_mux_partition **found_partition,
struct omap_mux **found_mux)
int __init omap_mux_init_signal(const char *muxname, int val)
struct omap_hwmod_mux_info * __init
omap_hwmod_mux_init(struct omap_device_pad *bpads, int nr_pads)
void omap_hwmod_mux(struct omap_hwmod_mux_info *hmux, u8 state)
#define OMAP_MUX_MAX_NR_FLAGS	10
#define OMAP_MUX_TEST_FLAG(val, mask)				\
if (((val) & (mask)) == (mask))
static inline void omap_mux_decode(struct seq_file *s, u16 val)
#define OMAP_MUX_DEFNAME_LEN	32
static int omap_mux_dbg_board_show(struct seq_file *s, void *unused)
static int omap_mux_dbg_board_open(struct inode *inode, struct file *file)
static const struct file_operations omap_mux_dbg_board_fops = ;
static struct omap_mux_partition *omap_mux_get_partition(struct omap_mux *mux)
static int omap_mux_dbg_signal_show(struct seq_file *s, void *unused)
#define OMAP_MUX_MAX_ARG_CHAR  7
static ssize_t omap_mux_dbg_signal_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static int omap_mux_dbg_signal_open(struct inode *inode, struct file *file)
static const struct file_operations omap_mux_dbg_signal_fops = ;
static struct dentry *mux_dbg_dir;
static void __init omap_mux_dbg_create_entry(
struct omap_mux_partition *partition,
struct dentry *mux_dbg_dir)
static void __init omap_mux_dbg_init(void)
static inline void omap_mux_dbg_init(void)
static void __init omap_mux_free_names(struct omap_mux *m)
static int __init omap_mux_late_init(void)
late_initcall(omap_mux_late_init);
static void __init omap_mux_package_fixup(struct omap_mux *p,
struct omap_mux *superset)
static void __init omap_mux_package_init_balls(struct omap_ball *b,
struct omap_mux *superset)
static inline void omap_mux_package_init_balls(struct omap_ball *b,
struct omap_mux *superset)
static int __init omap_mux_setup(char *options)
__setup("omap_mux=", omap_mux_setup);
static void __init omap_mux_set_cmdline_signals(void)
static int __init omap_mux_copy_names(struct omap_mux *src,
struct omap_mux *dst)
static struct omap_mux *omap_mux_get_by_gpio(
struct omap_mux_partition *partition,
int gpio)
u16 omap_mux_get_gpio(int gpio)
void omap_mux_set_gpio(u16 val, int gpio)
static struct omap_mux * __init omap_mux_list_add(
struct omap_mux_partition *partition,
struct omap_mux *src)
static void __init omap_mux_init_list(struct omap_mux_partition *partition,
struct omap_mux *superset)
static void omap_mux_init_package(struct omap_mux *superset,
struct omap_mux *package_subset,
struct omap_ball *package_balls)
static void omap_mux_init_signals(struct omap_mux_partition *partition,
struct omap_board_mux *board_mux)
static void omap_mux_init_package(struct omap_mux *superset,
struct omap_mux *package_subset,
struct omap_ball *package_balls)
static void omap_mux_init_signals(struct omap_mux_partition *partition,
struct omap_board_mux *board_mux)
static u32 mux_partitions_cnt;
int __init omap_mux_init(const char *name, u32 flags,
u32 mux_pbase, u32 mux_size,
struct omap_mux *superset,
struct omap_mux *package_subset,
struct omap_board_mux *board_mux,
struct omap_ball *package_balls)
