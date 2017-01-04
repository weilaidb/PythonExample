#define ACPI_APEI_H
#define APEI_ERST_INVALID_RECORD_ID	0xffffffffffffffffULL
#define APEI_ERST_CLEAR_RECORD		_IOW('E', 1, u64)
#define APEI_ERST_GET_RECORD_COUNT	_IOR('E', 2, u32)
extern int hest_disable;
extern int erst_disable;
void __init acpi_hest_init(void);
static inline void acpi_hest_init(void)
typedef int (*apei_hest_func_t)(struct acpi_hest_header *hest_hdr, void *data);
int apei_hest_parse(apei_hest_func_t func, void *data);
int erst_write(const struct cper_record_header *record);
ssize_t erst_get_record_count(void);
int erst_get_record_id_begin(int *pos);
int erst_get_record_id_next(int *pos, u64 *record_id);
void erst_get_record_id_end(void);
ssize_t erst_read(u64 record_id, struct cper_record_header *record,
size_t buflen);
int erst_clear(u64 record_id);
