#define SOUND_FIREWIRE_LIB_H_INCLUDED
struct fw_unit;
int snd_fw_transaction(struct fw_unit *unit, int tcode,
u64 offset, void *buffer, size_t length);
const char *rcode_string(unsigned int rcode);
static inline bool rcode_is_permanent_error(int rcode)
