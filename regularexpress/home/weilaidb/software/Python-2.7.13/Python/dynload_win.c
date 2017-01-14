extern ULONG_PTR _Py_ActivateActCtx();
void _Py_DeactivateActCtx(ULONG_PTR cookie);
const struct filedescr _PyImport_DynLoadFiletab[] = ;
static int strcasecmp (char *string1, char *string2)
#define DWORD_AT(mem) (*(DWORD *)(mem))
#define WORD_AT(mem)  (*(WORD *)(mem))
static char *GetPythonImport (HINSTANCE hModule)
{
unsigned char *dllbase, *import_data, *import_name;
DWORD pe_offset, opt_offset;
WORD opt_magic;
int num_dict_off, import_off;
if (hModule == NULL)
dllbase = (unsigned char *)hModule;
pe_offset = DWORD_AT(dllbase + 0x3C);
if (memcmp(dllbase+pe_offset,,4))
opt_offset = pe_offset + 4 + 20;
opt_magic = WORD_AT(dllbase+opt_offset);
if (opt_magic == 0x10B)  else if (opt_magic == 0x20B)  else
if (DWORD_AT(dllbase + opt_offset + num_dict_off) >= 2)
dl_funcptr _PyImport_GetDynLoadFunc(const char *fqname, const char *shortname,
const char *pathname, FILE *fp)
