#define YAFFS_GC_GOOD_ENOUGH 2
#define YAFFS_GC_PASSIVE_THRESHOLD 4
static int yaffs_wr_data_obj(struct yaffs_obj *in, int inode_chunk,
const u8 *buffer, int n_bytes, int use_reserve);
static void yaffs_fix_null_name(struct yaffs_obj *obj, YCHAR *name,
int buffer_size);
void yaffs_addr_to_chunk(struct yaffs_dev *dev, loff_t addr,
int *chunk_out, u32 *offset_out)
static inline u32 calc_shifts_ceiling(u32 x)
static inline u32 calc_shifts(u32 x)
static int yaffs_init_tmp_buffers(struct yaffs_dev *dev)
u8 *yaffs_get_temp_buffer(struct yaffs_dev * dev)
void yaffs_release_temp_buffer(struct yaffs_dev *dev, u8 *buffer)
static void yaffs_handle_chunk_wr_ok(struct yaffs_dev *dev, int nand_chunk,
const u8 *data,
const struct yaffs_ext_tags *tags)
static void yaffs_handle_chunk_update(struct yaffs_dev *dev, int nand_chunk,
const struct yaffs_ext_tags *tags)
void yaffs_handle_chunk_error(struct yaffs_dev *dev,
struct yaffs_block_info *bi)
static void yaffs_handle_chunk_wr_error(struct yaffs_dev *dev, int nand_chunk,
int erased_ok)
static inline int yaffs_hash_fn(int n)
struct yaffs_obj *yaffs_root(struct yaffs_dev *dev)
struct yaffs_obj *yaffs_lost_n_found(struct yaffs_dev *dev)
int yaffs_check_ff(u8 *buffer, int n_bytes)
static int yaffs_check_chunk_erased(struct yaffs_dev *dev, int nand_chunk)
static int yaffs_verify_chunk_written(struct yaffs_dev *dev,
int nand_chunk,
const u8 *data,
struct yaffs_ext_tags *tags)
int yaffs_check_alloc_available(struct yaffs_dev *dev, int n_chunks)
static int yaffs_find_alloc_block(struct yaffs_dev *dev)
static int yaffs_alloc_chunk(struct yaffs_dev *dev, int use_reserver,
struct yaffs_block_info **block_ptr)
static int yaffs_get_erased_chunks(struct yaffs_dev *dev)
void yaffs_skip_rest_of_block(struct yaffs_dev *dev)
static int yaffs_write_new_chunk(struct yaffs_dev *dev,
const u8 *data,
struct yaffs_ext_tags *tags, int use_reserver)
static void yaffs_retire_block(struct yaffs_dev *dev, int flash_block)
static void yaffs_load_name_from_oh(struct yaffs_dev *dev, YCHAR *name,
const YCHAR *oh_name, int buff_size)
{
if (dev->param.auto_unicode)  else
static void yaffs_load_oh_from_name(struct yaffs_dev *dev, YCHAR *oh_name,
const YCHAR *name)
{
int is_ascii;
const YCHAR *w;
if (dev->param.auto_unicode)  else
static u16 yaffs_calc_name_sum(const YCHAR *name)
void yaffs_set_obj_name(struct yaffs_obj *obj, const YCHAR * name)
void yaffs_set_obj_name_from_oh(struct yaffs_obj *obj,
const struct yaffs_obj_hdr *oh)
loff_t yaffs_max_file_size(struct yaffs_dev *dev)
struct yaffs_tnode *yaffs_get_tnode(struct yaffs_dev *dev)
static void yaffs_free_tnode(struct yaffs_dev *dev, struct yaffs_tnode *tn)
static void yaffs_deinit_tnodes_and_objs(struct yaffs_dev *dev)
static void yaffs_load_tnode_0(struct yaffs_dev *dev, struct yaffs_tnode *tn,
unsigned pos, unsigned val)
u32 yaffs_get_group_base(struct yaffs_dev *dev, struct yaffs_tnode *tn,
unsigned pos)
struct yaffs_tnode *yaffs_find_tnode_0(struct yaffs_dev *dev,
struct yaffs_file_var *file_struct,
u32 chunk_id)
struct yaffs_tnode *yaffs_add_find_tnode_0(struct yaffs_dev *dev,
struct yaffs_file_var *file_struct,
u32 chunk_id,
struct yaffs_tnode *passed_tn)
static int yaffs_tags_match(const struct yaffs_ext_tags *tags, int obj_id,
int chunk_obj)
static int yaffs_find_chunk_in_group(struct yaffs_dev *dev, int the_chunk,
struct yaffs_ext_tags *tags, int obj_id,
int inode_chunk)
int yaffs_find_chunk_in_file(struct yaffs_obj *in, int inode_chunk,
struct yaffs_ext_tags *tags)
static int yaffs_find_del_file_chunk(struct yaffs_obj *in, int inode_chunk,
struct yaffs_ext_tags *tags)
int yaffs_put_chunk_in_file(struct yaffs_obj *in, int inode_chunk,
int nand_chunk, int in_scan)
static void yaffs_soft_del_chunk(struct yaffs_dev *dev, int chunk)
static int yaffs_soft_del_worker(struct yaffs_obj *in, struct yaffs_tnode *tn,
u32 level, int chunk_offset)
static void yaffs_remove_obj_from_dir(struct yaffs_obj *obj)
void yaffs_add_obj_to_dir(struct yaffs_obj *directory, struct yaffs_obj *obj)
static int yaffs_change_obj_name(struct yaffs_obj *obj,
struct yaffs_obj *new_dir,
const YCHAR *new_name, int force, int shadows)
static int yaffs_obj_cache_dirty(struct yaffs_obj *obj)
static void yaffs_flush_single_cache(struct yaffs_cache *cache, int discard)
static void yaffs_flush_file_cache(struct yaffs_obj *obj, int discard)
void yaffs_flush_whole_cache(struct yaffs_dev *dev, int discard)
static struct yaffs_cache *yaffs_grab_chunk_worker(struct yaffs_dev *dev)
static struct yaffs_cache *yaffs_grab_chunk_cache(struct yaffs_dev *dev)
static struct yaffs_cache *yaffs_find_chunk_cache(const struct yaffs_obj *obj,
int chunk_id)
static void yaffs_use_cache(struct yaffs_dev *dev, struct yaffs_cache *cache,
int is_write)
static void yaffs_invalidate_chunk_cache(struct yaffs_obj *object, int chunk_id)
static void yaffs_invalidate_whole_cache(struct yaffs_obj *in)
static void yaffs_unhash_obj(struct yaffs_obj *obj)
static void yaffs_free_obj(struct yaffs_obj *obj)
void yaffs_handle_defered_free(struct yaffs_obj *obj)
static int yaffs_generic_obj_del(struct yaffs_obj *in)
static void yaffs_soft_del_file(struct yaffs_obj *obj)
static struct yaffs_tnode *yaffs_prune_worker(struct yaffs_dev *dev,
struct yaffs_tnode *tn, u32 level,
int del0)
static int yaffs_prune_tree(struct yaffs_dev *dev,
struct yaffs_file_var *file_struct)
static struct yaffs_obj *yaffs_alloc_empty_obj(struct yaffs_dev *dev)
static int yaffs_find_nice_bucket(struct yaffs_dev *dev)
static int yaffs_new_obj_id(struct yaffs_dev *dev)
static void yaffs_hash_obj(struct yaffs_obj *in)
struct yaffs_obj *yaffs_find_by_number(struct yaffs_dev *dev, u32 number)
static struct yaffs_obj *yaffs_new_obj(struct yaffs_dev *dev, int number,
enum yaffs_obj_type type)
static struct yaffs_obj *yaffs_create_fake_dir(struct yaffs_dev *dev,
int number, u32 mode)
static void yaffs_init_tnodes_and_objs(struct yaffs_dev *dev)
struct yaffs_obj *yaffs_find_or_create_by_number(struct yaffs_dev *dev,
int number,
enum yaffs_obj_type type)
YCHAR *yaffs_clone_str(const YCHAR *str)
static void yaffs_update_parent(struct yaffs_obj *obj)
void yaffs_update_dirty_dirs(struct yaffs_dev *dev)
static struct yaffs_obj *yaffs_create_obj(enum yaffs_obj_type type,
struct yaffs_obj *parent,
const YCHAR *name,
u32 mode,
u32 uid,
u32 gid,
struct yaffs_obj *equiv_obj,
const YCHAR *alias_str, u32 rdev)
struct yaffs_obj *yaffs_create_file(struct yaffs_obj *parent,
const YCHAR *name, u32 mode, u32 uid,
u32 gid)
struct yaffs_obj *yaffs_create_dir(struct yaffs_obj *parent, const YCHAR *name,
u32 mode, u32 uid, u32 gid)
struct yaffs_obj *yaffs_create_special(struct yaffs_obj *parent,
const YCHAR *name, u32 mode, u32 uid,
u32 gid, u32 rdev)
struct yaffs_obj *yaffs_create_symlink(struct yaffs_obj *parent,
const YCHAR *name, u32 mode, u32 uid,
u32 gid, const YCHAR *alias)
struct yaffs_obj *yaffs_link_obj(struct yaffs_obj *parent, const YCHAR * name,
struct yaffs_obj *equiv_obj)
static void yaffs_deinit_blocks(struct yaffs_dev *dev)
static int yaffs_init_blocks(struct yaffs_dev *dev)
void yaffs_block_became_dirty(struct yaffs_dev *dev, int block_no)
static inline int yaffs_gc_process_chunk(struct yaffs_dev *dev,
struct yaffs_block_info *bi,
int old_chunk, u8 *buffer)
static int yaffs_gc_block(struct yaffs_dev *dev, int block, int whole_block)
static unsigned yaffs_find_gc_block(struct yaffs_dev *dev,
int aggressive, int background)
static int yaffs_check_gc(struct yaffs_dev *dev, int background)
int yaffs_bg_gc(struct yaffs_dev *dev, unsigned urgency)
static int yaffs_rd_data_obj(struct yaffs_obj *in, int inode_chunk, u8 * buffer)
void yaffs_chunk_del(struct yaffs_dev *dev, int chunk_id, int mark_flash,
int lyn)
static int yaffs_wr_data_obj(struct yaffs_obj *in, int inode_chunk,
const u8 *buffer, int n_bytes, int use_reserve)
static int yaffs_do_xattrib_mod(struct yaffs_obj *obj, int set,
const YCHAR *name, const void *value, int size,
int flags)
static int yaffs_apply_xattrib_mod(struct yaffs_obj *obj, char *buffer,
struct yaffs_xattr_mod *xmod)
static int yaffs_do_xattrib_fetch(struct yaffs_obj *obj, const YCHAR *name,
void *value, int size)
int yaffs_set_xattrib(struct yaffs_obj *obj, const YCHAR * name,
const void *value, int size, int flags)
int yaffs_remove_xattrib(struct yaffs_obj *obj, const YCHAR * name)
int yaffs_get_xattrib(struct yaffs_obj *obj, const YCHAR * name, void *value,
int size)
int yaffs_list_xattrib(struct yaffs_obj *obj, char *buffer, int size)
static void yaffs_check_obj_details_loaded(struct yaffs_obj *in)
int yaffs_update_oh(struct yaffs_obj *in, const YCHAR *name, int force,
int is_shrink, int shadows, struct yaffs_xattr_mod *xmod)
int yaffs_file_rd(struct yaffs_obj *in, u8 * buffer, loff_t offset, int n_bytes)
int yaffs_do_file_wr(struct yaffs_obj *in, const u8 *buffer, loff_t offset,
int n_bytes, int write_through)
int yaffs_wr_file(struct yaffs_obj *in, const u8 *buffer, loff_t offset,
int n_bytes, int write_through)
static void yaffs_prune_chunks(struct yaffs_obj *in, loff_t new_size)
void yaffs_resize_file_down(struct yaffs_obj *obj, loff_t new_size)
int yaffs_resize_file(struct yaffs_obj *in, loff_t new_size)
int yaffs_flush_file(struct yaffs_obj *in,
int update_time,
int data_sync,
int discard_cache)
static int yaffs_unlink_file_if_needed(struct yaffs_obj *in)
static int yaffs_del_file(struct yaffs_obj *in)
int yaffs_is_non_empty_dir(struct yaffs_obj *obj)
static int yaffs_del_dir(struct yaffs_obj *obj)
static int yaffs_del_symlink(struct yaffs_obj *in)
static int yaffs_del_link(struct yaffs_obj *in)
int yaffs_del_obj(struct yaffs_obj *obj)
static void yaffs_empty_dir_to_dir(struct yaffs_obj *from_dir,
struct yaffs_obj *to_dir)
struct yaffs_obj *yaffs_retype_obj(struct yaffs_obj *obj,
enum yaffs_obj_type type)
static int yaffs_unlink_worker(struct yaffs_obj *obj)
int yaffs_unlink_obj(struct yaffs_obj *obj)
int yaffs_unlinker(struct yaffs_obj *dir, const YCHAR *name)
int yaffs_rename_obj(struct yaffs_obj *old_dir, const YCHAR *old_name,
struct yaffs_obj *new_dir, const YCHAR *new_name)
void yaffs_handle_shadowed_obj(struct yaffs_dev *dev, int obj_id,
int backward_scanning)
void yaffs_link_fixup(struct yaffs_dev *dev, struct list_head *hard_list)
static void yaffs_strip_deleted_objs(struct yaffs_dev *dev)
static int yaffs_has_null_parent(struct yaffs_dev *dev, struct yaffs_obj *obj)
static void yaffs_fix_hanging_objs(struct yaffs_dev *dev)
static void yaffs_del_dir_contents(struct yaffs_obj *dir)
static void yaffs_empty_l_n_f(struct yaffs_dev *dev)
struct yaffs_obj *yaffs_find_by_name(struct yaffs_obj *directory,
const YCHAR *name)
struct yaffs_obj *yaffs_get_equivalent_obj(struct yaffs_obj *obj)
static void yaffs_fix_null_name(struct yaffs_obj *obj, YCHAR *name,
int buffer_size)
int yaffs_get_obj_name(struct yaffs_obj *obj, YCHAR *name, int buffer_size)
loff_t yaffs_get_obj_length(struct yaffs_obj *obj)
int yaffs_get_obj_link_count(struct yaffs_obj *obj)
int yaffs_get_obj_inode(struct yaffs_obj *obj)
unsigned yaffs_get_obj_type(struct yaffs_obj *obj)
YCHAR *yaffs_get_symlink_alias(struct yaffs_obj *obj)
static int yaffs_check_dev_fns(struct yaffs_dev *dev)
static int yaffs_create_initial_dir(struct yaffs_dev *dev)
int yaffs_guts_ll_init(struct yaffs_dev *dev)
int yaffs_guts_format_dev(struct yaffs_dev *dev)
int yaffs_guts_initialise(struct yaffs_dev *dev)
void yaffs_deinitialise(struct yaffs_dev *dev)
int yaffs_count_free_chunks(struct yaffs_dev *dev)
int yaffs_get_n_free_chunks(struct yaffs_dev *dev)
void yaffs_oh_size_load(struct yaffs_dev *dev,
struct yaffs_obj_hdr *oh,
loff_t fsize,
int do_endian)
loff_t yaffs_oh_to_size(struct yaffs_dev *dev, struct yaffs_obj_hdr *oh,
int do_endian)
void yaffs_count_blocks_by_state(struct yaffs_dev *dev, int bs[10])
