#define __LINUX_UFS_FS_H
typedef __u64 __bitwise __fs64;
typedef __u32 __bitwise __fs32;
typedef __u16 __bitwise __fs16;
#define UFS_BBLOCK 0
#define UFS_BBSIZE 8192
#define UFS_SBLOCK 8192
#define UFS_SBSIZE 8192
#define UFS_SECTOR_SIZE 512
#define UFS_SECTOR_BITS 9
#define UFS_MAGIC  0x00011954
#define UFS_MAGIC_BW 0x0f242697
#define UFS2_MAGIC 0x19540119
#define UFS_CIGAM  0x54190100
#define SBLOCK_FLOPPY        0
#define SBLOCK_UFS1       8192
#define SBLOCK_UFS2      65536
#define SBLOCK_PIGGY    262144
#define SBLOCKSIZE        8192
#define SBLOCKSEARCH \
#define UFS_MAGIC_LFN   0x00095014
#define UFS_CIGAM_LFN   0x14500900
#define UFS_MAGIC_SEC   0x00612195
#define UFS_CIGAM_SEC   0x95216100
#define UFS_MAGIC_FEA   0x00195612
#define UFS_CIGAM_FEA   0x12561900
#define UFS_MAGIC_4GB   0x05231994
#define UFS_CIGAM_4GB   0x94192305
#define UFS_FSF_LFN     0x00000001
#define UFS_FSF_B1      0x00000002
#define UFS_FSF_LFS     0x00000002
#define UFS_FSF_LUID    0x00000004
#define UFS_BSIZE	8192
#define UFS_MINBSIZE	4096
#define UFS_FSIZE	1024
#define UFS_MAXFRAG	(UFS_BSIZE / UFS_FSIZE)
#define UFS_NDADDR 12
#define UFS_NINDIR 3
#define UFS_IND_BLOCK	(UFS_NDADDR + 0)
#define UFS_DIND_BLOCK	(UFS_NDADDR + 1)
#define UFS_TIND_BLOCK	(UFS_NDADDR + 2)
#define UFS_NDIR_FRAGMENT (UFS_NDADDR << uspi->s_fpbshift)
#define UFS_IND_FRAGMENT (UFS_IND_BLOCK << uspi->s_fpbshift)
#define UFS_DIND_FRAGMENT (UFS_DIND_BLOCK << uspi->s_fpbshift)
#define UFS_TIND_FRAGMENT (UFS_TIND_BLOCK << uspi->s_fpbshift)
#define UFS_ROOTINO 2
#define UFS_FIRST_INO (UFS_ROOTINO + 1)
#define UFS_USEEFT  ((__u16)65535)
#define UFS_FSOK      0x7c269d38
#define UFS_FSACTIVE  ((__s8)0x00)
#define UFS_FSCLEAN   ((__s8)0x01)
#define UFS_FSSTABLE  ((__s8)0x02)
#define UFS_FSOSF1    ((__s8)0x03)
#define UFS_FSBAD     ((__s8)0xff)
#define UFS_FSSUSPEND ((__s8)0xfe)
#define UFS_FSLOG     ((__s8)0xfd)
#define UFS_FSFIX     ((__s8)0xfc)
#define UFS_DE_MASK		0x00000010
#define UFS_DE_OLD		0x00000000
#define UFS_DE_44BSD		0x00000010
#define UFS_UID_MASK		0x00000060
#define UFS_UID_OLD		0x00000000
#define UFS_UID_44BSD		0x00000020
#define UFS_UID_EFT		0x00000040
#define UFS_ST_MASK		0x00000700
#define UFS_ST_OLD		0x00000000
#define UFS_ST_44BSD		0x00000100
#define UFS_ST_SUN		0x00000200
#define UFS_ST_SUNOS		0x00000300
#define UFS_ST_SUNx86		0x00000400
#define UFS_CG_MASK		0x00003000
#define UFS_CG_OLD		0x00000000
#define UFS_CG_44BSD		0x00002000
#define UFS_CG_SUN		0x00001000
#define UFS_TYPE_MASK		0x00010000
#define UFS_TYPE_UFS1		0x00000000
#define UFS_TYPE_UFS2		0x00010000
#define UFS_42INODEFMT	-1
#define UFS_44INODEFMT	2
#define UFS_MINFREE         5
#define UFS_DEFAULTOPT      UFS_OPTTIME
#define ufs_fsbtodb(uspi, b)	((b) << (uspi)->s_fsbtodb)
#define	ufs_dbtofsb(uspi, b)	((b) >> (uspi)->s_fsbtodb)
#define	ufs_cgbase(c)	(uspi->s_fpg * (c))
#define ufs_cgstart(c)	((uspi)->fs_magic == UFS2_MAGIC ?  ufs_cgbase(c) : \
(ufs_cgbase(c)  + uspi->s_cgoffset * ((c) & ~uspi->s_cgmask)))
#define	ufs_cgsblock(c)	(ufs_cgstart(c) + uspi->s_sblkno)
#define	ufs_cgcmin(c)	(ufs_cgstart(c) + uspi->s_cblkno)
#define	ufs_cgimin(c)	(ufs_cgstart(c) + uspi->s_iblkno)
#define	ufs_cgdmin(c)	(ufs_cgstart(c) + uspi->s_dblkno)
#define	ufs_inotocg(x)		((x) / uspi->s_ipg)
#define	ufs_inotocgoff(x)	((x) % uspi->s_ipg)
#define	ufs_inotofsba(x)	(((u64)ufs_cgimin(ufs_inotocg(x))) + ufs_inotocgoff(x) / uspi->s_inopf)
#define	ufs_inotofsbo(x)	((x) % uspi->s_inopf)
#define ufs_cbtocylno(bno) \
((bno) * uspi->s_nspf / uspi->s_spc)
#define ufs_cbtorpos(bno)				      \
((UFS_SB(sb)->s_flags & UFS_CG_SUN) ?		      \
(((((bno) * uspi->s_nspf % uspi->s_spc) %	      \
uspi->s_nsect) *				      \
uspi->s_nrpos) / uspi->s_nsect)		      \
:						      \
((((bno) * uspi->s_nspf % uspi->s_spc / uspi->s_nsect \
* uspi->s_trackskew + (bno) * uspi->s_nspf % uspi->s_spc \
% uspi->s_nsect * uspi->s_interleave) % uspi->s_nsect \
* uspi->s_nrpos) / uspi->s_npsect))
#define ufs_blkoff(loc)		((loc) & uspi->s_qbmask)
#define ufs_fragoff(loc)	((loc) & uspi->s_qfmask)
#define ufs_lblktosize(blk)	((blk) << uspi->s_bshift)
#define ufs_lblkno(loc)		((loc) >> uspi->s_bshift)
#define ufs_numfrags(loc)	((loc) >> uspi->s_fshift)
#define ufs_blkroundup(size)	(((size) + uspi->s_qbmask) & uspi->s_bmask)
#define ufs_fragroundup(size)	(((size) + uspi->s_qfmask) & uspi->s_fmask)
#define ufs_fragstoblks(frags)	((frags) >> uspi->s_fpbshift)
#define ufs_blkstofrags(blks)	((blks) << uspi->s_fpbshift)
#define ufs_fragnum(fsb)	((fsb) & uspi->s_fpbmask)
#define ufs_blknum(fsb)		((fsb) & ~uspi->s_fpbmask)
#define	UFS_MAXNAMLEN 255
#define UFS_MAXMNTLEN 512
#define UFS2_MAXMNTLEN 468
#define UFS2_MAXVOLLEN 32
#define UFS_MAXCSBUFS 31
#define UFS_LINK_MAX 32000
#define	UFS2_NOCSPTRS	28
#define UFS_DIR_PAD			4
#define UFS_DIR_ROUND			(UFS_DIR_PAD - 1)
#define UFS_DIR_REC_LEN(name_len)	(((name_len) + 1 + 8 + UFS_DIR_ROUND) & ~UFS_DIR_ROUND)
struct ufs_timeval ;
struct ufs_dir_entry ;
struct ufs_csum ;
struct ufs2_csum_total ;
struct ufs_csum_core ;
#define UFS_UNCLEAN      0x01
#define UFS_DOSOFTDEP    0x02
#define UFS_NEEDSFSCK    0x04
#define UFS_INDEXDIRS    0x08
#define UFS_ACLS         0x10
#define UFS_MULTILABEL   0x20
#define UFS_FLAGS_UPDATED 0x80
#define UFS_OPTTIME	0
#define UFS_OPTSPACE	1
#define UFS_42POSTBLFMT		-1
#define UFS_DYNAMICPOSTBLFMT	1
#define fs_cs(indx) s_csp[(indx)]
#define	CG_MAGIC	0x090255
#define ufs_cg_chkmagic(sb, ucg) \
(fs32_to_cpu((sb), (ucg)->cg_magic) == CG_MAGIC)
#define ufs_ocg_blktot(sb, ucg)      fs32_to_cpu((sb), ((struct ufs_old_cylinder_group *)(ucg))->cg_btot)
#define ufs_ocg_blks(sb, ucg, cylno) fs32_to_cpu((sb), ((struct ufs_old_cylinder_group *)(ucg))->cg_b[cylno])
#define ufs_ocg_inosused(sb, ucg)    fs32_to_cpu((sb), ((struct ufs_old_cylinder_group *)(ucg))->cg_iused)
#define ufs_ocg_blksfree(sb, ucg)    fs32_to_cpu((sb), ((struct ufs_old_cylinder_group *)(ucg))->cg_free)
#define ufs_ocg_chkmagic(sb, ucg) \
(fs32_to_cpu((sb), ((struct ufs_old_cylinder_group *)(ucg))->cg_magic) == CG_MAGIC)
struct	ufs_cylinder_group ;
struct ufs_old_cylinder_group ;
struct ufs_inode ;
#define UFS_NXADDR  2
struct ufs2_inode ;
#define UFS_UF_SETTABLE   0x0000ffff
#define UFS_UF_NODUMP     0x00000001
#define UFS_UF_IMMUTABLE  0x00000002
#define UFS_UF_APPEND     0x00000004
#define UFS_UF_OPAQUE     0x00000008
#define UFS_UF_NOUNLINK   0x00000010
#define UFS_SF_SETTABLE   0xffff0000
#define UFS_SF_ARCHIVED   0x00010000
#define UFS_SF_IMMUTABLE  0x00020000
#define UFS_SF_APPEND     0x00040000
#define UFS_SF_NOUNLINK   0x00100000
struct ufs_buffer_head ;
struct ufs_cg_private_info ;
struct ufs_sb_private_info ;
struct ufs_super_block_first ;
struct ufs_super_block_second ;
struct ufs_super_block_third ;
