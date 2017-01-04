#define UUIDUTIL_
#define MAXUUIDLEN  37
void uuid_uuid_to_string(struct dsp_uuid *uuid_obj, char *sz_uuid,
s32 size);
extern void uuid_uuid_from_string(char *sz_uuid,
struct dsp_uuid *uuid_obj);
