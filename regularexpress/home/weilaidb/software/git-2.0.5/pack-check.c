struct idx_entry ;
static int compare_entries(const void *e1, const void *e2)
int check_pack_crc(struct packed_git *p, struct pack_window **w_curs,
off_t offset, off_t len, unsigned int nr)
static int verify_packfile(struct packed_git *p,
struct pack_window **w_curs,
verify_fn fn,
struct progress *progress, uint32_t base_count)
int verify_pack_index(struct packed_git *p)
int verify_pack(struct packed_git *p, verify_fn fn,
struct progress *progress, uint32_t base_count)
