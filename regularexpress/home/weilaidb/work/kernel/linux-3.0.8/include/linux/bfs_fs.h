#define _LINUX_BFS_FS_H
#define BFS_BSIZE_BITS		9
#define BFS_BSIZE		(1<<BFS_BSIZE_BITS)
#define BFS_MAGIC		0x1BADFACE
#define BFS_ROOT_INO		2
#define BFS_INODES_PER_BLOCK	8
#define BFS_VDIR 2L
#define BFS_VREG 1L
struct bfs_inode ;
#define BFS_NAMELEN		14
#define BFS_DIRENT_SIZE		16
#define BFS_DIRS_PER_BLOCK	32
struct bfs_dirent ;
struct bfs_super_block ;
#define BFS_OFF2INO(offset) \
((((offset) - BFS_BSIZE) / sizeof(struct bfs_inode)) + BFS_ROOT_INO)
#define BFS_INO2OFF(ino) \
((__u32)(((ino) - BFS_ROOT_INO) * sizeof(struct bfs_inode)) + BFS_BSIZE)
#define BFS_NZFILESIZE(ip) \
((le32_to_cpu((ip)->i_eoffset) + 1) -  le32_to_cpu((ip)->i_sblock) * BFS_BSIZE)
#define BFS_FILESIZE(ip) \
((ip)->i_sblock == 0 ? 0 : BFS_NZFILESIZE(ip))
#define BFS_FILEBLOCKS(ip) \
((ip)->i_sblock == 0 ? 0 : (le32_to_cpu((ip)->i_eblock) + 1) -  le32_to_cpu((ip)->i_sblock))
#define BFS_UNCLEAN(bfs_sb, sb)	\
((le32_to_cpu(bfs_sb->s_from) != -1) && (le32_to_cpu(bfs_sb->s_to) != -1) && !(sb->s_flags & MS_RDONLY))
