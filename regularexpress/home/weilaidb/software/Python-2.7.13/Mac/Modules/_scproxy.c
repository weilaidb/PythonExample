static int32_t
cfnum_to_int32(CFNumberRef num)
static PyObject*
cfstring_to_pystring(CFStringRef ref)
static PyObject*
get_proxy_settings(PyObject* mod __attribute__((__unused__)))
static int
set_proxy(PyObject* proxies, char* proto, CFDictionaryRef proxyDict,
CFStringRef enabledKey,
CFStringRef hostKey, CFStringRef portKey)
static PyObject*
get_proxies(PyObject* mod __attribute__((__unused__)))
static PyMethodDef mod_methods[] = ;
void init_scproxy(void)
