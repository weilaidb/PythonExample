struct fdt_errtabent ;
#define FDT_ERRTABENT(val) \
[(val)] =
static struct fdt_errtabent fdt_errtable[] = ;
#define FDT_ERRTABSIZE	(sizeof(fdt_errtable) / sizeof(fdt_errtable[0]))
const char *fdt_strerror(int errval)
