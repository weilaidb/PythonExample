static ssize_t amd64_inject_section_show(struct mem_ctl_info *mci, char *buf)
static ssize_t amd64_inject_section_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t amd64_inject_word_show(struct mem_ctl_info *mci, char *buf)
static ssize_t amd64_inject_word_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t amd64_inject_ecc_vector_show(struct mem_ctl_info *mci, char *buf)
static ssize_t amd64_inject_ecc_vector_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t amd64_inject_read_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t amd64_inject_write_store(struct mem_ctl_info *mci,
const char *data, size_t count)
struct mcidev_sysfs_attribute amd64_inj_attrs[] = ;
