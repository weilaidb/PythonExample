typedef SInt16  FSIORefNum;
#define PyMac_PRECHECK(rtn) do  while(0)
extern int _PyMac_GetFSSpec(PyObject *v, FSSpec *spec);
extern PyObject *_PyMac_BuildFSSpec(FSSpec *spec);
#define PyMac_BuildFSSpec _PyMac_BuildFSSpec
extern int _PyMac_GetFSRef(PyObject *v, FSRef *fsr);
extern PyObject *_PyMac_BuildFSRef(FSRef *spec);
#define PyMac_BuildFSRef _PyMac_BuildFSRef
#define PyMac_GetFSSpec _PyMac_GetFSSpec
#define PyMac_GetFSRef _PyMac_GetFSRef
extern int PyMac_GetFSSpec(PyObject *v, FSSpec *spec);
extern PyObject *PyMac_BuildFSSpec(FSSpec *spec);
extern int PyMac_GetFSRef(PyObject *v, FSRef *fsr);
extern PyObject *PyMac_BuildFSRef(FSRef *spec);
static PyObject *FSRef_New(FSRef *itself);
static PyObject *FInfo_New(FInfo *itself);
static PyObject *FSSpec_New(FSSpec *itself);
#define FSSpec_Convert PyMac_GetFSSpec
static PyObject *Alias_New(AliasHandle itself);
static int FInfo_Convert(PyObject *v, FInfo *p_itself);
#define FSRef_Convert PyMac_GetFSRef
static int Alias_Convert(PyObject *v, AliasHandle *p_itself);
static int
UTCDateTime_Convert(PyObject *v, UTCDateTime *ptr)
static PyObject *
UTCDateTime_New(UTCDateTime *ptr)
static int
myPyMac_GetOptFSSpecPtr(PyObject *v, FSSpec **spec)
static int
myPyMac_GetOptFSRefPtr(PyObject *v, FSRef **ref)
static PyObject *
PyMac_BuildHFSUniStr255(HFSUniStr255 *itself)
static OSErr
_PyMac_GetFullPathname(FSSpec *fss, char *path, int len)
static PyObject *File_Error;
static PyTypeObject FSCatalogInfo_Type;
#define FSCatalogInfo_Check(x) ((x)->ob_type == &FSCatalogInfo_Type || PyObject_TypeCheck((x), &FSCatalogInfo_Type))
typedef struct FSCatalogInfoObject  FSCatalogInfoObject;
static PyObject *FSCatalogInfo_New(FSCatalogInfo *itself)
static int FSCatalogInfo_Convert(PyObject *v, FSCatalogInfo *p_itself)
static void FSCatalogInfo_dealloc(FSCatalogInfoObject *self)
static PyMethodDef FSCatalogInfo_methods[] = ;
static PyObject *FSCatalogInfo_get_nodeFlags(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_nodeFlags(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_volume(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_volume(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_parentDirID(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_parentDirID(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_nodeID(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_nodeID(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_createDate(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_createDate(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_contentModDate(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_contentModDate(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_attributeModDate(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_attributeModDate(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_accessDate(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_accessDate(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_backupDate(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_backupDate(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_permissions(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_permissions(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_valence(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_valence(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_dataLogicalSize(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_dataLogicalSize(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_dataPhysicalSize(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_dataPhysicalSize(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_rsrcLogicalSize(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_rsrcLogicalSize(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_rsrcPhysicalSize(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_rsrcPhysicalSize(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_sharingFlags(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_sharingFlags(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyObject *FSCatalogInfo_get_userPrivileges(FSCatalogInfoObject *self, void *closure)
static int FSCatalogInfo_set_userPrivileges(FSCatalogInfoObject *self, PyObject *v, void *closure)
static PyGetSetDef FSCatalogInfo_getsetlist[] = ;
#define FSCatalogInfo_compare NULL
#define FSCatalogInfo_repr NULL
#define FSCatalogInfo_hash NULL
static int FSCatalogInfo_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define FSCatalogInfo_tp_alloc PyType_GenericAlloc
static PyObject *FSCatalogInfo_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define FSCatalogInfo_tp_free PyObject_Del
static PyTypeObject FSCatalogInfo_Type = ;
static PyTypeObject FInfo_Type;
#define FInfo_Check(x) ((x)->ob_type == &FInfo_Type || PyObject_TypeCheck((x), &FInfo_Type))
typedef struct FInfoObject  FInfoObject;
static PyObject *FInfo_New(FInfo *itself)
static int FInfo_Convert(PyObject *v, FInfo *p_itself)
static void FInfo_dealloc(FInfoObject *self)
static PyMethodDef FInfo_methods[] = ;
static PyObject *FInfo_get_Type(FInfoObject *self, void *closure)
static int FInfo_set_Type(FInfoObject *self, PyObject *v, void *closure)
static PyObject *FInfo_get_Creator(FInfoObject *self, void *closure)
static int FInfo_set_Creator(FInfoObject *self, PyObject *v, void *closure)
static PyObject *FInfo_get_Flags(FInfoObject *self, void *closure)
static int FInfo_set_Flags(FInfoObject *self, PyObject *v, void *closure)
static PyObject *FInfo_get_Location(FInfoObject *self, void *closure)
static int FInfo_set_Location(FInfoObject *self, PyObject *v, void *closure)
static PyObject *FInfo_get_Fldr(FInfoObject *self, void *closure)
static int FInfo_set_Fldr(FInfoObject *self, PyObject *v, void *closure)
static PyGetSetDef FInfo_getsetlist[] = ;
#define FInfo_compare NULL
#define FInfo_repr NULL
#define FInfo_hash NULL
static int FInfo_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define FInfo_tp_alloc PyType_GenericAlloc
static PyObject *FInfo_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define FInfo_tp_free PyObject_Del
static PyTypeObject FInfo_Type = ;
static PyTypeObject Alias_Type;
#define Alias_Check(x) ((x)->ob_type == &Alias_Type || PyObject_TypeCheck((x), &Alias_Type))
typedef struct AliasObject  AliasObject;
static PyObject *Alias_New(AliasHandle itself)
static int Alias_Convert(PyObject *v, AliasHandle *p_itself)
static void Alias_dealloc(AliasObject *self)
static PyObject *Alias_ResolveAlias(AliasObject *_self, PyObject *_args)
static PyObject *Alias_GetAliasInfo(AliasObject *_self, PyObject *_args)
static PyObject *Alias_ResolveAliasWithMountFlags(AliasObject *_self, PyObject *_args)
static PyObject *Alias_FollowFinderAlias(AliasObject *_self, PyObject *_args)
static PyObject *Alias_FSResolveAliasWithMountFlags(AliasObject *_self, PyObject *_args)
static PyObject *Alias_FSResolveAlias(AliasObject *_self, PyObject *_args)
static PyObject *Alias_FSFollowFinderAlias(AliasObject *_self, PyObject *_args)
static PyMethodDef Alias_methods[] = ;
static PyObject *Alias_get_data(AliasObject *self, void *closure)
#define Alias_set_data NULL
static PyGetSetDef Alias_getsetlist[] = ;
#define Alias_compare NULL
#define Alias_repr NULL
#define Alias_hash NULL
static int Alias_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define Alias_tp_alloc PyType_GenericAlloc
static PyObject *Alias_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define Alias_tp_free PyObject_Del
static PyTypeObject Alias_Type = ;
static PyTypeObject FSSpec_Type;
#define FSSpec_Check(x) ((x)->ob_type == &FSSpec_Type || PyObject_TypeCheck((x), &FSSpec_Type))
typedef struct FSSpecObject  FSSpecObject;
static PyObject *FSSpec_New(FSSpec *itself)
static void FSSpec_dealloc(FSSpecObject *self)
static PyObject *FSSpec_FSpOpenDF(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpOpenRF(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpCreate(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpDirCreate(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpDelete(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpGetFInfo(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpSetFInfo(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpSetFLock(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpRstFLock(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpRename(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpCatMove(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpExchangeFiles(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_FSpMakeFSRef(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_NewAliasMinimal(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_IsAliasFile(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_as_pathname(FSSpecObject *_self, PyObject *_args)
static PyObject *FSSpec_as_tuple(FSSpecObject *_self, PyObject *_args)
static PyMethodDef FSSpec_methods[] = ;
static PyObject *FSSpec_get_data(FSSpecObject *self, void *closure)
#define FSSpec_set_data NULL
static PyGetSetDef FSSpec_getsetlist[] = ;
#define FSSpec_compare NULL
static PyObject * FSSpec_repr(FSSpecObject *self)
#define FSSpec_hash NULL
static int FSSpec_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define FSSpec_tp_alloc PyType_GenericAlloc
static PyObject *FSSpec_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define FSSpec_tp_free PyObject_Del
static PyTypeObject FSSpec_Type = ;
static PyTypeObject FSRef_Type;
#define FSRef_Check(x) ((x)->ob_type == &FSRef_Type || PyObject_TypeCheck((x), &FSRef_Type))
typedef struct FSRefObject  FSRefObject;
static PyObject *FSRef_New(FSRef *itself)
static void FSRef_dealloc(FSRefObject *self)
static PyObject *FSRef_FSMakeFSRefUnicode(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSCompareFSRefs(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSCreateFileUnicode(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSCreateDirectoryUnicode(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSDeleteObject(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSMoveObject(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSExchangeObjects(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSRenameUnicode(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSGetCatalogInfo(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSSetCatalogInfo(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSCreateFork(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSDeleteFork(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSOpenFork(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FNNotify(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSNewAliasMinimal(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSIsAliasFile(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_FSRefMakePath(FSRefObject *_self, PyObject *_args)
static PyObject *FSRef_as_pathname(FSRefObject *_self, PyObject *_args)
static PyMethodDef FSRef_methods[] = ;
static PyObject *FSRef_get_data(FSRefObject *self, void *closure)
#define FSRef_set_data NULL
static PyGetSetDef FSRef_getsetlist[] = ;
#define FSRef_compare NULL
#define FSRef_repr NULL
#define FSRef_hash NULL
static int FSRef_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define FSRef_tp_alloc PyType_GenericAlloc
static PyObject *FSRef_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define FSRef_tp_free PyObject_Del
static PyTypeObject FSRef_Type = ;
static PyObject *File_UnmountVol(PyObject *_self, PyObject *_args)
static PyObject *File_FlushVol(PyObject *_self, PyObject *_args)
static PyObject *File_HSetVol(PyObject *_self, PyObject *_args)
static PyObject *File_FSClose(PyObject *_self, PyObject *_args)
static PyObject *File_Allocate(PyObject *_self, PyObject *_args)
static PyObject *File_GetEOF(PyObject *_self, PyObject *_args)
static PyObject *File_SetEOF(PyObject *_self, PyObject *_args)
static PyObject *File_GetFPos(PyObject *_self, PyObject *_args)
static PyObject *File_SetFPos(PyObject *_self, PyObject *_args)
static PyObject *File_GetVRefNum(PyObject *_self, PyObject *_args)
static PyObject *File_HGetVol(PyObject *_self, PyObject *_args)
static PyObject *File_HOpen(PyObject *_self, PyObject *_args)
static PyObject *File_HOpenDF(PyObject *_self, PyObject *_args)
static PyObject *File_HOpenRF(PyObject *_self, PyObject *_args)
static PyObject *File_AllocContig(PyObject *_self, PyObject *_args)
static PyObject *File_HCreate(PyObject *_self, PyObject *_args)
static PyObject *File_DirCreate(PyObject *_self, PyObject *_args)
static PyObject *File_HDelete(PyObject *_self, PyObject *_args)
static PyObject *File_HGetFInfo(PyObject *_self, PyObject *_args)
static PyObject *File_HSetFInfo(PyObject *_self, PyObject *_args)
static PyObject *File_HSetFLock(PyObject *_self, PyObject *_args)
static PyObject *File_HRstFLock(PyObject *_self, PyObject *_args)
static PyObject *File_HRename(PyObject *_self, PyObject *_args)
static PyObject *File_CatMove(PyObject *_self, PyObject *_args)
static PyObject *File_FSMakeFSSpec(PyObject *_self, PyObject *_args)
static PyObject *File_FSGetForkPosition(PyObject *_self, PyObject *_args)
static PyObject *File_FSSetForkPosition(PyObject *_self, PyObject *_args)
static PyObject *File_FSGetForkSize(PyObject *_self, PyObject *_args)
static PyObject *File_FSSetForkSize(PyObject *_self, PyObject *_args)
static PyObject *File_FSAllocateFork(PyObject *_self, PyObject *_args)
static PyObject *File_FSFlushFork(PyObject *_self, PyObject *_args)
static PyObject *File_FSCloseFork(PyObject *_self, PyObject *_args)
static PyObject *File_FSGetDataForkName(PyObject *_self, PyObject *_args)
static PyObject *File_FSGetResourceForkName(PyObject *_self, PyObject *_args)
static PyObject *File_FSPathMakeRef(PyObject *_self, PyObject *_args)
static PyObject *File_FNNotifyByPath(PyObject *_self, PyObject *_args)
static PyObject *File_FNNotifyAll(PyObject *_self, PyObject *_args)
static PyObject *File_NewAlias(PyObject *_self, PyObject *_args)
static PyObject *File_NewAliasMinimalFromFullPath(PyObject *_self, PyObject *_args)
static PyObject *File_ResolveAliasFile(PyObject *_self, PyObject *_args)
static PyObject *File_ResolveAliasFileWithMountFlags(PyObject *_self, PyObject *_args)
static PyObject *File_UpdateAlias(PyObject *_self, PyObject *_args)
static PyObject *File_ResolveAliasFileWithMountFlagsNoUI(PyObject *_self, PyObject *_args)
static PyObject *File_FSNewAlias(PyObject *_self, PyObject *_args)
static PyObject *File_FSResolveAliasFileWithMountFlags(PyObject *_self, PyObject *_args)
static PyObject *File_FSResolveAliasFile(PyObject *_self, PyObject *_args)
static PyObject *File_FSUpdateAlias(PyObject *_self, PyObject *_args)
static PyObject *File_pathname(PyObject *_self, PyObject *_args)
static PyMethodDef File_methods[] = ;
int
PyMac_GetFSSpec(PyObject *v, FSSpec *spec)
int
PyMac_GetFSRef(PyObject *v, FSRef *fsr)
extern PyObject *
PyMac_BuildFSSpec(FSSpec *spec)
extern PyObject *
PyMac_BuildFSRef(FSRef *spec)
void init_File(void)
