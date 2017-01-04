#define PREBOOT
#define INT_MAX 0x7fffffff
#define MAX_GROUPS		6
#define GROUP_SIZE   		50
#define MAX_HUFCODE_BITS 	20
#define MAX_SYMBOLS 		258
#define SYMBOL_RUNA		0
#define SYMBOL_RUNB		1
#define RETVAL_OK			0
#define RETVAL_LAST_BLOCK		(-1)
#define RETVAL_NOT_BZIP_DATA		(-2)
#define RETVAL_UNEXPECTED_INPUT_EOF	(-3)
#define RETVAL_UNEXPECTED_OUTPUT_EOF	(-4)
#define RETVAL_DATA_ERROR		(-5)
#define RETVAL_OUT_OF_MEMORY		(-6)
#define RETVAL_OBSOLETE_INPUT		(-7)
#define BZIP2_IOBUF_SIZE		4096
struct group_data ;
struct bunzip_data ;
static unsigned int INIT get_bits(struct bunzip_data *bd, char bits_wanted)
static int INIT get_next_block(struct bunzip_data *bd)
static int INIT read_bunzip(struct bunzip_data *bd, char *outbuf, int len)
static int INIT nofill(void *buf, unsigned int len)
static int INIT start_bunzip(struct bunzip_data **bdp, void *inbuf, int len,
int (*fill)(void*, unsigned int))
STATIC int INIT bunzip2(unsigned char *buf, int len,
int(*fill)(void*, unsigned int),
int(*flush)(void*, unsigned int),
unsigned char *outbuf,
int *pos,
void(*error)(char *x))
STATIC int INIT decompress(unsigned char *buf, int len,
int(*fill)(void*, unsigned int),
int(*flush)(void*, unsigned int),
unsigned char *outbuf,
int *pos,
void(*error)(char *x))
