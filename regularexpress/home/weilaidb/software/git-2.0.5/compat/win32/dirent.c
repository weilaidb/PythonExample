struct DIR ;
DIR *opendir(const char *name)
struct dirent *readdir(DIR *dir)
int closedir(DIR *dir)
