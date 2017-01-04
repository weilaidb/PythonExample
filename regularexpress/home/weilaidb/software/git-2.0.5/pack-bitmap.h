#define PACK_BITMAP_H
struct bitmap_disk_entry  __attribute__((packed));
struct bitmap_disk_header ;
static const char BITMAP_IDX_SIGNATURE[] = ;
#define NEEDS_BITMAP (1u<<22)
enum pack_bitmap_opts ;
enum pack_bitmap_flags ;
typedef int (*show_reachable_fn)(
const unsigned char *sha1,
enum object_type type,
int flags,
uint32_t hash,
struct packed_git *found_pack,
off_t found_offset);
int prepare_bitmap_git(void);
void count_bitmap_commit_list(uint32_t *commits, uint32_t *trees, uint32_t *blobs, uint32_t *tags);
void traverse_bitmap_commit_list(show_reachable_fn show_reachable);
void test_bitmap_walk(struct rev_info *revs);
char *pack_bitmap_filename(struct packed_git *p);
int prepare_bitmap_walk(struct rev_info *revs);
int reuse_partial_packfile_from_bitmap(struct packed_git **packfile, uint32_t *entries, off_t *up_to);
int rebuild_existing_bitmaps(struct packing_data *mapping, khash_sha1 *reused_bitmaps, int show_progress);
void bitmap_writer_show_progress(int show);
void bitmap_writer_set_checksum(unsigned char *sha1);
void bitmap_writer_build_type_index(struct pack_idx_entry **index, uint32_t index_nr);
void bitmap_writer_reuse_bitmaps(struct packing_data *to_pack);
void bitmap_writer_select_commits(struct commit **indexed_commits,
unsigned int indexed_commits_nr, int max_bitmaps);
void bitmap_writer_build(struct packing_data *to_pack);
void bitmap_writer_finish(struct pack_idx_entry **index,
uint32_t index_nr,
const char *filename,
uint16_t options);
