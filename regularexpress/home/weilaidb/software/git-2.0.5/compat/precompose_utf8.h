typedef struct dirent_prec_psx  dirent_prec_psx;
typedef struct  PREC_DIR;
void precompose_argv(int argc, const char **argv);
void probe_utf8_pathname_composition(char *, int);
PREC_DIR *precompose_utf8_opendir(const char *dirname);
struct dirent_prec_psx *precompose_utf8_readdir(PREC_DIR *dirp);
int precompose_utf8_closedir(PREC_DIR *dirp);
#define dirent dirent_prec_psx
#define opendir(n) precompose_utf8_opendir(n)
#define readdir(d) precompose_utf8_readdir(d)
#define closedir(d) precompose_utf8_closedir(d)
#define DIR PREC_DIR
#define  PRECOMPOSE_UNICODE_H
