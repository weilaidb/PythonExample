#define _ISOFS_FS_H
#define ISODCL(from, to) (to - from + 1)
struct iso_volume_descriptor ;
#define ISO_VD_PRIMARY 1
#define ISO_VD_SUPPLEMENTARY 2
#define ISO_VD_END 255
#define ISO_STANDARD_ID "CD001"
struct iso_primary_descriptor ;
struct iso_supplementary_descriptor ;
#define HS_STANDARD_ID "CDROM"
struct  hs_volume_descriptor ;
struct hs_primary_descriptor ;
struct iso_path_table __attribute__((packed));
struct iso_directory_record  __attribute__((packed));
#define ISOFS_BLOCK_BITS 11
#define ISOFS_BLOCK_SIZE 2048
#define ISOFS_BUFFER_SIZE(INODE) ((INODE)->i_sb->s_blocksize)
#define ISOFS_BUFFER_BITS(INODE) ((INODE)->i_sb->s_blocksize_bits)
