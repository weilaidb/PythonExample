static const wchar_t charset2uni[256] = ;
static const unsigned char page00[256] = ;
static const unsigned char page03[256] = ;
static const unsigned char page20[256] = ;
static const unsigned char page25[256] = ;
static const unsigned char *const page_uni2charset[256] = ;
static const unsigned char charset2lower[256] = ;
static const unsigned char charset2upper[256] = ;
static int uni2char(wchar_t uni, unsigned char *out, int boundlen)
static int char2uni(const unsigned char *rawstring, int boundlen, wchar_t *uni)
static struct nls_table table = ;
static int __init init_nls_cp869(void)
static void __exit exit_nls_cp869(void)
module_init(init_nls_cp869)
module_exit(exit_nls_cp869)
MODULE_LICENSE("Dual BSD/GPL");
