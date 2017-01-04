static FILE *info_ref_fp;
static int add_info_ref(const char *path, const unsigned char *sha1, int flag, void *cb_data)
static int update_info_refs(int force)
static struct pack_info  **info;
static int num_pack;
static const char *objdir;
static int objdirlen;
static struct pack_info *find_pack_by_name(const char *name)
static int parse_pack_def(const char *line, int old_cnt)
static int read_pack_info_file(const char *infofile)
static int compare_info(const void *a_, const void *b_)
static void init_pack_info(const char *infofile, int force)
static void write_pack_info_file(FILE *fp)
static int update_info_packs(int force)
int update_server_info(int force)
