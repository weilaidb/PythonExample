int coda_fake_statfs;
char * coda_f2s(struct CodaFid *f)
int coda_iscontrol(const char *name, size_t length)
int coda_isroot(struct inode *i)
unsigned short coda_flags_to_cflags(unsigned short flags)
void coda_vattr_to_iattr(struct inode *inode, struct coda_vattr *attr)
void coda_iattr_to_vattr(struct iattr *iattr, struct coda_vattr *vattr)
