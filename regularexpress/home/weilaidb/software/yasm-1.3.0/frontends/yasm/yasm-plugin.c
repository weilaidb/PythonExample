#if defined(_MSC_VER)
#elif defined(__GNUC__)
static void **loaded_plugins = NULL;
static int num_loaded_plugins = 0;
static void *
load_dll(const char *name)
int
load_plugin(const char *name)
void
unload_plugins(void)
