#define _LINUX_NLS_H
typedef u16 wchar_t;
#define MAX_WCHAR_T	0xffff
typedef u32 unicode_t;
struct nls_table ;
#define NLS_MAX_CHARSET_SIZE 6
enum utf16_endian ;
extern int register_nls(struct nls_table *);
extern int unregister_nls(struct nls_table *);
extern struct nls_table *load_nls(char *);
extern void unload_nls(struct nls_table *);
extern struct nls_table *load_nls_default(void);
extern int utf8_to_utf32(const u8 *s, int len, unicode_t *pu);
extern int utf32_to_utf8(unicode_t u, u8 *s, int maxlen);
extern int utf8s_to_utf16s(const u8 *s, int len, wchar_t *pwcs);
extern int utf16s_to_utf8s(const wchar_t *pwcs, int len,
enum utf16_endian endian, u8 *s, int maxlen);
static inline unsigned char nls_tolower(struct nls_table *t, unsigned char c)
static inline unsigned char nls_toupper(struct nls_table *t, unsigned char c)
static inline int nls_strnicmp(struct nls_table *t, const unsigned char *s1,
const unsigned char *s2, int len)
static inline int
nls_nullsize(const struct nls_table *codepage)
#define MODULE_ALIAS_NLS(name)	MODULE_ALIAS("nls_" __stringify(name))
