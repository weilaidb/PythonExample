static inline u16 case_fold(u16 c)
int hfsplus_strcasecmp(const struct hfsplus_unistr *s1,
const struct hfsplus_unistr *s2)
int hfsplus_strcmp(const struct hfsplus_unistr *s1,
const struct hfsplus_unistr *s2)
#define Hangul_SBase	0xac00
#define Hangul_LBase	0x1100
#define Hangul_VBase	0x1161
#define Hangul_TBase	0x11a7
#define Hangul_SCount	11172
#define Hangul_LCount	19
#define Hangul_VCount	21
#define Hangul_TCount	28
#define Hangul_NCount	(Hangul_VCount * Hangul_TCount)
static u16 *hfsplus_compose_lookup(u16 *p, u16 cc)
int hfsplus_uni2asc(struct super_block *sb,
const struct hfsplus_unistr *ustr,
char *astr, int *len_p)
static inline int asc2unichar(struct super_block *sb, const char *astr, int len,
wchar_t *uc)
static inline u16 *decompose_unichar(wchar_t uc, int *size)
int hfsplus_asc2uni(struct super_block *sb, struct hfsplus_unistr *ustr,
const char *astr, int len)
int hfsplus_hash_dentry(const struct dentry *dentry, const struct inode *inode,
struct qstr *str)
int hfsplus_compare_dentry(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
