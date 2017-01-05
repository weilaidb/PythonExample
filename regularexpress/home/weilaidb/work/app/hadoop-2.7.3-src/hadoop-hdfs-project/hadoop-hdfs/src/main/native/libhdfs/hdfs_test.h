#define LIBHDFS_HDFS_TEST_H
struct hdfsFile_internal;
int hdfsFileUsesDirectRead(struct hdfsFile_internal *file);
void hdfsFileDisableDirectRead(struct hdfsFile_internal *file);
int hdfsDisableDomainSocketSecurity(void);
