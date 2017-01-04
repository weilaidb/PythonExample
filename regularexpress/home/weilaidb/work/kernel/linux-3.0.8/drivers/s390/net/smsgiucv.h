#define SMSGIUCV_DRV_NAME     "SMSGIUCV"
int  smsg_register_callback(const char *,
void (*)(const char *, char *));
void smsg_unregister_callback(const char *,
void (*)(const char *, char *));
