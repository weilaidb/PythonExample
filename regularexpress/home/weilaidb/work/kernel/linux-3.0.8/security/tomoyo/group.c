static bool tomoyo_same_path_group(const struct tomoyo_acl_head *a,
const struct tomoyo_acl_head *b)
static bool tomoyo_same_number_group(const struct tomoyo_acl_head *a,
const struct tomoyo_acl_head *b)
int tomoyo_write_group(char *data, const bool is_delete, const u8 type)
const struct tomoyo_path_info *
tomoyo_path_matches_group(const struct tomoyo_path_info *pathname,
const struct tomoyo_group *group)
bool tomoyo_number_matches_group(const unsigned long min,
const unsigned long max,
const struct tomoyo_group *group)
