void apei_mce_report_mem_error(int corrected, struct cper_sec_mem_err *mem_err)
EXPORT_SYMBOL_GPL(apei_mce_report_mem_error);
#define CPER_CREATOR_MCE						\
UUID_LE(0x75a574e3, 0x5052, 0x4b29, 0x8a, 0x8e, 0xbe, 0x2c,	\
0x64, 0x90, 0xb8, 0x9d)
#define CPER_SECTION_TYPE_MCE						\
UUID_LE(0xfe08ffbe, 0x95e4, 0x4be7, 0xbc, 0x73, 0x40, 0x96,	\
0x04, 0x4a, 0x38, 0xfc)
struct cper_mce_record  __packed;
int apei_write_mce(struct mce *m)
ssize_t apei_read_mce(struct mce *m, u64 *record_id)
int apei_check_mce(void)
int apei_clear_mce(u64 record_id)
