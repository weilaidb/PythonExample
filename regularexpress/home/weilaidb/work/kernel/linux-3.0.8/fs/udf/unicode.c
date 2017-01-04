static int udf_translate_to_linux(uint8_t *, uint8_t *, int, uint8_t *, int);
static int udf_char_to_ustr(struct ustr *dest, const uint8_t *src, int strlen)
int udf_build_ustr(struct ustr *dest, dstring *ptr, int size)
static int udf_build_ustr_exact(struct ustr *dest, dstring *ptr, int exactsize)
int udf_CS0toUTF8(struct ustr *utf_o, const struct ustr *ocu_i)
static int udf_UTF8toCS0(dstring *ocu, struct ustr *utf, int length)
static int udf_CS0toNLS(struct nls_table *nls, struct ustr *utf_o,
const struct ustr *ocu_i)
static int udf_NLStoCS0(struct nls_table *nls, dstring *ocu, struct ustr *uni,
int length)
int udf_get_filename(struct super_block *sb, uint8_t *sname, uint8_t *dname,
int flen)
int udf_put_filename(struct super_block *sb, const uint8_t *sname,
uint8_t *dname, int flen)
#define ILLEGAL_CHAR_MARK	'_'
#define EXT_MARK		'.'
#define CRC_MARK		'#'
#define EXT_SIZE 		5
static int udf_translate_to_linux(uint8_t *newName, uint8_t *udfName,
int udfLen, uint8_t *fidName,
int fidNameLen)
