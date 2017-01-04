#define OCFS2_IOCTL_H
#define OCFS2_IOC_GETFLAGS	FS_IOC_GETFLAGS
#define OCFS2_IOC_SETFLAGS	FS_IOC_SETFLAGS
#define OCFS2_IOC32_GETFLAGS	FS_IOC32_GETFLAGS
#define OCFS2_IOC32_SETFLAGS	FS_IOC32_SETFLAGS
struct ocfs2_space_resv ;
#define OCFS2_IOC_ALLOCSP		_IOW ('X', 10, struct ocfs2_space_resv)
#define OCFS2_IOC_FREESP		_IOW ('X', 11, struct ocfs2_space_resv)
#define OCFS2_IOC_RESVSP		_IOW ('X', 40, struct ocfs2_space_resv)
#define OCFS2_IOC_UNRESVSP	_IOW ('X', 41, struct ocfs2_space_resv)
#define OCFS2_IOC_ALLOCSP64	_IOW ('X', 36, struct ocfs2_space_resv)
#define OCFS2_IOC_FREESP64	_IOW ('X', 37, struct ocfs2_space_resv)
#define OCFS2_IOC_RESVSP64	_IOW ('X', 42, struct ocfs2_space_resv)
#define OCFS2_IOC_UNRESVSP64	_IOW ('X', 43, struct ocfs2_space_resv)
struct ocfs2_new_group_input ;
#define OCFS2_IOC_GROUP_EXTEND	_IOW('o', 1, int)
#define OCFS2_IOC_GROUP_ADD	_IOW('o', 2,struct ocfs2_new_group_input)
#define OCFS2_IOC_GROUP_ADD64	_IOW('o', 3,struct ocfs2_new_group_input)
struct reflink_arguments ;
#define OCFS2_IOC_REFLINK	_IOW('o', 4, struct reflink_arguments)
#define OCFS2_INFO_MAX_REQUEST		(50)
#define OCFS2_TEXT_UUID_LEN		(OCFS2_VOL_UUID_LEN * 2)
#define OCFS2_INFO_MAGIC		(0x4F32494E)
struct ocfs2_info ;
struct ocfs2_info_request ;
struct ocfs2_info_clustersize ;
struct ocfs2_info_blocksize ;
struct ocfs2_info_maxslots ;
struct ocfs2_info_label  __attribute__ ((packed));
struct ocfs2_info_uuid  __attribute__ ((packed));
struct ocfs2_info_fs_features ;
struct ocfs2_info_journal_size ;
struct ocfs2_info_freeinode ;
#define OCFS2_INFO_MAX_HIST     (32)
struct ocfs2_info_freefrag ;
enum ocfs2_info_type ;
#define OCFS2_INFO_FL_NON_COHERENT	(0x00000001)
#define OCFS2_INFO_FL_FILLED		(0x40000000)
#define OCFS2_INFO_FL_ERROR		(0x80000000)
#define OCFS2_IOC_INFO		_IOR('o', 5, struct ocfs2_info)
struct ocfs2_move_extents ;
#define OCFS2_MOVE_EXT_FL_AUTO_DEFRAG	(0x00000001)
#define OCFS2_MOVE_EXT_FL_PART_DEFRAG	(0x00000002)
#define OCFS2_MOVE_EXT_FL_COMPLETE	(0x00000004)
#define OCFS2_IOC_MOVE_EXT	_IOW('o', 6, struct ocfs2_move_extents)
