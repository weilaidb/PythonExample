struct autofs_info *autofs4_new_ino(struct autofs_sb_info *sbi)
void autofs4_clean_ino(struct autofs_info *ino)
void autofs4_free_ino(struct autofs_info *ino)
void autofs4_kill_sb(struct super_block *sb)
static int autofs4_show_options(struct seq_file *m, struct vfsmount *mnt)
static void autofs4_evict_inode(struct inode *inode)
static const struct super_operations autofs4_sops = ;
enum ;
static const match_table_t tokens = ;
static int parse_options(char *options, int *pipefd, uid_t *uid, gid_t *gid,
pid_t *pgrp, unsigned int *type, int *minproto, int *maxproto)
int autofs4_fill_super(struct super_block *s, void *data, int silent)
struct inode *autofs4_get_inode(struct super_block *sb, mode_t mode)
