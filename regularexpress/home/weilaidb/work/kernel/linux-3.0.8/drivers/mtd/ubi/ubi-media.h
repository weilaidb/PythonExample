#define __UBI_MEDIA_H__
#define UBI_VERSION 1
#define UBI_MAX_ERASECOUNTER 0x7FFFFFFF
#define UBI_CRC32_INIT 0xFFFFFFFFU
#define UBI_EC_HDR_MAGIC  0x55424923
#define UBI_VID_HDR_MAGIC 0x55424921
enum ;
enum ;
enum ;
#define UBI_EC_HDR_SIZE  sizeof(struct ubi_ec_hdr)
#define UBI_VID_HDR_SIZE sizeof(struct ubi_vid_hdr)
#define UBI_EC_HDR_SIZE_CRC  (UBI_EC_HDR_SIZE  - sizeof(__be32))
#define UBI_VID_HDR_SIZE_CRC (UBI_VID_HDR_SIZE - sizeof(__be32))
struct ubi_ec_hdr  __packed;
struct ubi_vid_hdr  __packed;
#define UBI_INT_VOL_COUNT 1
#define UBI_INTERNAL_VOL_START (0x7FFFFFFF - 4096)
#define UBI_LAYOUT_VOLUME_ID     UBI_INTERNAL_VOL_START
#define UBI_LAYOUT_VOLUME_TYPE   UBI_VID_DYNAMIC
#define UBI_LAYOUT_VOLUME_ALIGN  1
#define UBI_LAYOUT_VOLUME_EBS    2
#define UBI_LAYOUT_VOLUME_NAME   "layout volume"
#define UBI_LAYOUT_VOLUME_COMPAT UBI_COMPAT_REJECT
#define UBI_MAX_VOLUMES 128
#define UBI_VOL_NAME_MAX 127
#define UBI_VTBL_RECORD_SIZE sizeof(struct ubi_vtbl_record)
#define UBI_VTBL_RECORD_SIZE_CRC (UBI_VTBL_RECORD_SIZE - sizeof(__be32))
struct ubi_vtbl_record  __packed;
