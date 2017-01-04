static int _fdt_nodename_eq(const void *fdt, int offset,
const char *s, int len)
const char *fdt_string(const void *fdt, int stroffset)
int fdt_get_mem_rsv(const void *fdt, int n, uint64_t *address, uint64_t *size)
int fdt_num_mem_rsv(const void *fdt)
int fdt_subnode_offset_namelen(const void *fdt, int offset,
const char *name, int namelen)
int fdt_subnode_offset(const void *fdt, int parentoffset,
const char *name)
int fdt_path_offset(const void *fdt, const char *path)
const char *fdt_get_name(const void *fdt, int nodeoffset, int *len)
const struct fdt_property *fdt_get_property(const void *fdt,
int nodeoffset,
const char *name, int *lenp)
const void *fdt_getprop(const void *fdt, int nodeoffset,
const char *name, int *lenp)
uint32_t fdt_get_phandle(const void *fdt, int nodeoffset)
int fdt_get_path(const void *fdt, int nodeoffset, char *buf, int buflen)
int fdt_supernode_atdepth_offset(const void *fdt, int nodeoffset,
int supernodedepth, int *nodedepth)
int fdt_node_depth(const void *fdt, int nodeoffset)
int fdt_parent_offset(const void *fdt, int nodeoffset)
int fdt_node_offset_by_prop_value(const void *fdt, int startoffset,
const char *propname,
const void *propval, int proplen)
int fdt_node_offset_by_phandle(const void *fdt, uint32_t phandle)
static int _stringlist_contains(const char *strlist, int listlen, const char *str)
int fdt_node_check_compatible(const void *fdt, int nodeoffset,
const char *compatible)
int fdt_node_offset_by_compatible(const void *fdt, int startoffset,
const char *compatible)
