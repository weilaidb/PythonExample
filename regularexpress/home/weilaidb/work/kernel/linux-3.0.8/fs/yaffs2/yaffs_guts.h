#define __YAFFS_GUTS_H__
#define YAFFS_OK	1
#define YAFFS_FAIL  0
#define YAFFS_MAGIC			0x5941ff53
#define YAFFS_NTNODES_LEVEL0		16
#define YAFFS_TNODES_LEVEL0_BITS	4
#define YAFFS_TNODES_LEVEL0_MASK	0xf
#define YAFFS_NTNODES_INTERNAL		(YAFFS_NTNODES_LEVEL0 / 2)
#define YAFFS_TNODES_INTERNAL_BITS	(YAFFS_TNODES_LEVEL0_BITS - 1)
#define YAFFS_TNODES_INTERNAL_MASK	0x7
#define YAFFS_TNODES_MAX_LEVEL		8
#define YAFFS_TNODES_MAX_BITS		(YAFFS_TNODES_LEVEL0_BITS + \
YAFFS_TNODES_INTERNAL_BITS * \
YAFFS_TNODES_MAX_LEVEL)
#define YAFFS_MAX_CHUNK_ID		((1 << YAFFS_TNODES_MAX_BITS) - 1)
#define YAFFS_MAX_FILE_SIZE_32		0x7fffffff
#define YAFFS_BYTES_PER_SPARE		16
#define YAFFS_BYTES_PER_CHUNK		512
#define YAFFS_CHUNK_SIZE_SHIFT		9
#define YAFFS_CHUNKS_PER_BLOCK		32
#define YAFFS_BYTES_PER_BLOCK	(YAFFS_CHUNKS_PER_BLOCK*YAFFS_BYTES_PER_CHUNK)
#define YAFFS_MIN_YAFFS2_CHUNK_SIZE	1024
#define YAFFS_MIN_YAFFS2_SPARE_SIZE	32
#define YAFFS_ALLOCATION_NOBJECTS	100
#define YAFFS_ALLOCATION_NTNODES	100
#define YAFFS_ALLOCATION_NLINKS		100
#define YAFFS_NOBJECT_BUCKETS		256
#define YAFFS_OBJECT_SPACE		0x40000
#define YAFFS_MAX_OBJECT_ID		(YAFFS_OBJECT_SPACE - 1)
#define YAFFS_SUMMARY_VERSION		1
#define YAFFS_MAX_NAME_LENGTH		127
#define YAFFS_MAX_ALIAS_LENGTH		79
#define YAFFS_MAX_NAME_LENGTH		255
#define YAFFS_MAX_ALIAS_LENGTH		159
#define YAFFS_SHORT_NAME_LENGTH		15
#define YAFFS_OBJECTID_ROOT		1
#define YAFFS_OBJECTID_LOSTNFOUND	2
#define YAFFS_OBJECTID_UNLINKED		3
#define YAFFS_OBJECTID_DELETED		4
#define YAFFS_OBJECTID_SUMMARY		0x10
#define YAFFS_OBJECTID_CHECKPOINT_DATA	0x20
#define YAFFS_SEQUENCE_CHECKPOINT_DATA	0x21
#define YAFFS_MAX_SHORT_OP_CACHES	20
#define YAFFS_N_TEMP_BUFFERS		6
#define YAFFS_WR_ATTEMPTS		(5*64)
#define YAFFS_LOWEST_SEQUENCE_NUMBER	0x00001000
#define YAFFS_HIGHEST_SEQUENCE_NUMBER	0xefffff00
#define YAFFS_SEQUENCE_BAD_BLOCK	0xffff0000
struct yaffs_cache ;
struct yaffs_tags ;
union yaffs_tags_union ;
enum yaffs_ecc_result ;
enum yaffs_obj_type ;
#define YAFFS_OBJECT_TYPE_MAX YAFFS_OBJECT_TYPE_SPECIAL
struct yaffs_ext_tags ;
struct yaffs_spare ;
struct yaffs_nand_spare ;
enum yaffs_block_state ;
#define	YAFFS_NUMBER_OF_BLOCK_STATES (YAFFS_BLOCK_STATE_DEAD + 1)
struct yaffs_block_info ;
union yaffs_block_info_union ;
struct yaffs_obj_hdr ;
struct yaffs_tnode ;
struct yaffs_file_var ;
struct yaffs_dir_var ;
struct yaffs_symlink_var ;
struct yaffs_hardlink_var ;
union yaffs_obj_var ;
struct yaffs_obj ;
struct yaffs_obj_bucket ;
struct yaffs_buffer ;
struct yaffs_param ;
struct yaffs_driver ;
struct yaffs_tags_handler ;
struct yaffs_dev ;
#define YAFFS_CHECKPOINT_VERSION	8
#define CHECKPOINT_VARIANT_BITS		0, 3
#define CHECKPOINT_DELETED_BITS		3, 1
#define CHECKPOINT_SOFT_DEL_BITS	4, 1
#define CHECKPOINT_UNLINKED_BITS	5, 1
#define CHECKPOINT_FAKE_BITS		6, 1
#define CHECKPOINT_RENAME_ALLOWED_BITS	7, 1
#define CHECKPOINT_UNLINK_ALLOWED_BITS	8, 1
#define CHECKPOINT_SERIAL_BITS		9, 8
struct yaffs_checkpt_obj ;
struct yaffs_checkpt_dev ;
struct yaffs_checkpt_validity ;
struct yaffs_shadow_fixer ;
struct yaffs_xattr_mod ;
int yaffs_guts_initialise(struct yaffs_dev *dev);
void yaffs_deinitialise(struct yaffs_dev *dev);
int yaffs_get_n_free_chunks(struct yaffs_dev *dev);
int yaffs_rename_obj(struct yaffs_obj *old_dir, const YCHAR * old_name,
struct yaffs_obj *new_dir, const YCHAR * new_name);
int yaffs_unlink_obj(struct yaffs_obj *obj);
int yaffs_unlinker(struct yaffs_obj *dir, const YCHAR * name);
int yaffs_del_obj(struct yaffs_obj *obj);
struct yaffs_obj *yaffs_retype_obj(struct yaffs_obj *obj,
enum yaffs_obj_type type);
int yaffs_get_obj_name(struct yaffs_obj *obj, YCHAR * name, int buffer_size);
loff_t yaffs_get_obj_length(struct yaffs_obj *obj);
int yaffs_get_obj_inode(struct yaffs_obj *obj);
unsigned yaffs_get_obj_type(struct yaffs_obj *obj);
int yaffs_get_obj_link_count(struct yaffs_obj *obj);
int yaffs_file_rd(struct yaffs_obj *obj, u8 * buffer, loff_t offset,
int n_bytes);
int yaffs_wr_file(struct yaffs_obj *obj, const u8 * buffer, loff_t offset,
int n_bytes, int write_trhrough);
int yaffs_resize_file(struct yaffs_obj *obj, loff_t new_size);
struct yaffs_obj *yaffs_create_file(struct yaffs_obj *parent,
const YCHAR *name, u32 mode, u32 uid,
u32 gid);
int yaffs_flush_file(struct yaffs_obj *in,
int update_time,
int data_sync,
int discard_cache);
void yaffs_flush_whole_cache(struct yaffs_dev *dev, int discard);
int yaffs_checkpoint_save(struct yaffs_dev *dev);
int yaffs_checkpoint_restore(struct yaffs_dev *dev);
struct yaffs_obj *yaffs_create_dir(struct yaffs_obj *parent, const YCHAR *name,
u32 mode, u32 uid, u32 gid);
struct yaffs_obj *yaffs_find_by_name(struct yaffs_obj *the_dir,
const YCHAR *name);
struct yaffs_obj *yaffs_find_by_number(struct yaffs_dev *dev, u32 number);
struct yaffs_obj *yaffs_link_obj(struct yaffs_obj *parent, const YCHAR *name,
struct yaffs_obj *equiv_obj);
struct yaffs_obj *yaffs_get_equivalent_obj(struct yaffs_obj *obj);
struct yaffs_obj *yaffs_create_symlink(struct yaffs_obj *parent,
const YCHAR *name, u32 mode, u32 uid,
u32 gid, const YCHAR *alias);
YCHAR *yaffs_get_symlink_alias(struct yaffs_obj *obj);
struct yaffs_obj *yaffs_create_special(struct yaffs_obj *parent,
const YCHAR *name, u32 mode, u32 uid,
u32 gid, u32 rdev);
int yaffs_set_xattrib(struct yaffs_obj *obj, const YCHAR *name,
const void *value, int size, int flags);
int yaffs_get_xattrib(struct yaffs_obj *obj, const YCHAR *name, void *value,
int size);
int yaffs_list_xattrib(struct yaffs_obj *obj, char *buffer, int size);
int yaffs_remove_xattrib(struct yaffs_obj *obj, const YCHAR *name);
struct yaffs_obj *yaffs_root(struct yaffs_dev *dev);
struct yaffs_obj *yaffs_lost_n_found(struct yaffs_dev *dev);
void yaffs_handle_defered_free(struct yaffs_obj *obj);
void yaffs_update_dirty_dirs(struct yaffs_dev *dev);
int yaffs_bg_gc(struct yaffs_dev *dev, unsigned urgency);
int yaffs_dump_obj(struct yaffs_obj *obj);
void yaffs_guts_test(struct yaffs_dev *dev);
int yaffs_guts_ll_init(struct yaffs_dev *dev);
void yaffs_chunk_del(struct yaffs_dev *dev, int chunk_id, int mark_flash,
int lyn);
int yaffs_check_ff(u8 *buffer, int n_bytes);
void yaffs_handle_chunk_error(struct yaffs_dev *dev,
struct yaffs_block_info *bi);
u8 *yaffs_get_temp_buffer(struct yaffs_dev *dev);
void yaffs_release_temp_buffer(struct yaffs_dev *dev, u8 *buffer);
struct yaffs_obj *yaffs_find_or_create_by_number(struct yaffs_dev *dev,
int number,
enum yaffs_obj_type type);
int yaffs_put_chunk_in_file(struct yaffs_obj *in, int inode_chunk,
int nand_chunk, int in_scan);
void yaffs_set_obj_name(struct yaffs_obj *obj, const YCHAR *name);
void yaffs_set_obj_name_from_oh(struct yaffs_obj *obj,
const struct yaffs_obj_hdr *oh);
void yaffs_add_obj_to_dir(struct yaffs_obj *directory, struct yaffs_obj *obj);
YCHAR *yaffs_clone_str(const YCHAR *str);
void yaffs_link_fixup(struct yaffs_dev *dev, struct list_head *hard_list);
void yaffs_block_became_dirty(struct yaffs_dev *dev, int block_no);
int yaffs_update_oh(struct yaffs_obj *in, const YCHAR *name,
int force, int is_shrink, int shadows,
struct yaffs_xattr_mod *xop);
void yaffs_handle_shadowed_obj(struct yaffs_dev *dev, int obj_id,
int backward_scanning);
int yaffs_check_alloc_available(struct yaffs_dev *dev, int n_chunks);
struct yaffs_tnode *yaffs_get_tnode(struct yaffs_dev *dev);
struct yaffs_tnode *yaffs_add_find_tnode_0(struct yaffs_dev *dev,
struct yaffs_file_var *file_struct,
u32 chunk_id,
struct yaffs_tnode *passed_tn);
int yaffs_do_file_wr(struct yaffs_obj *in, const u8 *buffer, loff_t offset,
int n_bytes, int write_trhrough);
void yaffs_resize_file_down(struct yaffs_obj *obj, loff_t new_size);
void yaffs_skip_rest_of_block(struct yaffs_dev *dev);
int yaffs_count_free_chunks(struct yaffs_dev *dev);
struct yaffs_tnode *yaffs_find_tnode_0(struct yaffs_dev *dev,
struct yaffs_file_var *file_struct,
u32 chunk_id);
u32 yaffs_get_group_base(struct yaffs_dev *dev, struct yaffs_tnode *tn,
unsigned pos);
int yaffs_is_non_empty_dir(struct yaffs_obj *obj);
int yaffs_guts_format_dev(struct yaffs_dev *dev);
void yaffs_addr_to_chunk(struct yaffs_dev *dev, loff_t addr,
int *chunk_out, u32 *offset_out);
void yaffs_oh_size_load(struct yaffs_dev *dev, struct yaffs_obj_hdr *oh,
loff_t fsize, int do_endian);
loff_t yaffs_oh_to_size(struct yaffs_dev *dev, struct yaffs_obj_hdr *oh,
int do_endian);
loff_t yaffs_max_file_size(struct yaffs_dev *dev);
void yaffs_count_blocks_by_state(struct yaffs_dev *dev, int bs[10]);
int yaffs_find_chunk_in_file(struct yaffs_obj *in, int inode_chunk,
struct yaffs_ext_tags *tags);
