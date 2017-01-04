#    define __unused			__attribute__((unused))
enum ;
MODULE_AUTHOR("Boaz Harrosh <bharrosh@panasas.com>");
MODULE_DESCRIPTION("open-osd initiator library libosd.ko");
MODULE_LICENSE("GPL");
static inline void build_test(void)
static const char *_osd_ver_desc(struct osd_request *or)
#define ATTR_DEF_RI(id, len) ATTR_DEF(OSD_APAGE_ROOT_INFORMATION, id, len)
static int _osd_get_print_system_info(struct osd_dev *od,
void *caps, struct osd_dev_info *odi)
int osd_auto_detect_ver(struct osd_dev *od,
void *caps, struct osd_dev_info *odi)
EXPORT_SYMBOL(osd_auto_detect_ver);
static unsigned _osd_req_cdb_len(struct osd_request *or)
static unsigned _osd_req_alist_elem_size(struct osd_request *or, unsigned len)
static void _osd_req_alist_elem_encode(struct osd_request *or,
void *attr_last, const struct osd_attr *oa)
static int _osd_req_alist_elem_decode(struct osd_request *or,
void *cur_p, struct osd_attr *oa, unsigned max_bytes)
static unsigned _osd_req_alist_size(struct osd_request *or, void *list_head)
static unsigned _osd_req_sizeof_alist_header(struct osd_request *or)
static void _osd_req_set_alist_type(struct osd_request *or,
void *list, int list_type)
static bool _osd_req_is_alist_type(struct osd_request *or,
void *list, int list_type)
static void _osd_req_encode_olist(struct osd_request *or,
struct osd_obj_id_list *list)
static osd_cdb_offset osd_req_encode_offset(struct osd_request *or,
u64 offset, unsigned *padding)
static struct osd_security_parameters *
_osd_req_sec_params(struct osd_request *or)
void osd_dev_init(struct osd_dev *osdd, struct scsi_device *scsi_device)
EXPORT_SYMBOL(osd_dev_init);
void osd_dev_fini(struct osd_dev *osdd)
EXPORT_SYMBOL(osd_dev_fini);
static struct osd_request *_osd_request_alloc(gfp_t gfp)
static void _osd_request_free(struct osd_request *or)
struct osd_request *osd_start_request(struct osd_dev *dev, gfp_t gfp)
EXPORT_SYMBOL(osd_start_request);
static void _osd_free_seg(struct osd_request *or __unused,
struct _osd_req_data_segment *seg)
static void _put_request(struct request *rq)
void osd_end_request(struct osd_request *or)
EXPORT_SYMBOL(osd_end_request);
static void _set_error_resid(struct osd_request *or, struct request *req,
int error)
int osd_execute_request(struct osd_request *or)
EXPORT_SYMBOL(osd_execute_request);
static void osd_request_async_done(struct request *req, int error)
int osd_execute_request_async(struct osd_request *or,
osd_req_done_fn *done, void *private)
EXPORT_SYMBOL(osd_execute_request_async);
u8 sg_out_pad_buffer[1 << OSDv1_OFFSET_MIN_SHIFT];
u8 sg_in_pad_buffer[1 << OSDv1_OFFSET_MIN_SHIFT];
static int _osd_realloc_seg(struct osd_request *or,
struct _osd_req_data_segment *seg, unsigned max_bytes)
static int _alloc_cdb_cont(struct osd_request *or, unsigned total_bytes)
static int _alloc_set_attr_list(struct osd_request *or,
const struct osd_attr *oa, unsigned nelem, unsigned add_bytes)
static int _alloc_get_attr_desc(struct osd_request *or, unsigned max_bytes)
static int _alloc_get_attr_list(struct osd_request *or)
static void _osdv1_req_encode_common(struct osd_request *or,
__be16 act, const struct osd_obj_id *obj, u64 offset, u64 len)
static void _osdv2_req_encode_common(struct osd_request *or,
__be16 act, const struct osd_obj_id *obj, u64 offset, u64 len)
static void _osd_req_encode_common(struct osd_request *or,
__be16 act, const struct osd_obj_id *obj, u64 offset, u64 len)
void osd_req_format(struct osd_request *or, u64 tot_capacity)
EXPORT_SYMBOL(osd_req_format);
int osd_req_list_dev_partitions(struct osd_request *or,
osd_id initial_id, struct osd_obj_id_list *list, unsigned nelem)
EXPORT_SYMBOL(osd_req_list_dev_partitions);
static void _osd_req_encode_flush(struct osd_request *or,
enum osd_options_flush_scope_values op)
void osd_req_flush_obsd(struct osd_request *or,
enum osd_options_flush_scope_values op)
EXPORT_SYMBOL(osd_req_flush_obsd);
static void _osd_req_encode_partition(struct osd_request *or,
__be16 act, osd_id partition)
void osd_req_create_partition(struct osd_request *or, osd_id partition)
EXPORT_SYMBOL(osd_req_create_partition);
void osd_req_remove_partition(struct osd_request *or, osd_id partition)
EXPORT_SYMBOL(osd_req_remove_partition);
static int _osd_req_list_objects(struct osd_request *or,
__be16 action, const struct osd_obj_id *obj, osd_id initial_id,
struct osd_obj_id_list *list, unsigned nelem)
int osd_req_list_partition_collections(struct osd_request *or,
osd_id partition, osd_id initial_id, struct osd_obj_id_list *list,
unsigned nelem)
EXPORT_SYMBOL(osd_req_list_partition_collections);
int osd_req_list_partition_objects(struct osd_request *or,
osd_id partition, osd_id initial_id, struct osd_obj_id_list *list,
unsigned nelem)
EXPORT_SYMBOL(osd_req_list_partition_objects);
void osd_req_flush_partition(struct osd_request *or,
osd_id partition, enum osd_options_flush_scope_values op)
EXPORT_SYMBOL(osd_req_flush_partition);
int osd_req_list_collection_objects(struct osd_request *or,
const struct osd_obj_id *obj, osd_id initial_id,
struct osd_obj_id_list *list, unsigned nelem)
EXPORT_SYMBOL(osd_req_list_collection_objects);
void osd_req_flush_collection(struct osd_request *or,
const struct osd_obj_id *obj, enum osd_options_flush_scope_values op)
EXPORT_SYMBOL(osd_req_flush_collection);
void osd_req_create_object(struct osd_request *or, struct osd_obj_id *obj)
EXPORT_SYMBOL(osd_req_create_object);
void osd_req_remove_object(struct osd_request *or, struct osd_obj_id *obj)
EXPORT_SYMBOL(osd_req_remove_object);
void osd_req_write(struct osd_request *or,
const struct osd_obj_id *obj, u64 offset,
struct bio *bio, u64 len)
EXPORT_SYMBOL(osd_req_write);
int osd_req_write_kern(struct osd_request *or,
const struct osd_obj_id *obj, u64 offset, void* buff, u64 len)
EXPORT_SYMBOL(osd_req_write_kern);
void osd_req_flush_object(struct osd_request *or,
const struct osd_obj_id *obj, enum osd_options_flush_scope_values op, u64 offset, u64 len)
EXPORT_SYMBOL(osd_req_flush_object);
void osd_req_read(struct osd_request *or,
const struct osd_obj_id *obj, u64 offset,
struct bio *bio, u64 len)
EXPORT_SYMBOL(osd_req_read);
int osd_req_read_kern(struct osd_request *or,
const struct osd_obj_id *obj, u64 offset, void* buff, u64 len)
EXPORT_SYMBOL(osd_req_read_kern);
static int _add_sg_continuation_descriptor(struct osd_request *or,
const struct osd_sg_entry *sglist, unsigned numentries, u64 *len)
static int _osd_req_finalize_cdb_cont(struct osd_request *or, const u8 *cap_key)
int osd_req_write_sg(struct osd_request *or,
const struct osd_obj_id *obj, struct bio *bio,
const struct osd_sg_entry *sglist, unsigned numentries)
EXPORT_SYMBOL(osd_req_write_sg);
int osd_req_read_sg(struct osd_request *or,
const struct osd_obj_id *obj, struct bio *bio,
const struct osd_sg_entry *sglist, unsigned numentries)
EXPORT_SYMBOL(osd_req_read_sg);
static struct bio *_create_sg_bios(struct osd_request *or,
void **buff, const struct osd_sg_entry *sglist, unsigned numentries)
int osd_req_write_sg_kern(struct osd_request *or,
const struct osd_obj_id *obj, void **buff,
const struct osd_sg_entry *sglist, unsigned numentries)
EXPORT_SYMBOL(osd_req_write_sg_kern);
int osd_req_read_sg_kern(struct osd_request *or,
const struct osd_obj_id *obj, void **buff,
const struct osd_sg_entry *sglist, unsigned numentries)
EXPORT_SYMBOL(osd_req_read_sg_kern);
void osd_req_get_attributes(struct osd_request *or,
const struct osd_obj_id *obj)
EXPORT_SYMBOL(osd_req_get_attributes);
void osd_req_set_attributes(struct osd_request *or,
const struct osd_obj_id *obj)
EXPORT_SYMBOL(osd_req_set_attributes);
int osd_req_add_set_attr_list(struct osd_request *or,
const struct osd_attr *oa, unsigned nelem)
EXPORT_SYMBOL(osd_req_add_set_attr_list);
static int _req_append_segment(struct osd_request *or,
unsigned padding, struct _osd_req_data_segment *seg,
struct _osd_req_data_segment *last_seg, struct _osd_io_info *io)
static int _osd_req_finalize_set_attr_list(struct osd_request *or)
int osd_req_add_get_attr_list(struct osd_request *or,
const struct osd_attr *oa, unsigned nelem)
EXPORT_SYMBOL(osd_req_add_get_attr_list);
static int _osd_req_finalize_get_attr_list(struct osd_request *or)
int osd_req_decode_get_attr_list(struct osd_request *or,
struct osd_attr *oa, int *nelem, void **iterator)
EXPORT_SYMBOL(osd_req_decode_get_attr_list);
int osd_req_add_get_attr_page(struct osd_request *or,
u32 page_id, void *attar_page, unsigned max_page_len,
const struct osd_attr *set_one_attr)
EXPORT_SYMBOL(osd_req_add_get_attr_page);
static int _osd_req_finalize_attr_page(struct osd_request *or)
static inline void osd_sec_parms_set_out_offset(bool is_v1,
struct osd_security_parameters *sec_parms, osd_cdb_offset offset)
static inline void osd_sec_parms_set_in_offset(bool is_v1,
struct osd_security_parameters *sec_parms, osd_cdb_offset offset)
static int _osd_req_finalize_data_integrity(struct osd_request *or,
bool has_in, bool has_out, struct bio *out_data_bio, u64 out_data_bytes,
const u8 *cap_key)
static struct request *_make_request(struct request_queue *q, bool has_write,
struct _osd_io_info *oii, gfp_t flags)
static int _init_blk_request(struct osd_request *or,
bool has_in, bool has_out)
int osd_finalize_request(struct osd_request *or,
u8 options, const void *cap, const u8 *cap_key)
EXPORT_SYMBOL(osd_finalize_request);
static bool _is_osd_security_code(int code)
#define OSD_SENSE_PRINT1(fmt, a...) \
do  while (0)
#define OSD_SENSE_PRINT2(fmt, a...) OSD_SENSE_PRINT1("    " fmt, ##a)
int osd_req_decode_sense_full(struct osd_request *or,
struct osd_sense_info *osi, bool silent,
struct osd_obj_id *bad_obj_list __unused, int max_obj __unused,
struct osd_attr *bad_attr_list, int max_attr)
EXPORT_SYMBOL(osd_req_decode_sense_full);
enum ;
enum ;
void osd_sec_init_nosec_doall_caps(void *caps,
const struct osd_obj_id *obj, bool is_collection, const bool is_v1)
EXPORT_SYMBOL(osd_sec_init_nosec_doall_caps);
void osd_set_caps(struct osd_cdb *cdb, const void *caps)
bool osd_is_sec_alldata(struct osd_security_parameters *sec_parms __unused)
void osd_sec_sign_cdb(struct osd_cdb *ocdb __unused, const u8 *cap_key __unused)
void osd_sec_sign_data(void *data_integ __unused,
struct bio *bio __unused, const u8 *cap_key __unused)
osd_cdb_offset __osd_encode_offset(
u64 offset, unsigned *padding, int min_shift, int max_shift)
