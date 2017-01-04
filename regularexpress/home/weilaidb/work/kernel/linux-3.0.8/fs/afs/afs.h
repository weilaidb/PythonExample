#define AFS_H
#define AFS_MAXCELLNAME	64
#define AFS_MAXVOLNAME	64
#define AFSNAMEMAX	256
#define AFSPATHMAX	1024
#define AFSOPAQUEMAX	1024
typedef unsigned			afs_volid_t;
typedef unsigned			afs_vnodeid_t;
typedef unsigned long long		afs_dataversion_t;
typedef enum  __attribute__((packed)) afs_voltype_t;
typedef enum  afs_file_type_t;
typedef enum  afs_lock_type_t;
#define AFS_LOCKWAIT		(5 * 60)
struct afs_fid ;
typedef enum  afs_callback_type_t;
struct afs_callback ;
#define AFSCBMAX 50
struct afs_volume_info ;
typedef u32 afs_access_t;
#define AFS_ACE_READ		0x00000001U
#define AFS_ACE_WRITE		0x00000002U
#define AFS_ACE_INSERT		0x00000004U
#define AFS_ACE_LOOKUP		0x00000008U
#define AFS_ACE_DELETE		0x00000010U
#define AFS_ACE_LOCK		0x00000020U
#define AFS_ACE_ADMINISTER	0x00000040U
#define AFS_ACE_USER_A		0x01000000U
#define AFS_ACE_USER_B		0x02000000U
#define AFS_ACE_USER_C		0x04000000U
#define AFS_ACE_USER_D		0x08000000U
#define AFS_ACE_USER_E		0x10000000U
#define AFS_ACE_USER_F		0x20000000U
#define AFS_ACE_USER_G		0x40000000U
#define AFS_ACE_USER_H		0x80000000U
struct afs_file_status ;
struct afs_store_status ;
#define AFS_SET_MTIME		0x01
#define AFS_SET_OWNER		0x02
#define AFS_SET_GROUP		0x04
#define AFS_SET_MODE		0x08
#define AFS_SET_SEG_SIZE	0x10
struct afs_volsync ;
struct afs_volume_status ;
#define AFS_BLOCK_SIZE	1024
