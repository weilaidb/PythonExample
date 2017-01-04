static char version[] __initdata =
"ms02-nv.c: v.1.0.0  13 Aug 2001  Maciej W. Rozycki.\n";
MODULE_AUTHOR("Maciej W. Rozycki <macro@linux-mips.org>");
MODULE_DESCRIPTION("DEC MS02-NV NVRAM module driver");
MODULE_LICENSE("GPL");
static ulong ms02nv_addrs[] __initdata = ;
static const char ms02nv_name[] = "DEC MS02-NV NVRAM";
static const char ms02nv_res_diag_ram[] = "Diagnostic RAM";
static const char ms02nv_res_user_ram[] = "General-purpose RAM";
static const char ms02nv_res_csr[] = "Control and status register";
static struct mtd_info *root_ms02nv_mtd;
static int ms02nv_read(struct mtd_info *mtd, loff_t from,
size_t len, size_t *retlen, u_char *buf)
static int ms02nv_write(struct mtd_info *mtd, loff_t to,
size_t len, size_t *retlen, const u_char *buf)
static inline uint ms02nv_probe_one(ulong addr)
static int __init ms02nv_init_one(ulong addr)
static void __exit ms02nv_remove_one(void)
static int __init ms02nv_init(void)
static void __exit ms02nv_cleanup(void)
module_init(ms02nv_init);
module_exit(ms02nv_cleanup);
