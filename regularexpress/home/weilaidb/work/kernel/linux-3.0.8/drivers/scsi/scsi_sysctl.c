static ctl_table scsi_table[] = ;
static ctl_table scsi_dir_table[] = ;
static ctl_table scsi_root_table[] = ;
static struct ctl_table_header *scsi_table_header;
int __init scsi_init_sysctl(void)
void scsi_exit_sysctl(void)
