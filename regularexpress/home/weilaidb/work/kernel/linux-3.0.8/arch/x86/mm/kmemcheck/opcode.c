static bool opcode_is_prefix(uint8_t b)
static bool opcode_is_rex_prefix(uint8_t b)
static bool opcode_is_rex_prefix(uint8_t b)
#define REX_W (1 << 3)
void kmemcheck_opcode_decode(const uint8_t *op, unsigned int *size)
const uint8_t *kmemcheck_opcode_get_primary(const uint8_t *op)
