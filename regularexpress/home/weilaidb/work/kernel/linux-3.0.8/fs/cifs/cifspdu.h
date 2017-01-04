#define _CIFSPDU_H
#define LANMAN_PROT 0
#define LANMAN2_PROT 1
#define CIFS_PROT   2
#define CIFS_PROT   0
#define POSIX_PROT  (CIFS_PROT+1)
#define BAD_PROT 0xFFFF
#define SMB_COM_CREATE_DIRECTORY      0x00
#define SMB_COM_DELETE_DIRECTORY      0x01
#define SMB_COM_CLOSE                 0x04
#define SMB_COM_FLUSH                 0x05
#define SMB_COM_DELETE                0x06
#define SMB_COM_RENAME                0x07
#define SMB_COM_QUERY_INFORMATION     0x08
#define SMB_COM_SETATTR               0x09
#define SMB_COM_LOCKING_ANDX          0x24
#define SMB_COM_COPY                  0x29
#define SMB_COM_ECHO                  0x2B
#define SMB_COM_OPEN_ANDX             0x2D
#define SMB_COM_READ_ANDX             0x2E
#define SMB_COM_WRITE_ANDX            0x2F
#define SMB_COM_TRANSACTION2          0x32
#define SMB_COM_TRANSACTION2_SECONDARY 0x33
#define SMB_COM_FIND_CLOSE2           0x34
#define SMB_COM_TREE_DISCONNECT       0x71
#define SMB_COM_NEGOTIATE             0x72
#define SMB_COM_SESSION_SETUP_ANDX    0x73
#define SMB_COM_LOGOFF_ANDX           0x74
#define SMB_COM_TREE_CONNECT_ANDX     0x75
#define SMB_COM_NT_TRANSACT           0xA0
#define SMB_COM_NT_TRANSACT_SECONDARY 0xA1
#define SMB_COM_NT_CREATE_ANDX        0xA2
#define SMB_COM_NT_CANCEL             0xA4
#define SMB_COM_NT_RENAME             0xA5
#define TRANS2_OPEN                   0x00
#define TRANS2_FIND_FIRST             0x01
#define TRANS2_FIND_NEXT              0x02
#define TRANS2_QUERY_FS_INFORMATION   0x03
#define TRANS2_SET_FS_INFORMATION     0x04
#define TRANS2_QUERY_PATH_INFORMATION 0x05
#define TRANS2_SET_PATH_INFORMATION   0x06
#define TRANS2_QUERY_FILE_INFORMATION 0x07
#define TRANS2_SET_FILE_INFORMATION   0x08
#define TRANS2_GET_DFS_REFERRAL       0x10
#define TRANS2_REPORT_DFS_INCOSISTENCY 0x11
#define TRANS_SET_NMPIPE_STATE      0x0001
#define TRANS_RAW_READ_NMPIPE       0x0011
#define TRANS_QUERY_NMPIPE_STATE    0x0021
#define TRANS_QUERY_NMPIPE_INFO     0x0022
#define TRANS_PEEK_NMPIPE           0x0023
#define TRANS_TRANSACT_NMPIPE       0x0026
#define TRANS_RAW_WRITE_NMPIPE      0x0031
#define TRANS_READ_NMPIPE           0x0036
#define TRANS_WRITE_NMPIPE          0x0037
#define TRANS_WAIT_NMPIPE           0x0053
#define TRANS_CALL_NMPIPE           0x0054
#define NT_TRANSACT_CREATE            0x01
#define NT_TRANSACT_IOCTL             0x02
#define NT_TRANSACT_SET_SECURITY_DESC 0x03
#define NT_TRANSACT_NOTIFY_CHANGE     0x04
#define NT_TRANSACT_RENAME            0x05
#define NT_TRANSACT_QUERY_SECURITY_DESC 0x06
#define NT_TRANSACT_GET_USER_QUOTA    0x07
#define NT_TRANSACT_SET_USER_QUOTA    0x08
#define MAX_CIFS_SMALL_BUFFER_SIZE 448
#define MAX_CIFS_HDR_SIZE 0x58
#define CIFS_SMALL_PATH 120
#define CIFS_MAX_MSGSIZE (4*4096)
#define CIFS_ENCPWD_SIZE (16)
#define CIFS_CRYPTO_KEY_SIZE (8)
#define CIFS_AUTH_RESP_SIZE (24)
#define CIFS_SESS_KEY_SIZE (16)
#define CIFS_CLIENT_CHALLENGE_SIZE (8)
#define CIFS_SERVER_CHALLENGE_SIZE (8)
#define CIFS_HMAC_MD5_HASH_SIZE (16)
#define CIFS_CPHTXT_SIZE (16)
#define CIFS_NTHASH_SIZE (16)
#define CIFS_UNLEN (20)
#define SMBOPEN_WRITE_THROUGH 0x4000
#define SMBOPEN_DENY_ALL      0x0010
#define SMBOPEN_DENY_WRITE    0x0020
#define SMBOPEN_DENY_READ     0x0030
#define SMBOPEN_DENY_NONE     0x0040
#define SMBOPEN_READ          0x0000
#define SMBOPEN_WRITE         0x0001
#define SMBOPEN_READWRITE     0x0002
#define SMBOPEN_EXECUTE       0x0003
#define SMBOPEN_OCREATE       0x0010
#define SMBOPEN_OTRUNC        0x0002
#define SMBOPEN_OAPPEND       0x0001
#define SMBFLG_EXTD_LOCK 0x01
#define SMBFLG_RCV_POSTED 0x02
#define SMBFLG_RSVD 0x04
#define SMBFLG_CASELESS 0x08
#define SMBFLG_CANONICAL_PATH_FORMAT 0x10
#define SMBFLG_OLD_OPLOCK 0x20
#define SMBFLG_OLD_OPLOCK_NOTIFY 0x40
#define SMBFLG_RESPONSE 0x80
#define SMBFLG2_KNOWS_LONG_NAMES cpu_to_le16(1)
#define SMBFLG2_KNOWS_EAS cpu_to_le16(2)
#define SMBFLG2_SECURITY_SIGNATURE cpu_to_le16(4)
#define SMBFLG2_COMPRESSED (8)
#define SMBFLG2_SECURITY_SIGNATURE_REQUIRED (0x10)
#define SMBFLG2_IS_LONG_NAME cpu_to_le16(0x40)
#define SMBFLG2_REPARSE_PATH (0x400)
#define SMBFLG2_EXT_SEC cpu_to_le16(0x800)
#define SMBFLG2_DFS cpu_to_le16(0x1000)
#define SMBFLG2_PAGING_IO cpu_to_le16(0x2000)
#define SMBFLG2_ERR_STATUS cpu_to_le16(0x4000)
#define SMBFLG2_UNICODE cpu_to_le16(0x8000)
#define FILE_READ_DATA        0x00000001
#define FILE_WRITE_DATA       0x00000002
#define FILE_APPEND_DATA      0x00000004
#define FILE_READ_EA          0x00000008
#define FILE_WRITE_EA         0x00000010
#define FILE_EXECUTE          0x00000020
#define FILE_DELETE_CHILD     0x00000040
#define FILE_READ_ATTRIBUTES  0x00000080
#define FILE_WRITE_ATTRIBUTES 0x00000100
#define DELETE                0x00010000
#define READ_CONTROL          0x00020000
#define WRITE_DAC             0x00040000
#define WRITE_OWNER           0x00080000
#define SYNCHRONIZE           0x00100000
#define GENERIC_ALL           0x10000000
#define GENERIC_EXECUTE       0x20000000
#define GENERIC_WRITE         0x40000000
#define GENERIC_READ          0x80000000
#define FILE_READ_RIGHTS (FILE_READ_DATA | FILE_READ_EA | FILE_READ_ATTRIBUTES)
#define FILE_WRITE_RIGHTS (FILE_WRITE_DATA | FILE_APPEND_DATA \
| FILE_WRITE_EA | FILE_WRITE_ATTRIBUTES)
#define FILE_EXEC_RIGHTS (FILE_EXECUTE)
#define SET_FILE_READ_RIGHTS (FILE_READ_DATA | FILE_READ_EA | FILE_WRITE_EA \
| FILE_READ_ATTRIBUTES \
| FILE_WRITE_ATTRIBUTES \
| DELETE | READ_CONTROL | WRITE_DAC \
| WRITE_OWNER | SYNCHRONIZE)
#define SET_FILE_WRITE_RIGHTS (FILE_WRITE_DATA | FILE_APPEND_DATA \
| FILE_READ_EA | FILE_WRITE_EA \
| FILE_DELETE_CHILD | FILE_READ_ATTRIBUTES \
| FILE_WRITE_ATTRIBUTES \
| DELETE | READ_CONTROL | WRITE_DAC \
| WRITE_OWNER | SYNCHRONIZE)
#define SET_FILE_EXEC_RIGHTS (FILE_READ_EA | FILE_WRITE_EA | FILE_EXECUTE \
| FILE_READ_ATTRIBUTES \
| FILE_WRITE_ATTRIBUTES \
| DELETE | READ_CONTROL | WRITE_DAC \
| WRITE_OWNER | SYNCHRONIZE)
#define SET_MINIMUM_RIGHTS (FILE_READ_EA | FILE_READ_ATTRIBUTES \
| READ_CONTROL | SYNCHRONIZE)
#define CIFS_NO_HANDLE        0xFFFF
#define NO_CHANGE_64          0xFFFFFFFFFFFFFFFFULL
#define NO_CHANGE_32          0xFFFFFFFFUL
#define CIFS_IPC_RESOURCE "\x49\x50\x43\x24"
#define CIFS_IPC_UNICODE_RESOURCE "\x00\x49\x00\x50\x00\x43\x00\x24\x00\x00"
#define UNICODE_NULL "\x00\x00"
#define ASCII_NULL 0x00
#define CIFS_SV_TYPE_DC     0x00000008
#define CIFS_SV_TYPE_BACKDC 0x00000010
#define CIFS_ALIAS_TYPE_FILE 0x0001
#define CIFS_SHARE_TYPE_FILE 0x0000
#define ATTR_READONLY  0x0001
#define ATTR_HIDDEN    0x0002
#define ATTR_SYSTEM    0x0004
#define ATTR_VOLUME    0x0008
#define ATTR_DIRECTORY 0x0010
#define ATTR_ARCHIVE   0x0020
#define ATTR_DEVICE    0x0040
#define ATTR_NORMAL    0x0080
#define ATTR_TEMPORARY 0x0100
#define ATTR_SPARSE    0x0200
#define ATTR_REPARSE   0x0400
#define ATTR_COMPRESSED 0x0800
#define ATTR_OFFLINE    0x1000
#define ATTR_NOT_CONTENT_INDEXED 0x2000
#define ATTR_ENCRYPTED  0x4000
#define ATTR_POSIX_SEMANTICS 0x01000000
#define ATTR_BACKUP_SEMANTICS 0x02000000
#define ATTR_DELETE_ON_CLOSE 0x04000000
#define ATTR_SEQUENTIAL_SCAN 0x08000000
#define ATTR_RANDOM_ACCESS   0x10000000
#define ATTR_NO_BUFFERING    0x20000000
#define ATTR_WRITE_THROUGH   0x80000000
#define FILE_NO_SHARE     0x00000000
#define FILE_SHARE_READ   0x00000001
#define FILE_SHARE_WRITE  0x00000002
#define FILE_SHARE_DELETE 0x00000004
#define FILE_SHARE_ALL    0x00000007
#define FILE_SUPERSEDE    0x00000000
#define FILE_OPEN         0x00000001
#define FILE_CREATE       0x00000002
#define FILE_OPEN_IF      0x00000003
#define FILE_OVERWRITE    0x00000004
#define FILE_OVERWRITE_IF 0x00000005
#define CREATE_NOT_FILE		0x00000001
#define CREATE_WRITE_THROUGH	0x00000002
#define CREATE_SEQUENTIAL       0x00000004
#define CREATE_NO_BUFFER        0x00000008
#define CREATE_SYNC_ALERT       0x00000010
#define CREATE_ASYNC_ALERT      0x00000020
#define CREATE_NOT_DIR		0x00000040
#define CREATE_TREE_CONNECTION  0x00000080
#define CREATE_COMPLETE_IF_OPLK 0x00000100
#define CREATE_NO_EA_KNOWLEDGE  0x00000200
#define CREATE_EIGHT_DOT_THREE  0x00000400
#define CREATE_OPEN_FOR_RECOVERY 0x00000400
#define CREATE_RANDOM_ACCESS	0x00000800
#define CREATE_DELETE_ON_CLOSE	0x00001000
#define CREATE_OPEN_BY_ID       0x00002000
#define CREATE_OPEN_BACKUP_INTENT 0x00004000
#define CREATE_NO_COMPRESSION   0x00008000
#define CREATE_RESERVE_OPFILTER 0x00100000
#define OPEN_REPARSE_POINT	0x00200000
#define OPEN_NO_RECALL          0x00400000
#define OPEN_FREE_SPACE_QUERY   0x00800000
#define CREATE_OPTIONS_MASK     0x007FFFFF
#define CREATE_OPTION_READONLY	0x10000000
#define CREATE_OPTION_SPECIAL   0x20000000
#define SECURITY_ANONYMOUS      0
#define SECURITY_IDENTIFICATION 1
#define SECURITY_IMPERSONATION  2
#define SECURITY_DELEGATION     3
#define SECURITY_CONTEXT_TRACKING 0x01
#define SECURITY_EFFECTIVE_ONLY   0x02
#define CIFS_DFT_PID  0x1234
#define CIFS_COPY_OP 1
#define CIFS_RENAME_OP 2
#define GETU16(var)  (*((__u16 *)var))
#define GETU32(var)  (*((__u32 *)var))
struct smb_hdr  __attribute__((packed));
static inline void *
BCC(struct smb_hdr *smb)
#define pByteArea(smb_var) (BCC(smb_var) + 2)
static inline __u16
get_bcc(struct smb_hdr *hdr)
static inline void
put_bcc(__u16 count, struct smb_hdr *hdr)
#define CNLEN 15
#define MAXCOMMENTLEN 40
#define MAX_PATHCONF 256
typedef struct negotiate_req  __attribute__((packed)) NEGOTIATE_REQ;
#define MIN_TZ_ADJ (15 * 60)
typedef struct lanman_neg_rsp  __attribute__((packed)) LANMAN_NEG_RSP;
#define READ_RAW_ENABLE 1
#define WRITE_RAW_ENABLE 2
#define RAW_ENABLE (READ_RAW_ENABLE | WRITE_RAW_ENABLE)
typedef struct negotiate_rsp  __attribute__((packed)) NEGOTIATE_RSP;
#define SECMODE_USER          0x01
#define SECMODE_PW_ENCRYPT    0x02
#define SECMODE_SIGN_ENABLED  0x04
#define SECMODE_SIGN_REQUIRED 0x08
#define CAP_RAW_MODE           0x00000001
#define CAP_MPX_MODE           0x00000002
#define CAP_UNICODE            0x00000004
#define CAP_LARGE_FILES        0x00000008
#define CAP_NT_SMBS            0x00000010
#define CAP_RPC_REMOTE_APIS    0x00000020
#define CAP_STATUS32           0x00000040
#define CAP_LEVEL_II_OPLOCKS   0x00000080
#define CAP_LOCK_AND_READ      0x00000100
#define CAP_NT_FIND            0x00000200
#define CAP_DFS                0x00001000
#define CAP_INFOLEVEL_PASSTHRU 0x00002000
#define CAP_LARGE_READ_X       0x00004000
#define CAP_LARGE_WRITE_X      0x00008000
#define CAP_LWIO               0x00010000
#define CAP_UNIX               0x00800000
#define CAP_COMPRESSED_DATA    0x02000000
#define CAP_DYNAMIC_REAUTH     0x20000000
#define CAP_PERSISTENT_HANDLES 0x40000000
#define CAP_EXTENDED_SECURITY  0x80000000
typedef union smb_com_session_setup_andx  __attribute__((packed)) SESSION_SETUP_ANDX;
#define NTLMSSP_SERVER_TYPE	1
#define NTLMSSP_DOMAIN_TYPE	2
#define NTLMSSP_FQ_DOMAIN_TYPE	3
#define NTLMSSP_DNS_DOMAIN_TYPE	4
#define NTLMSSP_DNS_PARENT_TYPE	5
struct ntlmssp2_name  __attribute__((packed));
struct ntlmv2_resp  __attribute__((packed));
#define CIFS_NETWORK_OPSYS "CIFS VFS Client for Linux"
#define CAP_UNICODE            0x00000004
#define CAP_LARGE_FILES        0x00000008
#define CAP_NT_SMBS            0x00000010
#define CAP_STATUS32           0x00000040
#define CAP_LEVEL_II_OPLOCKS   0x00000080
#define CAP_NT_FIND            0x00000200
#define CAP_BULK_TRANSFER      0x20000000
#define CAP_EXTENDED_SECURITY  0x80000000
#define GUEST_LOGIN 1
typedef struct smb_com_tconx_req  __attribute__((packed)) TCONX_REQ;
typedef struct smb_com_tconx_rsp  __attribute__((packed)) TCONX_RSP;
typedef struct smb_com_tconx_rsp_ext  __attribute__((packed)) TCONX_RSP_EXT;
#define DISCONNECT_TID          0x0001
#define TCON_EXTENDED_SIGNATURES 0x0004
#define TCON_EXTENDED_SECINFO   0x0008
#define SMB_SUPPORT_SEARCH_BITS 0x0001
#define SMB_SHARE_IS_IN_DFS     0x0002
#define SMB_CSC_MASK               0x000C
#define SMB_CSC_CACHE_MANUAL_REINT 0x0000
#define SMB_CSC_CACHE_AUTO_REINT   0x0004
#define SMB_CSC_CACHE_VDO          0x0008
#define SMB_CSC_NO_CACHING         0x000C
#define SMB_UNIQUE_FILE_NAME    0x0010
#define SMB_EXTENDED_SIGNATURES 0x0020
typedef struct smb_com_echo_req  __attribute__((packed)) ECHO_REQ;
typedef struct smb_com_echo_rsp  __attribute__((packed)) ECHO_RSP;
typedef struct smb_com_logoff_andx_req  __attribute__((packed)) LOGOFF_ANDX_REQ;
typedef struct smb_com_logoff_andx_rsp  __attribute__((packed)) LOGOFF_ANDX_RSP;
typedef union smb_com_tree_disconnect  __attribute__((packed)) TREE_DISCONNECT;
typedef struct smb_com_close_req  __attribute__((packed)) CLOSE_REQ;
typedef struct smb_com_close_rsp  __attribute__((packed)) CLOSE_RSP;
typedef struct smb_com_flush_req  __attribute__((packed)) FLUSH_REQ;
typedef struct smb_com_findclose_req  __attribute__((packed)) FINDCLOSE_REQ;
#define REQ_MORE_INFO      0x00000001
#define REQ_OPLOCK         0x00000002
#define REQ_BATCHOPLOCK    0x00000004
#define REQ_OPENDIRONLY    0x00000008
#define REQ_EXTENDED_INFO  0x00000010
#define DISK_TYPE		0x0000
#define BYTE_PIPE_TYPE		0x0001
#define MESSAGE_PIPE_TYPE	0x0002
#define PRINTER_TYPE		0x0003
#define COMM_DEV_TYPE		0x0004
#define UNKNOWN_TYPE		0xFFFF
#define NO_EAS			0x0001
#define NO_SUBSTREAMS		0x0002
#define NO_REPARSETAG		0x0004
#define ICOUNT_MASK		0x00FF
#define PIPE_READ_MODE		0x0100
#define NAMED_PIPE_TYPE		0x0400
#define PIPE_END_POINT		0x4000
#define BLOCKING_NAMED_PIPE	0x8000
typedef struct smb_com_open_req  __attribute__((packed)) OPEN_REQ;
#define OPLOCK_NONE  	 0
#define OPLOCK_EXCLUSIVE 1
#define OPLOCK_BATCH	 2
#define OPLOCK_READ	 3
#define CIFS_CREATE_ACTION 0x20000
typedef struct smb_com_open_rsp  __attribute__((packed)) OPEN_RSP;
typedef struct smb_com_open_rsp_ext  __attribute__((packed)) OPEN_RSP_EXT;
typedef struct smb_com_openx_req  __attribute__((packed)) OPENX_REQ;
typedef struct smb_com_openx_rsp  __attribute__((packed)) OPENX_RSP;
typedef struct smb_com_writex_req  __attribute__((packed)) WRITEX_REQ;
typedef struct smb_com_write_req  __attribute__((packed)) WRITE_REQ;
typedef struct smb_com_write_rsp  __attribute__((packed)) WRITE_RSP;
typedef struct smb_com_readx_req  __attribute__((packed)) READX_REQ;
typedef struct smb_com_read_req  __attribute__((packed)) READ_REQ;
typedef struct smb_com_read_rsp  __attribute__((packed)) READ_RSP;
typedef struct locking_andx_range  __attribute__((packed)) LOCKING_ANDX_RANGE;
#define LOCKING_ANDX_SHARED_LOCK     0x01
#define LOCKING_ANDX_OPLOCK_RELEASE  0x02
#define LOCKING_ANDX_CHANGE_LOCKTYPE 0x04
#define LOCKING_ANDX_CANCEL_LOCK     0x08
#define LOCKING_ANDX_LARGE_FILES     0x10
typedef struct smb_com_lock_req  __attribute__((packed)) LOCK_REQ;
#define CIFS_RDLCK	0
#define CIFS_WRLCK	1
#define CIFS_UNLCK      2
typedef struct cifs_posix_lock  __attribute__((packed)) CIFS_POSIX_LOCK;
typedef struct smb_com_lock_rsp  __attribute__((packed)) LOCK_RSP;
typedef struct smb_com_rename_req  __attribute__((packed)) RENAME_REQ;
#define COPY_MUST_BE_FILE      0x0001
#define COPY_MUST_BE_DIR       0x0002
#define COPY_TARGET_MODE_ASCII 0x0004
#define COPY_SOURCE_MODE_ASCII 0x0008
#define COPY_VERIFY_WRITES     0x0010
#define COPY_TREE              0x0020
typedef struct smb_com_copy_req  __attribute__((packed)) COPY_REQ;
typedef struct smb_com_copy_rsp  __attribute__((packed)) COPY_RSP;
#define CREATE_HARD_LINK		0x103
#define MOVEFILE_COPY_ALLOWED		0x0002
#define MOVEFILE_REPLACE_EXISTING	0x0001
typedef struct smb_com_nt_rename_req  __attribute__((packed)) NT_RENAME_REQ;
typedef struct smb_com_rename_rsp  __attribute__((packed)) RENAME_RSP;
typedef struct smb_com_delete_file_req  __attribute__((packed)) DELETE_FILE_REQ;
typedef struct smb_com_delete_file_rsp  __attribute__((packed)) DELETE_FILE_RSP;
typedef struct smb_com_delete_directory_req  __attribute__((packed)) DELETE_DIRECTORY_REQ;
typedef struct smb_com_delete_directory_rsp  __attribute__((packed)) DELETE_DIRECTORY_RSP;
typedef struct smb_com_create_directory_req  __attribute__((packed)) CREATE_DIRECTORY_REQ;
typedef struct smb_com_create_directory_rsp  __attribute__((packed)) CREATE_DIRECTORY_RSP;
typedef struct smb_com_query_information_req  __attribute__((packed)) QUERY_INFORMATION_REQ;
typedef struct smb_com_query_information_rsp  __attribute__((packed)) QUERY_INFORMATION_RSP;
typedef struct smb_com_setattr_req  __attribute__((packed)) SETATTR_REQ;
typedef struct smb_com_setattr_rsp  __attribute__((packed)) SETATTR_RSP;
typedef struct smb_com_ntransact_req  __attribute__((packed)) NTRANSACT_REQ;
typedef struct smb_com_ntransact_rsp  __attribute__((packed)) NTRANSACT_RSP;
typedef struct smb_com_transaction_ioctl_req  __attribute__((packed)) TRANSACT_IOCTL_REQ;
typedef struct smb_com_transaction_ioctl_rsp  __attribute__((packed)) TRANSACT_IOCTL_RSP;
#define CIFS_ACL_OWNER 1
#define CIFS_ACL_GROUP 2
#define CIFS_ACL_DACL  4
#define CIFS_ACL_SACL  8
typedef struct smb_com_transaction_qsec_req  __attribute__((packed)) QUERY_SEC_DESC_REQ;
typedef struct smb_com_transaction_ssec_req  __attribute__((packed)) SET_SEC_DESC_REQ;
typedef struct smb_com_transaction_change_notify_req  __attribute__((packed)) TRANSACT_CHANGE_NOTIFY_REQ;
typedef struct smb_com_transaction_change_notify_rsp  __attribute__((packed)) TRANSACT_CHANGE_NOTIFY_RSP;
#define FILE_NOTIFY_CHANGE_FILE_NAME    0x00000001
#define FILE_NOTIFY_CHANGE_DIR_NAME     0x00000002
#define FILE_NOTIFY_CHANGE_NAME         0x00000003
#define FILE_NOTIFY_CHANGE_ATTRIBUTES   0x00000004
#define FILE_NOTIFY_CHANGE_SIZE         0x00000008
#define FILE_NOTIFY_CHANGE_LAST_WRITE   0x00000010
#define FILE_NOTIFY_CHANGE_LAST_ACCESS  0x00000020
#define FILE_NOTIFY_CHANGE_CREATION     0x00000040
#define FILE_NOTIFY_CHANGE_EA           0x00000080
#define FILE_NOTIFY_CHANGE_SECURITY     0x00000100
#define FILE_NOTIFY_CHANGE_STREAM_NAME  0x00000200
#define FILE_NOTIFY_CHANGE_STREAM_SIZE  0x00000400
#define FILE_NOTIFY_CHANGE_STREAM_WRITE 0x00000800
#define FILE_ACTION_ADDED		0x00000001
#define FILE_ACTION_REMOVED		0x00000002
#define FILE_ACTION_MODIFIED		0x00000003
#define FILE_ACTION_RENAMED_OLD_NAME	0x00000004
#define FILE_ACTION_RENAMED_NEW_NAME	0x00000005
#define FILE_ACTION_ADDED_STREAM	0x00000006
#define FILE_ACTION_REMOVED_STREAM	0x00000007
#define FILE_ACTION_MODIFIED_STREAM	0x00000008
struct file_notify_information  __attribute__((packed));
struct reparse_data  __attribute__((packed));
struct cifs_quota_data  __attribute__((packed));
#define QUOTA_LIST_CONTINUE	    0
#define QUOTA_LIST_START	0x100
#define QUOTA_FOR_SID		0x101
struct trans2_req  __attribute__((packed));
struct smb_t2_req  __attribute__((packed));
struct trans2_resp  __attribute__((packed));
struct smb_t2_rsp  __attribute__((packed));
#define SMB_INFO_STANDARD                   1
#define SMB_SET_FILE_EA                     2
#define SMB_QUERY_FILE_EA_SIZE              2
#define SMB_INFO_QUERY_EAS_FROM_LIST        3
#define SMB_INFO_QUERY_ALL_EAS              4
#define SMB_INFO_IS_NAME_VALID              6
#define SMB_QUERY_FILE_BASIC_INFO       0x101
#define SMB_QUERY_FILE_STANDARD_INFO    0x102
#define SMB_QUERY_FILE_EA_INFO          0x103
#define SMB_QUERY_FILE_NAME_INFO        0x104
#define SMB_QUERY_FILE_ALLOCATION_INFO  0x105
#define SMB_QUERY_FILE_END_OF_FILEINFO  0x106
#define SMB_QUERY_FILE_ALL_INFO         0x107
#define SMB_QUERY_ALT_NAME_INFO         0x108
#define SMB_QUERY_FILE_STREAM_INFO      0x109
#define SMB_QUERY_FILE_COMPRESSION_INFO 0x10B
#define SMB_QUERY_FILE_UNIX_BASIC       0x200
#define SMB_QUERY_FILE_UNIX_LINK        0x201
#define SMB_QUERY_POSIX_ACL             0x204
#define SMB_QUERY_XATTR                 0x205
#define SMB_QUERY_ATTR_FLAGS            0x206
#define SMB_QUERY_POSIX_PERMISSION      0x207
#define SMB_QUERY_POSIX_LOCK            0x208
#define SMB_QUERY_FILE__UNIX_INFO2      0x20b
#define SMB_QUERY_FILE_INTERNAL_INFO    0x3ee
#define SMB_QUERY_FILE_ACCESS_INFO      0x3f0
#define SMB_QUERY_FILE_NAME_INFO2       0x3f1
#define SMB_QUERY_FILE_POSITION_INFO    0x3f6
#define SMB_QUERY_FILE_MODE_INFO        0x3f8
#define SMB_QUERY_FILE_ALGN_INFO        0x3f9
#define SMB_SET_FILE_BASIC_INFO	        0x101
#define SMB_SET_FILE_DISPOSITION_INFO   0x102
#define SMB_SET_FILE_ALLOCATION_INFO    0x103
#define SMB_SET_FILE_END_OF_FILE_INFO   0x104
#define SMB_SET_FILE_UNIX_BASIC         0x200
#define SMB_SET_FILE_UNIX_LINK          0x201
#define SMB_SET_FILE_UNIX_HLINK         0x203
#define SMB_SET_POSIX_ACL               0x204
#define SMB_SET_XATTR                   0x205
#define SMB_SET_ATTR_FLAGS              0x206
#define SMB_SET_POSIX_LOCK              0x208
#define SMB_POSIX_OPEN                  0x209
#define SMB_POSIX_UNLINK                0x20a
#define SMB_SET_FILE_UNIX_INFO2         0x20b
#define SMB_SET_FILE_BASIC_INFO2        0x3ec
#define SMB_SET_FILE_RENAME_INFORMATION 0x3f2
#define SMB_FILE_ALL_INFO2              0x3fa
#define SMB_SET_FILE_ALLOCATION_INFO2   0x3fb
#define SMB_SET_FILE_END_OF_FILE_INFO2  0x3fc
#define SMB_FILE_MOVE_CLUSTER_INFO      0x407
#define SMB_FILE_QUOTA_INFO             0x408
#define SMB_FILE_REPARSEPOINT_INFO      0x409
#define SMB_FILE_MAXIMUM_INFO           0x40d
#define SMB_FIND_FILE_INFO_STANDARD       0x001
#define SMB_FIND_FILE_QUERY_EA_SIZE       0x002
#define SMB_FIND_FILE_QUERY_EAS_FROM_LIST 0x003
#define SMB_FIND_FILE_DIRECTORY_INFO      0x101
#define SMB_FIND_FILE_FULL_DIRECTORY_INFO 0x102
#define SMB_FIND_FILE_NAMES_INFO          0x103
#define SMB_FIND_FILE_BOTH_DIRECTORY_INFO 0x104
#define SMB_FIND_FILE_ID_FULL_DIR_INFO    0x105
#define SMB_FIND_FILE_ID_BOTH_DIR_INFO    0x106
#define SMB_FIND_FILE_UNIX                0x202
typedef struct smb_com_transaction2_qpi_req  __attribute__((packed)) TRANSACTION2_QPI_REQ;
typedef struct smb_com_transaction2_qpi_rsp  __attribute__((packed)) TRANSACTION2_QPI_RSP;
typedef struct smb_com_transaction2_spi_req  __attribute__((packed)) TRANSACTION2_SPI_REQ;
typedef struct smb_com_transaction2_spi_rsp  __attribute__((packed)) TRANSACTION2_SPI_RSP;
struct set_file_rename  __attribute__((packed));
struct smb_com_transaction2_sfi_req  __attribute__((packed));
struct smb_com_transaction2_sfi_rsp  __attribute__((packed));
struct smb_t2_qfi_req  __attribute__((packed));
struct smb_t2_qfi_rsp  __attribute__((packed));
#define CIFS_SEARCH_CLOSE_ALWAYS  0x0001
#define CIFS_SEARCH_CLOSE_AT_END  0x0002
#define CIFS_SEARCH_RETURN_RESUME 0x0004
#define CIFS_SEARCH_CONTINUE_FROM_LAST 0x0008
#define CIFS_SEARCH_BACKUP_SEARCH 0x0010
#define CIFS_SMB_RESUME_KEY_SIZE 4
typedef struct smb_com_transaction2_ffirst_req  __attribute__((packed)) TRANSACTION2_FFIRST_REQ;
typedef struct smb_com_transaction2_ffirst_rsp  __attribute__((packed)) TRANSACTION2_FFIRST_RSP;
typedef struct smb_com_transaction2_ffirst_rsp_parms  __attribute__((packed)) T2_FFIRST_RSP_PARMS;
typedef struct smb_com_transaction2_fnext_req  __attribute__((packed)) TRANSACTION2_FNEXT_REQ;
typedef struct smb_com_transaction2_fnext_rsp  __attribute__((packed)) TRANSACTION2_FNEXT_RSP;
typedef struct smb_com_transaction2_fnext_rsp_parms  __attribute__((packed)) T2_FNEXT_RSP_PARMS;
#define SMB_INFO_ALLOCATION         1
#define SMB_INFO_VOLUME             2
#define SMB_QUERY_FS_VOLUME_INFO    0x102
#define SMB_QUERY_FS_SIZE_INFO      0x103
#define SMB_QUERY_FS_DEVICE_INFO    0x104
#define SMB_QUERY_FS_ATTRIBUTE_INFO 0x105
#define SMB_QUERY_CIFS_UNIX_INFO    0x200
#define SMB_QUERY_POSIX_FS_INFO     0x201
#define SMB_QUERY_POSIX_WHO_AM_I    0x202
#define SMB_REQUEST_TRANSPORT_ENCRYPTION 0x203
#define SMB_QUERY_FS_PROXY          0x204
#define SMB_QUERY_LABEL_INFO        0x3ea
#define SMB_QUERY_FS_QUOTA_INFO     0x3ee
#define SMB_QUERY_FS_FULL_SIZE_INFO 0x3ef
#define SMB_QUERY_OBJECTID_INFO     0x3f0
typedef struct smb_com_transaction2_qfsi_req  __attribute__((packed)) TRANSACTION2_QFSI_REQ;
typedef struct smb_com_transaction_qfsi_rsp  __attribute__((packed)) WHOAMI_RSP_DATA;
#define SMB_SET_CIFS_UNIX_INFO    0x200
typedef struct smb_com_transaction2_setfsi_req  __attribute__((packed)) TRANSACTION2_SETFSI_REQ;
typedef struct smb_com_transaction2_setfsi_rsp  __attribute__((packed)) TRANSACTION2_SETFSI_RSP;
typedef struct smb_com_transaction2_get_dfs_refer_req  __attribute__((packed)) TRANSACTION2_GET_DFS_REFER_REQ;
#define DFS_VERSION cpu_to_le16(0x0003)
#define DFS_TYPE_LINK 0x0000
#define DFS_TYPE_ROOT 0x0001
#define DFS_NAME_LIST_REF 0x0200
#define DFS_TARGET_SET_BOUNDARY 0x0400
typedef struct dfs_referral_level_3  __attribute__((packed)) REFERRAL3;
typedef struct smb_com_transaction_get_dfs_refer_rsp  __attribute__((packed)) TRANSACTION2_GET_DFS_REFER_RSP;
#define DFSREF_REFERRAL_SERVER  0x00000001
#define DFSREF_STORAGE_SERVER   0x00000002
#define DFSREF_TARGET_FAILBACK  0x00000004
struct serverInfo  __attribute__((packed));
struct shareInfo  __attribute__((packed));
struct aliasInfo  __attribute__((packed));
struct aliasInfo92  __attribute__((packed));
typedef struct  __attribute__((packed)) FILE_SYSTEM_INFO;
typedef struct  __attribute__((packed)) FILE_SYSTEM_ALLOC_INFO;
typedef struct  __attribute__((packed)) FILE_SYSTEM_UNIX_INFO;
#define CIFS_UNIX_MAJOR_VERSION 1
#define CIFS_UNIX_MINOR_VERSION 0
#define CIFS_UNIX_FCNTL_CAP             0x00000001
#define CIFS_UNIX_POSIX_ACL_CAP         0x00000002
#define CIFS_UNIX_XATTR_CAP             0x00000004
#define CIFS_UNIX_EXTATTR_CAP           0x00000008
#define CIFS_UNIX_POSIX_PATHNAMES_CAP   0x00000010
#define CIFS_UNIX_POSIX_PATH_OPS_CAP    0x00000020
#define CIFS_UNIX_LARGE_READ_CAP        0x00000040
#define CIFS_UNIX_LARGE_WRITE_CAP       0x00000080
#define CIFS_UNIX_TRANSPORT_ENCRYPTION_CAP 0x00000100
#define CIFS_UNIX_TRANSPORT_ENCRYPTION_MANDATORY_CAP  0x00000200
#define CIFS_UNIX_PROXY_CAP             0x00000400
#define CIFS_UNIX_CAP_MASK              0x000000db
#define CIFS_UNIX_CAP_MASK              0x00000013
#define CIFS_POSIX_EXTENSIONS           0x00000010
typedef struct  __attribute__((packed)) FILE_SYSTEM_POSIX_INFO;
#define FILE_DEVICE_CD_ROM              0x00000002
#define FILE_DEVICE_CD_ROM_FILE_SYSTEM  0x00000003
#define FILE_DEVICE_DFS                 0x00000006
#define FILE_DEVICE_DISK                0x00000007
#define FILE_DEVICE_DISK_FILE_SYSTEM    0x00000008
#define FILE_DEVICE_FILE_SYSTEM         0x00000009
#define FILE_DEVICE_NAMED_PIPE          0x00000011
#define FILE_DEVICE_NETWORK             0x00000012
#define FILE_DEVICE_NETWORK_FILE_SYSTEM 0x00000014
#define FILE_DEVICE_NULL                0x00000015
#define FILE_DEVICE_PARALLEL_PORT       0x00000016
#define FILE_DEVICE_PRINTER             0x00000018
#define FILE_DEVICE_SERIAL_PORT         0x0000001b
#define FILE_DEVICE_STREAMS             0x0000001e
#define FILE_DEVICE_TAPE                0x0000001f
#define FILE_DEVICE_TAPE_FILE_SYSTEM    0x00000020
#define FILE_DEVICE_VIRTUAL_DISK        0x00000024
#define FILE_DEVICE_NETWORK_REDIRECTOR  0x00000028
typedef struct  __attribute__((packed)) FILE_SYSTEM_DEVICE_INFO;
typedef struct  __attribute__((packed)) FILE_SYSTEM_ATTRIBUTE_INFO;
typedef struct  __attribute__((packed)) FILE_ALL_INFO;
#define UNIX_FILE      0
#define UNIX_DIR       1
#define UNIX_SYMLINK   2
#define UNIX_CHARDEV   3
#define UNIX_BLOCKDEV  4
#define UNIX_FIFO      5
#define UNIX_SOCKET    6
typedef struct  __attribute__((packed)) FILE_UNIX_BASIC_INFO;
typedef struct  __attribute__((packed)) FILE_UNIX_LINK_INFO;
typedef struct  __attribute__((packed)) SMB_DATE;
typedef struct  __attribute__((packed)) SMB_TIME;
typedef struct  __attribute__((packed)) FILE_INFO_STANDARD;
typedef struct  __attribute__((packed)) FILE_BASIC_INFO;
struct file_allocation_info  __attribute__((packed));
struct file_end_of_file_info  __attribute__((packed));
struct file_alt_name_info  __attribute__((packed));
struct file_stream_info ;
struct file_compression_info  __attribute__((packed));
#define CIFS_ACL_VERSION 1
struct cifs_posix_ace  __attribute__((packed));
struct cifs_posix_acl  __attribute__((packed));
#define SMB_O_RDONLY 	 0x1
#define SMB_O_WRONLY 	0x2
#define SMB_O_RDWR 	0x4
#define SMB_O_CREAT 	0x10
#define SMB_O_EXCL 	0x20
#define SMB_O_TRUNC 	0x40
#define SMB_O_APPEND 	0x80
#define SMB_O_SYNC 	0x100
#define SMB_O_DIRECTORY 0x200
#define SMB_O_NOFOLLOW 	0x400
#define SMB_O_DIRECT 	0x800
typedef struct  __attribute__((packed)) OPEN_PSX_REQ;
typedef struct  __attribute__((packed)) OPEN_PSX_RSP;
#define SMB_POSIX_UNLINK_FILE_TARGET		0
#define SMB_POSIX_UNLINK_DIRECTORY_TARGET	1
struct unlink_psx_rq  __attribute__((packed));
struct file_internal_info  __attribute__((packed));
struct file_mode_info  __attribute__((packed));
struct file_attrib_tag  __attribute__((packed));
typedef struct  __attribute__((packed)) FILE_UNIX_INFO;
typedef struct  __attribute__((packed)) FILE_DIRECTORY_INFO;
typedef struct  __attribute__((packed)) FILE_FULL_DIRECTORY_INFO;
typedef struct  __attribute__((packed)) SEARCH_ID_FULL_DIR_INFO;
typedef struct  __attribute__((packed)) FILE_BOTH_DIRECTORY_INFO;
typedef struct  __attribute__((packed)) FIND_FILE_STANDARD_INFO;
struct win_dev  __attribute__((packed));
struct gea  __attribute__((packed));
struct gealist  __attribute__((packed));
struct fea  __attribute__((packed));
#define FEA_NEEDEA         0x80
struct fealist  __attribute__((packed));
struct data_blob  __attribute__((packed));
struct xsymlink  __attribute__((packed));
typedef struct file_xattr_info  __attribute__((packed)) FILE_XATTR_INFO;
#define EXT_SECURE_DELETE		0x00000001
#define EXT_ENABLE_UNDELETE		0x00000002
#define EXT_SYNCHRONOUS			0x00000008
#define EXT_IMMUTABLE_FL		0x00000010
#define EXT_OPEN_APPEND_ONLY		0x00000020
#define EXT_DO_NOT_BACKUP		0x00000040
#define EXT_NO_UPDATE_ATIME		0x00000080
#define EXT_HASH_TREE_INDEXED_DIR	0x00001000
#define EXT_JOURNAL_THIS_FILE	0x00004000
#define EXT_SYNCHRONOUS_DIR		0x00010000
#define EXT_TOPDIR			0x00020000
#define EXT_SET_MASK			0x000300FF
#define EXT_GET_MASK			0x0003DFFF
typedef struct file_chattr_info  __attribute__((packed)) FILE_CHATTR_INFO;
