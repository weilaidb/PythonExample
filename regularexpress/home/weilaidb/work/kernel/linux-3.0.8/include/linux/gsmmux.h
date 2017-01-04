#define _LINUX_GSMMUX_H
struct gsm_config
;
#define GSMIOC_GETCONF		_IOR('G', 0, struct gsm_config)
#define GSMIOC_SETCONF		_IOW('G', 1, struct gsm_config)
