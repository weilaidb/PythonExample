#define CEPH_RBD_TYPES_H
#define RBD_SUFFIX		".rbd"
#define RBD_DIRECTORY           "rbd_directory"
#define RBD_INFO                "rbd_info"
#define RBD_DEFAULT_OBJ_ORDER	22
#define RBD_MIN_OBJ_ORDER       16
#define RBD_MAX_OBJ_ORDER       30
#define RBD_MAX_OBJ_NAME_LEN	96
#define RBD_MAX_SEG_NAME_LEN	128
#define RBD_COMP_NONE		0
#define RBD_CRYPT_NONE		0
#define RBD_HEADER_TEXT		"<<< Rados Block Device Image >>>\n"
#define RBD_HEADER_SIGNATURE	"RBD"
#define RBD_HEADER_VERSION	"001.005"
struct rbd_info  __attribute__ ((packed));
struct rbd_image_snap_ondisk  __attribute__((packed));
struct rbd_image_header_ondisk  __attribute__((packed));
