#define CYASGADGET_IOCTL_H
typedef struct cy_as_gadget_ioctl_send_object  cy_as_gadget_ioctl_send_object;
typedef struct cy_as_gadget_ioctl_get_object  cy_as_gadget_ioctl_get_object;
typedef struct cy_as_gadget_ioctl_tmtp_status  cy_as_gadget_ioctl_tmtp_status;
typedef struct cy_as_gadget_ioctl_i_s_o_j_d  cy_as_gadget_ioctl_i_s_o_j_d;
typedef struct cy_as_gadget_ioctl_i_g_o_j_d   cy_as_gadget_ioctl_i_g_o_j_d;
typedef struct cy_as_gadget_ioctl_cancel  cy_as_gadget_ioctl_cancel;
#define CYASGADGET_IOC_MAGIC 0xEF
#define CYASGADGET_GETMTPSTATUS \
_IOW(CYASGADGET_IOC_MAGIC,  0, cy_as_gadget_ioctl_tmtp_status)
#define CYASGADGET_CLEARTMTPSTATUS \
_IO(CYASGADGET_IOC_MAGIC,   1)
#define CYASGADGET_INITSOJ \
_IOW(CYASGADGET_IOC_MAGIC,  2, cy_as_gadget_ioctl_i_s_o_j_d)
#define CYASGADGET_INITGOJ \
_IOW(CYASGADGET_IOC_MAGIC,  3, cy_as_gadget_ioctl_i_g_o_j_d)
#define CYASGADGET_CANCELSOJ \
_IOW(CYASGADGET_IOC_MAGIC,   4, cy_as_gadget_ioctl_cancel)
#define CYASGADGET_CANCELGOJ \
_IOW(CYASGADGET_IOC_MAGIC,   5, cy_as_gadget_ioctl_cancel)
#define CYASGADGET_IOC_MAXNR 6
