enum ;
static const match_table_t tokens = ;
void hfsplus_fill_defaults(struct hfsplus_sb_info *opts)
static inline int match_fourchar(substring_t *arg, u32 *result)
int hfsplus_parse_options_remount(char *input, int *force)
int hfsplus_parse_options(char *input, struct hfsplus_sb_info *sbi)
int hfsplus_show_options(struct seq_file *seq, struct vfsmount *mnt)
