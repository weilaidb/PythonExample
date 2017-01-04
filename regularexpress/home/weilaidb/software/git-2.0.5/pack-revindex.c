static struct pack_revindex *pack_revindex;
static int pack_revindex_hashsz;
static int pack_revindex_ix(struct packed_git *p)
static void init_pack_revindex(void)
static void sort_revindex(struct revindex_entry *entries, unsigned n, off_t max)
static void create_pack_revindex(struct pack_revindex *rix)
struct pack_revindex *revindex_for_pack(struct packed_git *p)
int find_revindex_position(struct pack_revindex *pridx, off_t ofs)
struct revindex_entry *find_pack_revindex(struct packed_git *p, off_t ofs)
