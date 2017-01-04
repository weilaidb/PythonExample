const char *tomoyo_path_keyword[TOMOYO_MAX_PATH_OPERATION] = ;
const char *tomoyo_mkdev_keyword[TOMOYO_MAX_MKDEV_OPERATION] = ;
const char *tomoyo_path2_keyword[TOMOYO_MAX_PATH2_OPERATION] = ;
const char *tomoyo_path_number_keyword[TOMOYO_MAX_PATH_NUMBER_OPERATION] = ;
static const u8 tomoyo_p2mac[TOMOYO_MAX_PATH_OPERATION] = ;
static const u8 tomoyo_pnnn2mac[TOMOYO_MAX_MKDEV_OPERATION] = ;
static const u8 tomoyo_pp2mac[TOMOYO_MAX_PATH2_OPERATION] = ;
static const u8 tomoyo_pn2mac[TOMOYO_MAX_PATH_NUMBER_OPERATION] = ;
void tomoyo_put_name_union(struct tomoyo_name_union *ptr)
const struct tomoyo_path_info *
tomoyo_compare_name_union(const struct tomoyo_path_info *name,
const struct tomoyo_name_union *ptr)
void tomoyo_put_number_union(struct tomoyo_number_union *ptr)
bool tomoyo_compare_number_union(const unsigned long value,
const struct tomoyo_number_union *ptr)
static void tomoyo_add_slash(struct tomoyo_path_info *buf)
static bool tomoyo_strendswith(const char *name, const char *tail)
static bool tomoyo_get_realpath(struct tomoyo_path_info *buf, struct path *path)
static int tomoyo_audit_path_log(struct tomoyo_request_info *r)
static int tomoyo_audit_path2_log(struct tomoyo_request_info *r)
static int tomoyo_audit_mkdev_log(struct tomoyo_request_info *r)
static int tomoyo_audit_path_number_log(struct tomoyo_request_info *r)
static bool tomoyo_same_globally_readable(const struct tomoyo_acl_head *a,
const struct tomoyo_acl_head *b)
static int tomoyo_update_globally_readable_entry(const char *filename,
const bool is_delete)
static bool tomoyo_globally_readable_file(const struct tomoyo_path_info *
filename)
int tomoyo_write_globally_readable(char *data, const bool is_delete)
static bool tomoyo_same_pattern(const struct tomoyo_acl_head *a,
const struct tomoyo_acl_head *b)
static int tomoyo_update_file_pattern_entry(const char *pattern,
const bool is_delete)
const char *tomoyo_pattern(const struct tomoyo_path_info *filename)
int tomoyo_write_pattern(char *data, const bool is_delete)
static bool tomoyo_same_no_rewrite(const struct tomoyo_acl_head *a,
const struct tomoyo_acl_head *b)
static int tomoyo_update_no_rewrite_entry(const char *pattern,
const bool is_delete)
static bool tomoyo_no_rewrite_file(const struct tomoyo_path_info *filename)
int tomoyo_write_no_rewrite(char *data, const bool is_delete)
static bool tomoyo_check_path_acl(struct tomoyo_request_info *r,
const struct tomoyo_acl_info *ptr)
static bool tomoyo_check_path_number_acl(struct tomoyo_request_info *r,
const struct tomoyo_acl_info *ptr)
static bool tomoyo_check_path2_acl(struct tomoyo_request_info *r,
const struct tomoyo_acl_info *ptr)
static bool tomoyo_check_mkdev_acl(struct tomoyo_request_info *r,
const struct tomoyo_acl_info *ptr)
static bool tomoyo_same_path_acl(const struct tomoyo_acl_info *a,
const struct tomoyo_acl_info *b)
static bool tomoyo_merge_path_acl(struct tomoyo_acl_info *a,
struct tomoyo_acl_info *b,
const bool is_delete)
static int tomoyo_update_path_acl(const u8 type, const char *filename,
struct tomoyo_domain_info * const domain,
const bool is_delete)
static bool tomoyo_same_mkdev_acl(const struct tomoyo_acl_info *a,
const struct tomoyo_acl_info *b)
static bool tomoyo_merge_mkdev_acl(struct tomoyo_acl_info *a,
struct tomoyo_acl_info *b,
const bool is_delete)
static int tomoyo_update_mkdev_acl(const u8 type, const char *filename,
char *mode, char *major, char *minor,
struct tomoyo_domain_info * const
domain, const bool is_delete)
static bool tomoyo_same_path2_acl(const struct tomoyo_acl_info *a,
const struct tomoyo_acl_info *b)
static bool tomoyo_merge_path2_acl(struct tomoyo_acl_info *a,
struct tomoyo_acl_info *b,
const bool is_delete)
static int tomoyo_update_path2_acl(const u8 type, const char *filename1,
const char *filename2,
struct tomoyo_domain_info * const domain,
const bool is_delete)
int tomoyo_path_permission(struct tomoyo_request_info *r, u8 operation,
const struct tomoyo_path_info *filename)
static bool tomoyo_same_path_number_acl(const struct tomoyo_acl_info *a,
const struct tomoyo_acl_info *b)
static bool tomoyo_merge_path_number_acl(struct tomoyo_acl_info *a,
struct tomoyo_acl_info *b,
const bool is_delete)
static int tomoyo_update_path_number_acl(const u8 type, const char *filename,
char *number,
struct tomoyo_domain_info * const
domain,
const bool is_delete)
int tomoyo_path_number_perm(const u8 type, struct path *path,
unsigned long number)
int tomoyo_check_open_permission(struct tomoyo_domain_info *domain,
struct path *path, const int flag)
int tomoyo_path_perm(const u8 operation, struct path *path)
int tomoyo_mkdev_perm(const u8 operation, struct path *path,
const unsigned int mode, unsigned int dev)
int tomoyo_path2_perm(const u8 operation, struct path *path1,
struct path *path2)
int tomoyo_write_file(char *data, struct tomoyo_domain_info *domain,
const bool is_delete)
