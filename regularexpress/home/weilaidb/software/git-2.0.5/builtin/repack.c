static int delta_base_offset = 1;
static int pack_kept_objects = -1;
static int write_bitmaps = -1;
static char *packdir, *packtmp;
static const char *const git_repack_usage[] = ;
static int repack_config(const char *var, const char *value, void *cb)
static void remove_temporary_files(void)
static void remove_pack_on_signal(int signo)
static void get_non_kept_pack_filenames(struct string_list *fname_list)
static void remove_redundant_pack(const char *dir_name, const char *base_name)
#define ALL_INTO_ONE 1
#define LOOSEN_UNREACHABLE 2
int cmd_repack(int argc, const char **argv, const char *prefix)
