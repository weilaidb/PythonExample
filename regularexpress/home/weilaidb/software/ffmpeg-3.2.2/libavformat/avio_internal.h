#define AVFORMAT_AVIO_INTERNAL_H
extern const AVClass ff_avio_class;
ffio_init_context(void *opaque, uint8_t *buf, int buf_size),
int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
int64_t (*seek)(void *opaque, int64_t offset, int whence));
ffio_read_indirect;
ffio_read_partial;
ffio_fill;
ffio_wfourcc
ffio_rewind_with_probe_data;
ffio_read_varlen;
ffio_read_size;
ffio_set_buf_size;
ffio_ensure_seekback;
ffio_limit;
ffio_init_checksum(unsigned long c, const uint8_t *p, unsigned int len),
unsigned long checksum);
ffio_get_checksum;
ff_crc04C11DB7_update;
ff_crcEDB88320_update;
ff_crcA001_update;
ffio_open_dyn_packet_buf;
ffio_fdopen;
ffio_open_null_buf;
ffio_open_whitelist;
ffio_close_null_buf;
ffio_free_dyn_buf;
