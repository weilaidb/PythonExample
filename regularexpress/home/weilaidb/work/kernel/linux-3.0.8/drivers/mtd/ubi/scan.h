#define __UBI_SCAN_H__
#define UBI_SCAN_UNKNOWN_EC (-1)
struct ubi_scan_leb ;
struct ubi_scan_volume ;
struct ubi_scan_info ;
struct ubi_device;
struct ubi_vid_hdr;
static inline void ubi_scan_move_to_list(struct ubi_scan_volume *sv,
struct ubi_scan_leb *seb,
struct list_head *list)
int ubi_scan_add_used(struct ubi_device *ubi, struct ubi_scan_info *si,
int pnum, int ec, const struct ubi_vid_hdr *vid_hdr,
int bitflips);
struct ubi_scan_volume *ubi_scan_find_sv(const struct ubi_scan_info *si,
int vol_id);
struct ubi_scan_leb *ubi_scan_find_seb(const struct ubi_scan_volume *sv,
int lnum);
void ubi_scan_rm_volume(struct ubi_scan_info *si, struct ubi_scan_volume *sv);
struct ubi_scan_leb *ubi_scan_get_free_peb(struct ubi_device *ubi,
struct ubi_scan_info *si);
int ubi_scan_erase_peb(struct ubi_device *ubi, const struct ubi_scan_info *si,
int pnum, int ec);
struct ubi_scan_info *ubi_scan(struct ubi_device *ubi);
void ubi_scan_destroy_si(struct ubi_scan_info *si);
