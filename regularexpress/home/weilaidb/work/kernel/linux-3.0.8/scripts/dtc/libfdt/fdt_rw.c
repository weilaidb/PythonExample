static int _fdt_blocks_misordered(const void *fdt,
int mem_rsv_size, int struct_size)
static int _fdt_rw_check_header(void *fdt)
#define FDT_RW_CHECK_HEADER(fdt) \
static inline int _fdt_data_size(void *fdt)
static int _fdt_splice(void *fdt, void *splicepoint, int oldlen, int newlen)
static int _fdt_splice_mem_rsv(void *fdt, struct fdt_reserve_entry *p,
int oldn, int newn)
static int _fdt_splice_struct(void *fdt, void *p,
int oldlen, int newlen)
static int _fdt_splice_string(void *fdt, int newlen)
static int _fdt_find_add_string(void *fdt, const char *s)
int fdt_add_mem_rsv(void *fdt, uint64_t address, uint64_t size)
int fdt_del_mem_rsv(void *fdt, int n)
static int _fdt_resize_property(void *fdt, int nodeoffset, const char *name,
int len, struct fdt_property **prop)
static int _fdt_add_property(void *fdt, int nodeoffset, const char *name,
int len, struct fdt_property **prop)
int fdt_set_name(void *fdt, int nodeoffset, const char *name)
int fdt_setprop(void *fdt, int nodeoffset, const char *name,
const void *val, int len)
int fdt_delprop(void *fdt, int nodeoffset, const char *name)
int fdt_add_subnode_namelen(void *fdt, int parentoffset,
const char *name, int namelen)
int fdt_add_subnode(void *fdt, int parentoffset, const char *name)
int fdt_del_node(void *fdt, int nodeoffset)
static void _fdt_packblocks(const char *old, char *new,
int mem_rsv_size, int struct_size)
int fdt_open_into(const void *fdt, void *buf, int bufsize)
int fdt_pack(void *fdt)
