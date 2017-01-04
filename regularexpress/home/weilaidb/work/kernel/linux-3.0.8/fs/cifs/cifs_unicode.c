int
cifs_ucs2_bytes(const __le16 *from, int maxbytes,
const struct nls_table *codepage)
static int
cifs_mapchar(char *target, const __u16 src_char, const struct nls_table *cp,
bool mapchar)
int
cifs_from_ucs2(char *to, const __le16 *from, int tolen, int fromlen,
const struct nls_table *codepage, bool mapchar)
int
cifs_strtoUCS(__le16 *to, const char *from, int len,
const struct nls_table *codepage)
char *
cifs_strndup_from_ucs(const char *src, const int maxlen, const bool is_unicode,
const struct nls_table *codepage)
int
cifsConvertToUCS(__le16 *target, const char *source, int srclen,
const struct nls_table *cp, int mapChars)
