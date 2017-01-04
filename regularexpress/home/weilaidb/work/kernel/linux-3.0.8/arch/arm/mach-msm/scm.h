#define __MACH_SCM_H
#define SCM_SVC_BOOT			0x1
#define SCM_SVC_PIL			0x2
extern int scm_call(u32 svc_id, u32 cmd_id, const void *cmd_buf, size_t cmd_len,
void *resp_buf, size_t resp_len);
#define SCM_VERSION(major, minor) (((major) << 16) | ((minor) & 0xFF))
extern u32 scm_get_version(void);
