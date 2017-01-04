static void flush_current_id(int patchlen, unsigned char *id, git_SHA_CTX *c)
static int remove_space(char *line)
static int scan_hunk_header(const char *p, int *p_before, int *p_after)
static int get_one_patchid(unsigned char *next_sha1, git_SHA_CTX *ctx, struct strbuf *line_buf)
static void generate_id_list(void)
static const char patch_id_usage[] = "git patch-id < patch";
int cmd_patch_id(int argc, const char **argv, const char *prefix)
