static void paranoid_vtbl_check(const struct ubi_device *ubi);
#define paranoid_vtbl_check(ubi)
static struct ubi_vtbl_record empty_vtbl_record;
int ubi_change_vtbl_record(struct ubi_device *ubi, int idx,
struct ubi_vtbl_record *vtbl_rec)
int ubi_vtbl_rename_volumes(struct ubi_device *ubi,
struct list_head *rename_list)
static int vtbl_check(const struct ubi_device *ubi,
const struct ubi_vtbl_record *vtbl)
static int create_vtbl(struct ubi_device *ubi, struct ubi_scan_info *si,
int copy, void *vtbl)
static struct ubi_vtbl_record *process_lvol(struct ubi_device *ubi,
struct ubi_scan_info *si,
struct ubi_scan_volume *sv)
static struct ubi_vtbl_record *create_empty_lvol(struct ubi_device *ubi,
struct ubi_scan_info *si)
static int init_volumes(struct ubi_device *ubi, const struct ubi_scan_info *si,
const struct ubi_vtbl_record *vtbl)
static int check_sv(const struct ubi_volume *vol,
const struct ubi_scan_volume *sv)
static int check_scanning_info(const struct ubi_device *ubi,
struct ubi_scan_info *si)
int ubi_read_volume_table(struct ubi_device *ubi, struct ubi_scan_info *si)
static void paranoid_vtbl_check(const struct ubi_device *ubi)
