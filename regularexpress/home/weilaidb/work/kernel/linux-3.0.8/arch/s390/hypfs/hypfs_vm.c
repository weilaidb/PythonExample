#define NAME_LEN 8
#define DBFS_D2FC_HDR_VERSION 0
static char local_guest[] = "        ";
static char all_guests[] = "*       ";
static char *guest_query;
struct diag2fc_data ;
struct diag2fc_parm_list ;
static int diag2fc(int size, char* query, void *addr)
static void *diag2fc_store(char *query, unsigned int *count, int offset)
static void diag2fc_free(const void *data)
#define ATTRIBUTE(sb, dir, name, member) \
do  while(0)
static int hpyfs_vm_create_guest(struct super_block *sb,
struct dentry *systems_dir,
struct diag2fc_data *data)
int hypfs_vm_create_files(struct super_block *sb, struct dentry *root)
struct dbfs_d2fc_hdr  __attribute__ ((packed));
struct dbfs_d2fc  __attribute__ ((packed));
static int dbfs_diag2fc_create(void **data, void **data_free_ptr, size_t *size)
static struct hypfs_dbfs_file dbfs_file_2fc = ;
int hypfs_vm_init(void)
void hypfs_vm_exit(void)
