#define PRECOMPOSE_UNICODE_C
typedef char *iconv_ibp;
static const char *repo_encoding = "UTF-8";
static const char *path_encoding = "UTF-8-MAC";
static size_t has_non_ascii(const char *s, size_t maxlen, size_t *strlen_c)
void probe_utf8_pathname_composition(char *path, int len)
void precompose_argv(int argc, const char **argv)
PREC_DIR *precompose_utf8_opendir(const char *dirname)
struct dirent_prec_psx *precompose_utf8_readdir(PREC_DIR *prec_dir)
int precompose_utf8_closedir(PREC_DIR *prec_dir)
