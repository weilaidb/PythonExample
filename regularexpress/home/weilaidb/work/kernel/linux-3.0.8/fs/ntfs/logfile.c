static bool ntfs_check_restart_page_header(struct inode *vi,
RESTART_PAGE_HEADER *rp, s64 pos)
static bool ntfs_check_restart_area(struct inode *vi, RESTART_PAGE_HEADER *rp)
static bool ntfs_check_log_client_array(struct inode *vi,
RESTART_PAGE_HEADER *rp)
static int ntfs_check_and_load_restart_page(struct inode *vi,
RESTART_PAGE_HEADER *rp, s64 pos, RESTART_PAGE_HEADER **wrp,
LSN *lsn)
bool ntfs_check_logfile(struct inode *log_vi, RESTART_PAGE_HEADER **rp)
bool ntfs_is_logfile_clean(struct inode *log_vi, const RESTART_PAGE_HEADER *rp)
bool ntfs_empty_logfile(struct inode *log_vi)
