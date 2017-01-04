#define _DLFCN_H
void *dlopen(char *filename, int flags);
void *dlsym(void *handle, char *symbol);
int dlclose(void *handle);
char *dlerror(void);
