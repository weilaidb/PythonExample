void reset_pack_idx_option(struct pack_idx_option *opts)
static int sha1_compare(const void *_a, const void *_b)
static int cmp_uint32(const void *a_, const void *b_)
static int need_large_offset(off_t offset, const struct pack_idx_option *opts)
const char *write_idx_file(const char *index_name, struct pack_idx_entry **objects,
int nr_objects, const struct pack_idx_option *opts,
const unsigned char *sha1)
off_t write_pack_header(struct sha1file *f, uint32_t nr_entries)
void fixup_pack_header_footer(int pack_fd,
unsigned char *new_pack_sha1,
const char *pack_name,
uint32_t object_count,
unsigned char *partial_pack_sha1,
off_t partial_pack_offset)
char *index_pack_lockfile(int ip_out)
int encode_in_pack_object_header(enum object_type type, uintmax_t size, unsigned char *hdr)
struct sha1file *create_tmp_packfile(char **pack_tmp_name)
void finish_tmp_packfile(struct strbuf *name_buffer,
const char *pack_tmp_name,
struct pack_idx_entry **written_list,
uint32_t nr_written,
struct pack_idx_option *pack_idx_opts,
unsigned char sha1[])
