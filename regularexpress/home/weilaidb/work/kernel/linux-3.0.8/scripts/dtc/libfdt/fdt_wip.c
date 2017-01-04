int fdt_setprop_inplace(void *fdt, int nodeoffset, const char *name,
const void *val, int len)
static void _fdt_nop_region(void *start, int len)
int fdt_nop_property(void *fdt, int nodeoffset, const char *name)
int _fdt_node_end_offset(void *fdt, int nodeoffset)
int fdt_nop_node(void *fdt, int nodeoffset)
