#define _ASM_TILE_CHECKSUM_H
__wsum do_csum(const unsigned char *buff, int len);
#define do_csum do_csum
