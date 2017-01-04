static int ima_audit;
static int __init ima_audit_setup(char *str)
__setup("ima_audit=", ima_audit_setup);
void integrity_audit_msg(int audit_msgno, struct inode *inode,
const unsigned char *fname, const char *op,
const char *cause, int result, int audit_info)
