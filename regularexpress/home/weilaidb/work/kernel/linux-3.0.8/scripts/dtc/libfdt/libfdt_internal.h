#define _LIBFDT_INTERNAL_H
#define FDT_ALIGN(x, a)		(((x) + (a) - 1) & ~((a) - 1))
#define FDT_TAGALIGN(x)		(FDT_ALIGN((x), FDT_TAGSIZE))
#define FDT_CHECK_HEADER(fdt) \
uint32_t _fdt_next_tag(const void *fdt, int startoffset, int *nextoffset);
int _fdt_check_node_offset(const void *fdt, int offset);
const char *_fdt_find_string(const char *strtab, int tabsize, const char *s);
int _fdt_node_end_offset(void *fdt, int nodeoffset);
static inline const void *_fdt_offset_ptr(const void *fdt, int offset)
static inline void *_fdt_offset_ptr_w(void *fdt, int offset)
static inline const struct fdt_reserve_entry *_fdt_mem_rsv(const void *fdt, int n)
static inline struct fdt_reserve_entry *_fdt_mem_rsv_w(void *fdt, int n)
#define FDT_SW_MAGIC		(~FDT_MAGIC)
