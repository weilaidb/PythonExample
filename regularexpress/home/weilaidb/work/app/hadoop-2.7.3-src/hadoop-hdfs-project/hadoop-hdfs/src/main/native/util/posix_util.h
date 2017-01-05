#define __POSIX_UTIL_H__
int recursiveDeleteContents(const char *path);
int recursiveDelete(const char *path);
int createTempDir(char *tempDir, int nameMax, int mode);
void sleepNoSig(int sec);
