#define __PVRUSB2_STD_H
int pvr2_std_str_to_id(v4l2_std_id *idPtr,const char *bufPtr,
unsigned int bufSize);
unsigned int pvr2_std_id_to_str(char *bufPtr, unsigned int bufSize,
v4l2_std_id id);
struct v4l2_standard *pvr2_std_create_enum(unsigned int *countptr,
v4l2_std_id id);
v4l2_std_id pvr2_std_get_usable(void);
