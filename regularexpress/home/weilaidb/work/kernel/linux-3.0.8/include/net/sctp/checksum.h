static inline __u32 sctp_crc32c(__u32 crc, u8 *buffer, u16 length)
static inline __u32 sctp_start_cksum(__u8 *buffer, __u16 length)
static inline __u32 sctp_update_cksum(__u8 *buffer, __u16 length, __u32 crc32)
static inline __le32 sctp_end_cksum(__be32 crc32)
