int jfs_strfromUCS_le(char *to, const __le16 * from,
int len, struct nls_table *codepage)
static int jfs_strtoUCS(wchar_t * to, const unsigned char *from, int len,
struct nls_table *codepage)
int get_UCSname(struct component_name * uniName, struct dentry *dentry)
