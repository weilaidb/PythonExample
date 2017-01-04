#define __PVRUSB2_DEBUGIFC_H
struct pvr2_hdw;
int pvr2_debugifc_print_info(struct pvr2_hdw *,
char *buf_ptr, unsigned int buf_size);
int pvr2_debugifc_print_status(struct pvr2_hdw *,
char *buf_ptr,unsigned int buf_size);
int pvr2_debugifc_docmd(struct pvr2_hdw *,
const char *buf_ptr,unsigned int buf_size);
