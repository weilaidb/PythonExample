#define __OSD_PROTOCOL_H__
enum ;
enum osd_options_byte ;
enum osd_options_byte_isolation ;
enum osd_options_flush_scope_values ;
enum ;
enum osd_attributes_mode ;
typedef __be32 __bitwise osd_cdb_offset;
enum ;
osd_cdb_offset __osd_encode_offset(u64 offset, unsigned *padding,
int min_shift, int max_shift);
static inline osd_cdb_offset osd_encode_offset_v1(u64 offset, unsigned *padding)
static inline osd_cdb_offset osd_encode_offset_v2(u64 offset, unsigned *padding)
struct osd_cdb_head  __packed;
struct osdv1_security_parameters  __packed;
struct osdv2_security_parameters  __packed;
struct osd_security_parameters ;
struct osdv1_cdb  __packed;
struct osdv2_cdb  __packed;
struct osd_cdb  __packed;
static inline struct osd_cdb_head *osd_cdb_head(struct osd_cdb *ocdb)
#define OSD_ACT___(Name, Num) \
OSD_ACT_##Name = __constant_cpu_to_be16(0x8880 + Num), \
OSDv1_ACT_##Name = __constant_cpu_to_be16(0x8800 + Num),
#define OSD_ACT_V2(Name, Num) \
OSD_ACT_##Name = __constant_cpu_to_be16(0x8880 + Num),
#define OSD_ACT_V1_V2(Name, Num1, Num2) \
OSD_ACT_##Name = __constant_cpu_to_be16(Num2), \
OSDv1_ACT_##Name = __constant_cpu_to_be16(Num1),
enum osd_service_actions ;
struct osd_attributes_list_attrid  __packed;
struct osdv1_attributes_list_element  __packed;
struct osdv2_attributes_list_element  __packed;
enum ;
enum ;
static inline unsigned osdv1_attr_list_elem_size(unsigned len)
static inline unsigned osdv2_attr_list_elem_size(unsigned len)
enum osd_attr_list_types ;
struct osd_attributes_list_multi_header ;
struct osdv1_attributes_list_header  __packed;
static inline unsigned osdv1_list_size(struct osdv1_attributes_list_header *h)
struct osdv2_attributes_list_header  __packed;
static inline unsigned osdv2_list_size(struct osdv2_attributes_list_header *h)
enum ;
struct osd_obj_id_list  __packed;
static inline bool osd_is_obj_list_done(struct osd_obj_id_list *list,
bool *is_changed)
struct osd_data_out_integrity_info  __packed;
static inline int osd_data_out_integrity_info_sizeof(bool is_ver1)
struct osd_data_in_integrity_info  __packed;
static inline int osd_data_in_integrity_info_sizeof(bool is_ver1)
struct osd_timestamp  __packed;
struct osd_key_identifier  __packed;
enum ;
enum ;
enum object_type ;
enum osd_capability_bit_masks ;
enum ;
struct osd_capability_head  __packed;
struct osdv1_cap_object_descriptor  __packed;
struct osd_cap_object_descriptor  __packed;
struct osdv1_capability  __packed;
struct osd_capability  __packed;
static inline void osd_sec_set_caps(struct osd_capability_head *cap,
u16 bit_mask)
enum osd_continuation_segment_format ;
struct osd_continuation_segment_header  __packed;
enum osd_continuation_descriptor_type ;
struct osd_continuation_descriptor_header  __packed;
struct osd_sg_list_entry ;
struct osd_sg_continuation_descriptor ;
