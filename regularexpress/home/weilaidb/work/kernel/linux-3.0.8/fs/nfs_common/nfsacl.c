MODULE_LICENSE("GPL");
EXPORT_SYMBOL_GPL(nfsacl_encode);
EXPORT_SYMBOL_GPL(nfsacl_decode);
struct nfsacl_encode_desc ;
struct nfsacl_simple_acl ;
static int
xdr_nfsace_encode(struct xdr_array2_desc *desc, void *elem)
int nfsacl_encode(struct xdr_buf *buf, unsigned int base, struct inode *inode,
struct posix_acl *acl, int encode_entries, int typeflag)
struct nfsacl_decode_desc ;
static int
xdr_nfsace_decode(struct xdr_array2_desc *desc, void *elem)
static int
cmp_acl_entry(const void *x, const void *y)
static int
posix_acl_from_nfsacl(struct posix_acl *acl)
int nfsacl_decode(struct xdr_buf *buf, unsigned int base, unsigned int *aclcnt,
struct posix_acl **pacl)
