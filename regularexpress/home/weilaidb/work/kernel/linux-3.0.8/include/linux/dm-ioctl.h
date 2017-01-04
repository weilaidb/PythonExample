#define _LINUX_DM_IOCTL_V4_H
#define DM_DIR "mapper"
#define DM_CONTROL_NODE "control"
#define DM_MAX_TYPE_NAME 16
#define DM_NAME_LEN 128
#define DM_UUID_LEN 129
struct dm_ioctl ;
struct dm_target_spec ;
struct dm_target_deps ;
struct dm_name_list ;
struct dm_target_versions ;
struct dm_target_msg ;
enum ;
#define DM_IOCTL 0xfd
#define DM_VERSION       _IOWR(DM_IOCTL, DM_VERSION_CMD, struct dm_ioctl)
#define DM_REMOVE_ALL    _IOWR(DM_IOCTL, DM_REMOVE_ALL_CMD, struct dm_ioctl)
#define DM_LIST_DEVICES  _IOWR(DM_IOCTL, DM_LIST_DEVICES_CMD, struct dm_ioctl)
#define DM_DEV_CREATE    _IOWR(DM_IOCTL, DM_DEV_CREATE_CMD, struct dm_ioctl)
#define DM_DEV_REMOVE    _IOWR(DM_IOCTL, DM_DEV_REMOVE_CMD, struct dm_ioctl)
#define DM_DEV_RENAME    _IOWR(DM_IOCTL, DM_DEV_RENAME_CMD, struct dm_ioctl)
#define DM_DEV_SUSPEND   _IOWR(DM_IOCTL, DM_DEV_SUSPEND_CMD, struct dm_ioctl)
#define DM_DEV_STATUS    _IOWR(DM_IOCTL, DM_DEV_STATUS_CMD, struct dm_ioctl)
#define DM_DEV_WAIT      _IOWR(DM_IOCTL, DM_DEV_WAIT_CMD, struct dm_ioctl)
#define DM_TABLE_LOAD    _IOWR(DM_IOCTL, DM_TABLE_LOAD_CMD, struct dm_ioctl)
#define DM_TABLE_CLEAR   _IOWR(DM_IOCTL, DM_TABLE_CLEAR_CMD, struct dm_ioctl)
#define DM_TABLE_DEPS    _IOWR(DM_IOCTL, DM_TABLE_DEPS_CMD, struct dm_ioctl)
#define DM_TABLE_STATUS  _IOWR(DM_IOCTL, DM_TABLE_STATUS_CMD, struct dm_ioctl)
#define DM_LIST_VERSIONS _IOWR(DM_IOCTL, DM_LIST_VERSIONS_CMD, struct dm_ioctl)
#define DM_TARGET_MSG	 _IOWR(DM_IOCTL, DM_TARGET_MSG_CMD, struct dm_ioctl)
#define DM_DEV_SET_GEOMETRY	_IOWR(DM_IOCTL, DM_DEV_SET_GEOMETRY_CMD, struct dm_ioctl)
#define DM_VERSION_MAJOR	4
#define DM_VERSION_MINOR	20
#define DM_VERSION_PATCHLEVEL	0
#define DM_VERSION_EXTRA	"-ioctl (2011-02-02)"
#define DM_READONLY_FLAG	(1 << 0)
#define DM_SUSPEND_FLAG		(1 << 1)
#define DM_PERSISTENT_DEV_FLAG	(1 << 3)
#define DM_STATUS_TABLE_FLAG	(1 << 4)
#define DM_ACTIVE_PRESENT_FLAG   (1 << 5)
#define DM_INACTIVE_PRESENT_FLAG (1 << 6)
#define DM_BUFFER_FULL_FLAG	(1 << 8)
#define DM_SKIP_BDGET_FLAG	(1 << 9)
#define DM_SKIP_LOCKFS_FLAG	(1 << 10)
#define DM_NOFLUSH_FLAG		(1 << 11)
#define DM_QUERY_INACTIVE_TABLE_FLAG	(1 << 12)
#define DM_UEVENT_GENERATED_FLAG	(1 << 13)
#define DM_UUID_FLAG			(1 << 14)
#define DM_SECURE_DATA_FLAG		(1 << 15)
