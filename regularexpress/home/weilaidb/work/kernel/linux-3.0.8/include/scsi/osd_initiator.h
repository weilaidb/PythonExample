#define __OSD_INITIATOR_H__
#define OSD_VER1_SUPPORT y
enum osd_std_version ;
struct osd_dev ;
struct osd_dev_info ;
struct osd_dev *osduld_path_lookup(const char *dev_name);
struct osd_dev *osduld_info_lookup(const struct osd_dev_info *odi);
void osduld_put_device(struct osd_dev *od);
const struct osd_dev_info *osduld_device_info(struct osd_dev *od);
bool osduld_device_same(struct osd_dev *od, const struct osd_dev_info *odi);
typedef int (do_test_fn)(struct osd_dev *od, unsigned cmd, unsigned long arg);
int osduld_register_test(unsigned ioctl, do_test_fn *do_test);
void osduld_unregister_test(unsigned ioctl);
void osd_dev_init(struct osd_dev *od, struct scsi_device *scsi_device);
void osd_dev_fini(struct osd_dev *od);
int osd_auto_detect_ver(struct osd_dev *od,
void *caps, struct osd_dev_info *odi);
static inline struct request_queue *osd_request_queue(struct osd_dev *od)
static inline void osd_dev_set_ver(struct osd_dev *od, enum osd_std_version v)
static inline bool osd_dev_is_ver1(struct osd_dev *od)
struct osd_request;
typedef void (osd_req_done_fn)(struct osd_request *or, void *private);
struct osd_request ;
static inline bool osd_req_is_ver1(struct osd_request *or)
struct osd_request *osd_start_request(struct osd_dev *od, gfp_t gfp);
enum osd_req_options ;
int osd_finalize_request(struct osd_request *or,
u8 options, const void *cap, const u8 *cap_key);
int osd_execute_request(struct osd_request *or);
int osd_execute_request_async(struct osd_request *or,
osd_req_done_fn *done, void *private);
enum osd_err_priority ;
struct osd_sense_info ;
int osd_req_decode_sense_full(struct osd_request *or,
struct osd_sense_info *osi, bool silent,
struct osd_obj_id *bad_obj_list, int max_obj,
struct osd_attr *bad_attr_list, int max_attr);
static inline int osd_req_decode_sense(struct osd_request *or,
struct osd_sense_info *osi)
void osd_end_request(struct osd_request *or);
void osd_req_set_master_seed_xchg(struct osd_request *or, ...);
void osd_req_set_master_key(struct osd_request *or, ...);
void osd_req_format(struct osd_request *or, u64 tot_capacity);
int osd_req_list_dev_partitions(struct osd_request *or,
osd_id initial_id, struct osd_obj_id_list *list, unsigned nelem);
void osd_req_flush_obsd(struct osd_request *or,
enum osd_options_flush_scope_values);
void osd_req_perform_scsi_command(struct osd_request *or,
const u8 *cdb, ...);
void osd_req_task_management(struct osd_request *or, ...);
void osd_req_create_partition(struct osd_request *or, osd_id partition);
void osd_req_remove_partition(struct osd_request *or, osd_id partition);
void osd_req_set_partition_key(struct osd_request *or,
osd_id partition, u8 new_key_id[OSD_CRYPTO_KEYID_SIZE],
u8 seed[OSD_CRYPTO_SEED_SIZE]);
int osd_req_list_partition_collections(struct osd_request *or,
osd_id partition, osd_id initial_id, struct osd_obj_id_list *list,
unsigned nelem);
int osd_req_list_partition_objects(struct osd_request *or,
osd_id partition, osd_id initial_id, struct osd_obj_id_list *list,
unsigned nelem);
void osd_req_flush_partition(struct osd_request *or,
osd_id partition, enum osd_options_flush_scope_values);
void osd_req_create_collection(struct osd_request *or,
const struct osd_obj_id *);
void osd_req_remove_collection(struct osd_request *or,
const struct osd_obj_id *);
int osd_req_list_collection_objects(struct osd_request *or,
const struct osd_obj_id *, osd_id initial_id,
struct osd_obj_id_list *list, unsigned nelem);
void osd_req_query(struct osd_request *or, ...);
void osd_req_flush_collection(struct osd_request *or,
const struct osd_obj_id *, enum osd_options_flush_scope_values);
void osd_req_get_member_attrs(struct osd_request *or, ...);
void osd_req_set_member_attrs(struct osd_request *or, ...);
void osd_req_create_object(struct osd_request *or, struct osd_obj_id *);
void osd_req_remove_object(struct osd_request *or, struct osd_obj_id *);
void osd_req_write(struct osd_request *or,
const struct osd_obj_id *obj, u64 offset, struct bio *bio, u64 len);
int osd_req_write_kern(struct osd_request *or,
const struct osd_obj_id *obj, u64 offset, void *buff, u64 len);
void osd_req_append(struct osd_request *or,
const struct osd_obj_id *, struct bio *data_out);
void osd_req_create_write(struct osd_request *or,
const struct osd_obj_id *, struct bio *data_out, u64 offset);
void osd_req_clear(struct osd_request *or,
const struct osd_obj_id *, u64 offset, u64 len);
void osd_req_punch(struct osd_request *or,
const struct osd_obj_id *, u64 offset, u64 len);
void osd_req_flush_object(struct osd_request *or,
const struct osd_obj_id *, enum osd_options_flush_scope_values, u64 offset, u64 len);
void osd_req_read(struct osd_request *or,
const struct osd_obj_id *obj, u64 offset, struct bio *bio, u64 len);
int osd_req_read_kern(struct osd_request *or,
const struct osd_obj_id *obj, u64 offset, void *buff, u64 len);
int osd_req_write_sg(struct osd_request *or,
const struct osd_obj_id *obj, struct bio *bio,
const struct osd_sg_entry *sglist, unsigned numentries);
int osd_req_read_sg(struct osd_request *or,
const struct osd_obj_id *obj, struct bio *bio,
const struct osd_sg_entry *sglist, unsigned numentries);
int osd_req_write_sg_kern(struct osd_request *or,
const struct osd_obj_id *obj, void **buff,
const struct osd_sg_entry *sglist, unsigned numentries);
int osd_req_read_sg_kern(struct osd_request *or,
const struct osd_obj_id *obj, void **buff,
const struct osd_sg_entry *sglist, unsigned numentries);
void osd_req_get_attributes(struct osd_request *or, const struct osd_obj_id *);
void osd_req_set_attributes(struct osd_request *or, const struct osd_obj_id *);
int osd_req_add_set_attr_list(struct osd_request *or,
const struct osd_attr *, unsigned nelem);
int osd_req_add_get_attr_list(struct osd_request *or,
const struct osd_attr *, unsigned nelem);
int osd_req_decode_get_attr_list(struct osd_request *or,
struct osd_attr *, int *nelem, void **iterator);
int osd_req_add_get_attr_page(struct osd_request *or,
u32 page_id, void *attr_page_data, unsigned max_page_len,
const struct osd_attr *set_one);
