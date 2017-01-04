#define	SHORT_BITS		16
#define	CHAR_BITS		8
#define	DATA_BLOB_LENGTH	3
#define	MATCH_DATA_LENGTH	8192
#define ALTERA_REQUEST_SIZE	1024
#define ALTERA_BUFFER_SIZE	(MATCH_DATA_LENGTH + ALTERA_REQUEST_SIZE)
static u32 altera_bits_req(u32 n)
static u32 altera_read_packed(u8 *buffer, u32 bits, u32 *bits_avail,
u32 *in_index)
u32 altera_shrink(u8 *in, u32 in_length, u8 *out, u32 out_length, s32 version)
