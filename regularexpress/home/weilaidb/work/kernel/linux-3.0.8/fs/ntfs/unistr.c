static const u8 legal_ansi_char_array[0x40] = ;
bool ntfs_are_names_equal(const ntfschar *s1, size_t s1_len,
const ntfschar *s2, size_t s2_len, const IGNORE_CASE_BOOL ic,
const ntfschar *upcase, const u32 upcase_size)
int ntfs_collate_names(const ntfschar *name1, const u32 name1_len,
const ntfschar *name2, const u32 name2_len,
const int err_val, const IGNORE_CASE_BOOL ic,
const ntfschar *upcase, const u32 upcase_len)
int ntfs_ucsncmp(const ntfschar *s1, const ntfschar *s2, size_t n)
int ntfs_ucsncasecmp(const ntfschar *s1, const ntfschar *s2, size_t n,
const ntfschar *upcase, const u32 upcase_size)
void ntfs_upcase_name(ntfschar *name, u32 name_len, const ntfschar *upcase,
const u32 upcase_len)
void ntfs_file_upcase_value(FILE_NAME_ATTR *file_name_attr,
const ntfschar *upcase, const u32 upcase_len)
int ntfs_file_compare_values(FILE_NAME_ATTR *file_name_attr1,
FILE_NAME_ATTR *file_name_attr2,
const int err_val, const IGNORE_CASE_BOOL ic,
const ntfschar *upcase, const u32 upcase_len)
int ntfs_nlstoucs(const ntfs_volume *vol, const char *ins,
const int ins_len, ntfschar **outs)
int ntfs_ucstonls(const ntfs_volume *vol, const ntfschar *ins,
const int ins_len, unsigned char **outs, int outs_len)
