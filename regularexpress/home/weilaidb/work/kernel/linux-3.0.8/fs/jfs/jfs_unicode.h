#define _H_JFS_UNICODE
typedef struct  UNICASERANGE;
extern signed char UniUpperTable[512];
extern UNICASERANGE UniUpperRange[];
extern int get_UCSname(struct component_name *, struct dentry *);
extern int jfs_strfromUCS_le(char *, const __le16 *, int, struct nls_table *);
#define free_UCSname(COMP) kfree((COMP)->name)
static inline wchar_t *UniStrcpy(wchar_t * ucs1, const wchar_t * ucs2)
static inline __le16 *UniStrncpy_le(__le16 * ucs1, const __le16 * ucs2,
size_t n)
static inline int UniStrncmp_le(const wchar_t * ucs1, const __le16 * ucs2,
size_t n)
static inline __le16 *UniStrncpy_to_le(__le16 * ucs1, const wchar_t * ucs2,
size_t n)
static inline wchar_t *UniStrncpy_from_le(wchar_t * ucs1, const __le16 * ucs2,
size_t n)
static inline wchar_t UniToupper(wchar_t uc)
static inline wchar_t *UniStrupr(wchar_t * upin)
