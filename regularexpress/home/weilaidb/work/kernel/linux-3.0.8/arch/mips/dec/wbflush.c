static void wbflush_kn01(void);
static void wbflush_kn210(void);
static void wbflush_mips(void);
void (*__wbflush) (void);
void __init wbflush_setup(void)
static void wbflush_kn01(void)
static void wbflush_kn210(void)
static void wbflush_mips(void)
EXPORT_SYMBOL(__wbflush);
