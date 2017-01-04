#define ERROR_RETRY_DELAY_MS	5
const char *rcode_string(unsigned int rcode)
EXPORT_SYMBOL(rcode_string);
int snd_fw_transaction(struct fw_unit *unit, int tcode,
u64 offset, void *buffer, size_t length)
EXPORT_SYMBOL(snd_fw_transaction);
MODULE_DESCRIPTION("FireWire audio helper functions");
MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_LICENSE("GPL v2");
