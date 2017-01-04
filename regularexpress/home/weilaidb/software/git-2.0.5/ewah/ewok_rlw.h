#define __EWOK_RLW_H__
#define RLW_RUNNING_BITS (sizeof(eword_t) * 4)
#define RLW_LITERAL_BITS (sizeof(eword_t) * 8 - 1 - RLW_RUNNING_BITS)
#define RLW_LARGEST_RUNNING_COUNT (((eword_t)1 << RLW_RUNNING_BITS) - 1)
#define RLW_LARGEST_LITERAL_COUNT (((eword_t)1 << RLW_LITERAL_BITS) - 1)
#define RLW_LARGEST_RUNNING_COUNT_SHIFT (RLW_LARGEST_RUNNING_COUNT << 1)
#define RLW_RUNNING_LEN_PLUS_BIT (((eword_t)1 << (RLW_RUNNING_BITS + 1)) - 1)
static int rlw_get_run_bit(const eword_t *word)
static inline void rlw_set_run_bit(eword_t *word, int b)
static inline void rlw_xor_run_bit(eword_t *word)
static inline void rlw_set_running_len(eword_t *word, eword_t l)
static inline eword_t rlw_get_running_len(const eword_t *word)
static inline eword_t rlw_get_literal_words(const eword_t *word)
static inline void rlw_set_literal_words(eword_t *word, eword_t l)
static inline eword_t rlw_size(const eword_t *self)
struct rlw_iterator ;
void rlwit_init(struct rlw_iterator *it, struct ewah_bitmap *bitmap);
void rlwit_discard_first_words(struct rlw_iterator *it, size_t x);
size_t rlwit_discharge(
struct rlw_iterator *it, struct ewah_bitmap *out, size_t max, int negate);
void rlwit_discharge_empty(struct rlw_iterator *it, struct ewah_bitmap *out);
static inline size_t rlwit_word_size(struct rlw_iterator *it)
static inline size_t rlwit_literal_words(struct rlw_iterator *it)
