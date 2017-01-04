DEFINE_MUTEX(tomoyo_policy_lock);
bool tomoyo_policy_loaded;
static u8 tomoyo_parse_ulong(unsigned long *result, char **str)
void tomoyo_print_ulong(char *buffer, const int buffer_len,
const unsigned long value, const u8 type)
bool tomoyo_parse_name_union(const char *filename,
struct tomoyo_name_union *ptr)
bool tomoyo_parse_number_union(char *data, struct tomoyo_number_union *num)
static inline bool tomoyo_byte_range(const char *str)
static inline bool tomoyo_alphabet_char(const char c)
static inline u8 tomoyo_make_byte(const u8 c1, const u8 c2, const u8 c3)
bool tomoyo_str_starts(char **src, const char *find)
void tomoyo_normalize_line(unsigned char *buffer)
bool tomoyo_tokenize(char *buffer, char *w[], size_t size)
static bool tomoyo_correct_word2(const char *string, size_t len)
bool tomoyo_correct_word(const char *string)
bool tomoyo_correct_path(const char *filename)
bool tomoyo_correct_domain(const unsigned char *domainname)
bool tomoyo_domain_def(const unsigned char *buffer)
struct tomoyo_domain_info *tomoyo_find_domain(const char *domainname)
static int tomoyo_const_part_length(const char *filename)
void tomoyo_fill_path_info(struct tomoyo_path_info *ptr)
static bool tomoyo_file_matches_pattern2(const char *filename,
const char *filename_end,
const char *pattern,
const char *pattern_end)
static bool tomoyo_file_matches_pattern(const char *filename,
const char *filename_end,
const char *pattern,
const char *pattern_end)
static bool tomoyo_path_matches_pattern2(const char *f, const char *p)
bool tomoyo_path_matches_pattern(const struct tomoyo_path_info *filename,
const struct tomoyo_path_info *pattern)
const char *tomoyo_get_exe(void)
int tomoyo_get_mode(const u8 profile, const u8 index)
int tomoyo_init_request_info(struct tomoyo_request_info *r,
struct tomoyo_domain_info *domain, const u8 index)
const char *tomoyo_last_word(const char *name)
void tomoyo_warn_log(struct tomoyo_request_info *r, const char *fmt, ...)
bool tomoyo_domain_quota_is_ok(struct tomoyo_request_info *r)
