#define _CIFS_UNICODE_H
#define  UNIUPR_NOLOWER
#define UNI_ASTERISK    (__u16) ('*' + 0xF000)
#define UNI_QUESTION    (__u16) ('?' + 0xF000)
#define UNI_COLON       (__u16) (':' + 0xF000)
#define UNI_GRTRTHAN    (__u16) ('>' + 0xF000)
#define UNI_LESSTHAN    (__u16) ('<' + 0xF000)
#define UNI_PIPE        (__u16) ('|' + 0xF000)
#define UNI_SLASH       (__u16) ('\\' + 0xF000)
struct UniCaseRange ;
extern signed char CifsUniUpperTable[512];
extern const struct UniCaseRange CifsUniUpperRange[];
extern signed char CifsUniLowerTable[512];
extern const struct UniCaseRange CifsUniLowerRange[];
int cifs_from_ucs2(char *to, const __le16 *from, int tolen, int fromlen,
const struct nls_table *codepage, bool mapchar);
int cifs_ucs2_bytes(const __le16 *from, int maxbytes,
const struct nls_table *codepage);
int cifs_strtoUCS(__le16 *, const char *, int, const struct nls_table *);
char *cifs_strndup_from_ucs(const char *src, const int maxlen,
const bool is_unicode,
const struct nls_table *codepage);
extern int cifsConvertToUCS(__le16 *target, const char *source, int maxlen,
const struct nls_table *cp, int mapChars);
static inline wchar_t *
UniStrcat(wchar_t *ucs1, const wchar_t *ucs2)
static inline wchar_t *
UniStrchr(const wchar_t *ucs, wchar_t uc)
static inline int
UniStrcmp(const wchar_t *ucs1, const wchar_t *ucs2)
static inline wchar_t *
UniStrcpy(wchar_t *ucs1, const wchar_t *ucs2)
static inline size_t
UniStrlen(const wchar_t *ucs1)
static inline size_t
UniStrnlen(const wchar_t *ucs1, int maxlen)
static inline wchar_t *
UniStrncat(wchar_t *ucs1, const wchar_t *ucs2, size_t n)
static inline int
UniStrncmp(const wchar_t *ucs1, const wchar_t *ucs2, size_t n)
static inline int
UniStrncmp_le(const wchar_t *ucs1, const wchar_t *ucs2, size_t n)
static inline wchar_t *
UniStrncpy(wchar_t *ucs1, const wchar_t *ucs2, size_t n)
static inline wchar_t *
UniStrncpy_le(wchar_t *ucs1, const wchar_t *ucs2, size_t n)
static inline wchar_t *
UniStrstr(const wchar_t *ucs1, const wchar_t *ucs2)
static inline wchar_t
UniToupper(register wchar_t uc)
static inline wchar_t *
UniStrupr(register wchar_t *upin)
static inline wchar_t
UniTolower(register wchar_t uc)
static inline wchar_t *
UniStrlwr(register wchar_t *upin)
