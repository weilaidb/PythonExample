#define SIG(A,B) ((A) | ((B) << 8))
struct rock_state ;
static int check_sp(struct rock_ridge *rr, struct inode *inode)
static void setup_rock_ridge(struct iso_directory_record *de,
struct inode *inode, struct rock_state *rs)
static void init_rock_state(struct rock_state *rs, struct inode *inode)
static int rock_continue(struct rock_state *rs)
static int rock_check_overflow(struct rock_state *rs, int sig)
int get_rock_ridge_filename(struct iso_directory_record *de,
char *retname, struct inode *inode)
static int
parse_rock_ridge_inode_internal(struct iso_directory_record *de,
struct inode *inode, int regard_xa)
static char *get_symlink_chunk(char *rpnt, struct rock_ridge *rr, char *plimit)
int parse_rock_ridge_inode(struct iso_directory_record *de, struct inode *inode)
static int rock_ridge_symlink_readpage(struct file *file, struct page *page)
const struct address_space_operations isofs_symlink_aops = ;
