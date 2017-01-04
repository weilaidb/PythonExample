static struct nls_table default_table;
static struct nls_table *tables = &default_table;
static DEFINE_SPINLOCK(nls_lock);
struct utf8_table ;
static const struct utf8_table utf8_table[] =
;
#define UNICODE_MAX	0x0010ffff
#define PLANE_SIZE	0x00010000
#define SURROGATE_MASK	0xfffff800
#define SURROGATE_PAIR	0x0000d800
#define SURROGATE_LOW	0x00000400
#define SURROGATE_BITS	0x000003ff
int utf8_to_utf32(const u8 *s, int len, unicode_t *pu)
EXPORT_SYMBOL(utf8_to_utf32);
int utf32_to_utf8(unicode_t u, u8 *s, int maxlen)
EXPORT_SYMBOL(utf32_to_utf8);
int utf8s_to_utf16s(const u8 *s, int len, wchar_t *pwcs)
EXPORT_SYMBOL(utf8s_to_utf16s);
static inline unsigned long get_utf16(unsigned c, enum utf16_endian endian)
int utf16s_to_utf8s(const wchar_t *pwcs, int len, enum utf16_endian endian,
u8 *s, int maxlen)
EXPORT_SYMBOL(utf16s_to_utf8s);
int register_nls(struct nls_table * nls)
int unregister_nls(struct nls_table * nls)
static struct nls_table *find_nls(char *charset)
struct nls_table *load_nls(char *charset)
void unload_nls(struct nls_table *nls)
static const wchar_t charset2uni[256] = ;
static const unsigned char page00[256] = ;
static const unsigned char *const page_uni2charset[256] = ;
static const unsigned char charset2lower[256] = ;
static const unsigned char charset2upper[256] = ;
static int uni2char(wchar_t uni, unsigned char *out, int boundlen)
static int char2uni(const unsigned char *rawstring, int boundlen, wchar_t *uni)
static struct nls_table default_table = ;
struct nls_table *load_nls_default(void)
EXPORT_SYMBOL(register_nls);
EXPORT_SYMBOL(unregister_nls);
EXPORT_SYMBOL(unload_nls);
EXPORT_SYMBOL(load_nls);
EXPORT_SYMBOL(load_nls_default);
MODULE_LICENSE("Dual BSD/GPL");
