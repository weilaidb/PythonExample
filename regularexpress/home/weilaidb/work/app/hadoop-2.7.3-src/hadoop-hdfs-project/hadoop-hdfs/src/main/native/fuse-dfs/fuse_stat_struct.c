extern pthread_mutex_t passwdstruct_mutex;
extern pthread_mutex_t groupstruct_mutex;
const int default_id = 99;
const int blksize = 512;
int fill_stat_structure(hdfsFileInfo *info, struct stat *st)
