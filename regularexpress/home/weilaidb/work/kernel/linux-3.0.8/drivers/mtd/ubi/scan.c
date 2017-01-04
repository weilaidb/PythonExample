static int paranoid_check_si(struct ubi_device *ubi, struct ubi_scan_info *si);
#define paranoid_check_si(ubi, si) 0
static struct ubi_ec_hdr *ech;
static struct ubi_vid_hdr *vidh;
static int add_to_list(struct ubi_scan_info *si, int pnum, int ec, int to_head,
struct list_head *list)
static int add_corrupted(struct ubi_scan_info *si, int pnum, int ec)
static int validate_vid_hdr(const struct ubi_vid_hdr *vid_hdr,
const struct ubi_scan_volume *sv, int pnum)
static struct ubi_scan_volume *add_volume(struct ubi_scan_info *si, int vol_id,
int pnum,
const struct ubi_vid_hdr *vid_hdr)
static int compare_lebs(struct ubi_device *ubi, const struct ubi_scan_leb *seb,
int pnum, const struct ubi_vid_hdr *vid_hdr)
int ubi_scan_add_used(struct ubi_device *ubi, struct ubi_scan_info *si,
int pnum, int ec, const struct ubi_vid_hdr *vid_hdr,
int bitflips)
struct ubi_scan_volume *ubi_scan_find_sv(const struct ubi_scan_info *si,
int vol_id)
struct ubi_scan_leb *ubi_scan_find_seb(const struct ubi_scan_volume *sv,
int lnum)
void ubi_scan_rm_volume(struct ubi_scan_info *si, struct ubi_scan_volume *sv)
int ubi_scan_erase_peb(struct ubi_device *ubi, const struct ubi_scan_info *si,
int pnum, int ec)
struct ubi_scan_leb *ubi_scan_get_free_peb(struct ubi_device *ubi,
struct ubi_scan_info *si)
static int check_corruption(struct ubi_device *ubi, struct ubi_vid_hdr *vid_hdr,
int pnum)
static int process_eb(struct ubi_device *ubi, struct ubi_scan_info *si,
int pnum)
static int check_what_we_have(struct ubi_device *ubi, struct ubi_scan_info *si)
struct ubi_scan_info *ubi_scan(struct ubi_device *ubi)
static void destroy_sv(struct ubi_scan_info *si, struct ubi_scan_volume *sv)
void ubi_scan_destroy_si(struct ubi_scan_info *si)
static int paranoid_check_si(struct ubi_device *ubi, struct ubi_scan_info *si)
