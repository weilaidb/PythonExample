#  define md5_INCLUDED
typedef unsigned char md5_byte_t;
typedef unsigned int md5_word_t;
typedef struct md5_state_s  md5_state_t;
void md5_init(md5_state_t *pms);
void md5_append(md5_state_t *pms, const md5_byte_t *data, unsigned int nbytes);
void md5_finish(md5_state_t *pms, md5_byte_t digest[16]);
