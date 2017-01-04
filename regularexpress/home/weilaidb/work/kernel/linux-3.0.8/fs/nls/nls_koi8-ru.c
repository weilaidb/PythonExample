static struct nls_table *p_nls;
static int uni2char(const wchar_t uni,
unsigned char *out, int boundlen)
static int char2uni(const unsigned char *rawstring, int boundlen,
wchar_t *uni)
static struct nls_table table = ;
static int __init init_nls_koi8_ru(void)
static void __exit exit_nls_koi8_ru(void)
module_init(init_nls_koi8_ru)
module_exit(exit_nls_koi8_ru)
MODULE_LICENSE("Dual BSD/GPL");
