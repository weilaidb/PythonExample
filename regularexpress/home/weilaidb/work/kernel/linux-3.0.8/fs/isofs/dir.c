int isofs_name_translate(struct iso_directory_record *de, char *new, struct inode *inode)
int get_acorn_filename(struct iso_directory_record *de,
char *retname, struct inode *inode)
static int do_isofs_readdir(struct inode *inode, struct file *filp,
void *dirent, filldir_t filldir,
char *tmpname, struct iso_directory_record *tmpde)
static int isofs_readdir(struct file *filp,
void *dirent, filldir_t filldir)
const struct file_operations isofs_dir_operations =
;
const struct inode_operations isofs_dir_inode_operations =
;
