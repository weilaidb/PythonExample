#define _LINUX_NFS_XDR_H
#define NFS_MAX_FILE_IO_SIZE	(1048576U)
#define NFS_DEF_FILE_IO_SIZE	(4096U)
#define NFS_MIN_FILE_IO_SIZE	(1024U)
struct nfs4_secinfo_flavors;
struct nfs_fsid ;
static inline int nfs_fsid_equal(const struct nfs_fsid *a, const struct nfs_fsid *b)
struct nfs_fattr ;
#define NFS_ATTR_FATTR_TYPE		(1U << 0)
#define NFS_ATTR_FATTR_MODE		(1U << 1)
#define NFS_ATTR_FATTR_NLINK		(1U << 2)
#define NFS_ATTR_FATTR_OWNER		(1U << 3)
#define NFS_ATTR_FATTR_GROUP		(1U << 4)
#define NFS_ATTR_FATTR_RDEV		(1U << 5)
#define NFS_ATTR_FATTR_SIZE		(1U << 6)
#define NFS_ATTR_FATTR_PRESIZE		(1U << 7)
#define NFS_ATTR_FATTR_BLOCKS_USED	(1U << 8)
#define NFS_ATTR_FATTR_SPACE_USED	(1U << 9)
#define NFS_ATTR_FATTR_FSID		(1U << 10)
#define NFS_ATTR_FATTR_FILEID		(1U << 11)
#define NFS_ATTR_FATTR_ATIME		(1U << 12)
#define NFS_ATTR_FATTR_MTIME		(1U << 13)
#define NFS_ATTR_FATTR_CTIME		(1U << 14)
#define NFS_ATTR_FATTR_PREMTIME		(1U << 15)
#define NFS_ATTR_FATTR_PRECTIME		(1U << 16)
#define NFS_ATTR_FATTR_CHANGE		(1U << 17)
#define NFS_ATTR_FATTR_PRECHANGE	(1U << 18)
#define NFS_ATTR_FATTR_V4_REFERRAL	(1U << 19)
#define NFS_ATTR_FATTR_MOUNTPOINT	(1U << 20)
#define NFS_ATTR_FATTR_MOUNTED_ON_FILEID		(1U << 21)
#define NFS_ATTR_FATTR (NFS_ATTR_FATTR_TYPE \
| NFS_ATTR_FATTR_MODE \
| NFS_ATTR_FATTR_NLINK \
| NFS_ATTR_FATTR_OWNER \
| NFS_ATTR_FATTR_GROUP \
| NFS_ATTR_FATTR_RDEV \
| NFS_ATTR_FATTR_SIZE \
| NFS_ATTR_FATTR_FSID \
| NFS_ATTR_FATTR_FILEID \
| NFS_ATTR_FATTR_ATIME \
| NFS_ATTR_FATTR_MTIME \
| NFS_ATTR_FATTR_CTIME)
#define NFS_ATTR_FATTR_V2 (NFS_ATTR_FATTR \
| NFS_ATTR_FATTR_BLOCKS_USED)
#define NFS_ATTR_FATTR_V3 (NFS_ATTR_FATTR \
| NFS_ATTR_FATTR_SPACE_USED)
#define NFS_ATTR_FATTR_V4 (NFS_ATTR_FATTR \
| NFS_ATTR_FATTR_SPACE_USED \
| NFS_ATTR_FATTR_CHANGE)
struct nfs_fsinfo ;
struct nfs_fsstat ;
struct nfs2_fsstat ;
struct nfs_pathconf ;
struct nfs4_change_info ;
struct nfs_seqid;
struct nfs4_channel_attrs ;
struct nfs4_slot ;
struct nfs4_sequence_args ;
struct nfs4_sequence_res ;
struct nfs4_get_lease_time_args ;
struct nfs4_get_lease_time_res ;
#define PNFS_LAYOUT_MAXSIZE 4096
struct nfs4_layoutdriver_data ;
struct pnfs_layout_range ;
struct nfs4_layoutget_args ;
struct nfs4_layoutget_res ;
struct nfs4_layoutget ;
struct nfs4_getdeviceinfo_args ;
struct nfs4_getdeviceinfo_res ;
struct nfs4_layoutcommit_args ;
struct nfs4_layoutcommit_res ;
struct nfs4_layoutcommit_data ;
struct nfs4_layoutreturn_args ;
struct nfs4_layoutreturn_res ;
struct nfs4_layoutreturn ;
struct nfs_openargs ;
struct nfs_openres ;
struct nfs_open_confirmargs ;
struct nfs_open_confirmres ;
struct nfs_closeargs ;
struct nfs_closeres ;
struct nfs_lowner ;
struct nfs_lock_args ;
struct nfs_lock_res ;
struct nfs_locku_args ;
struct nfs_locku_res ;
struct nfs_lockt_args ;
struct nfs_lockt_res ;
struct nfs_release_lockowner_args ;
struct nfs4_delegreturnargs ;
struct nfs4_delegreturnres ;
struct nfs_readargs ;
struct nfs_readres ;
struct nfs_writeargs ;
struct nfs_writeverf ;
struct nfs_writeres ;
struct nfs_removeargs ;
struct nfs_removeres ;
struct nfs_renameargs ;
struct nfs_renameres ;
struct nfs_entry ;
struct nfs_sattrargs ;
struct nfs_diropargs ;
struct nfs_createargs ;
struct nfs_setattrargs ;
struct nfs_setaclargs ;
struct nfs_setaclres ;
struct nfs_getaclargs ;
struct nfs_getaclres ;
struct nfs_setattrres ;
struct nfs_linkargs ;
struct nfs_symlinkargs ;
struct nfs_readdirargs ;
struct nfs3_getaclargs ;
struct nfs3_setaclargs ;
struct nfs_diropok ;
struct nfs_readlinkargs ;
struct nfs3_sattrargs ;
struct nfs3_diropargs ;
struct nfs3_accessargs ;
struct nfs3_createargs ;
struct nfs3_mkdirargs ;
struct nfs3_symlinkargs ;
struct nfs3_mknodargs ;
struct nfs3_linkargs ;
struct nfs3_readdirargs ;
struct nfs3_diropres ;
struct nfs3_accessres ;
struct nfs3_readlinkargs ;
struct nfs3_linkres ;
struct nfs3_readdirres ;
struct nfs3_getaclres ;
typedef u64 clientid4;
struct nfs4_accessargs ;
struct nfs4_accessres ;
struct nfs4_create_arg ;
struct nfs4_create_res ;
struct nfs4_fsinfo_arg ;
struct nfs4_fsinfo_res ;
struct nfs4_getattr_arg ;
struct nfs4_getattr_res ;
struct nfs4_link_arg ;
struct nfs4_link_res ;
struct nfs4_lookup_arg ;
struct nfs4_lookup_res ;
struct nfs4_lookup_root_arg ;
struct nfs4_pathconf_arg ;
struct nfs4_pathconf_res ;
struct nfs4_readdir_arg ;
struct nfs4_readdir_res ;
struct nfs4_readlink ;
struct nfs4_readlink_res ;
#define NFS4_SETCLIENTID_NAMELEN	(127)
struct nfs4_setclientid ;
struct nfs4_setclientid_res ;
struct nfs4_statfs_arg ;
struct nfs4_statfs_res ;
struct nfs4_server_caps_arg ;
struct nfs4_server_caps_res ;
struct nfs4_string ;
#define NFS4_PATHNAME_MAXCOMPONENTS 512
struct nfs4_pathname ;
#define NFS4_FS_LOCATION_MAXSERVERS 10
struct nfs4_fs_location ;
#define NFS4_FS_LOCATIONS_MAXENTRIES 10
struct nfs4_fs_locations ;
struct nfs4_fs_locations_arg ;
struct nfs4_fs_locations_res ;
struct nfs4_secinfo_oid ;
struct nfs4_secinfo_gss ;
struct nfs4_secinfo_flavor ;
struct nfs4_secinfo_flavors ;
struct nfs4_secinfo_arg ;
struct nfs4_secinfo_res ;
struct nfstime4 ;
struct nfs_impl_id4 ;
#define NFS4_EXCHANGE_ID_LEN	(48)
struct nfs41_exchange_id_args ;
struct server_owner ;
struct server_scope ;
struct nfs41_exchange_id_res ;
struct nfs41_create_session_args ;
struct nfs41_create_session_res ;
struct nfs41_reclaim_complete_args ;
struct nfs41_reclaim_complete_res ;
struct nfs_page;
#define NFS_PAGEVEC_SIZE	(8U)
struct nfs_read_data ;
struct nfs_write_data ;
struct nfs_access_entry;
struct nfs_client;
struct rpc_timeout;
struct nfs_rpc_ops ;
#define NFS_CALL(op, inode, args)	NFS_PROTO(inode)->op args
extern const struct nfs_rpc_ops	nfs_v2_clientops;
extern const struct nfs_rpc_ops	nfs_v3_clientops;
extern const struct nfs_rpc_ops	nfs_v4_clientops;
extern struct rpc_version	nfs_version2;
extern struct rpc_version	nfs_version3;
extern struct rpc_version	nfs_version4;
extern struct rpc_version	nfsacl_version3;
extern struct rpc_program	nfsacl_program;
