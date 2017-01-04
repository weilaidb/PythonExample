#define CLDEBUG
#if defined(CL_JPEG_SOFTWARE) && !defined(CL_JPEG_COSMO)
typedef struct  clobject;
static PyObject *ClError;
static int error_handler_called = 0;
#define SELF    ((clobject *) self)
static void
cl_ErrorHandler(CL_Handle handle, int code, const char *fmt, ...)
static int
param_type_is_float(clobject *self, int param)
static PyObject *
cl_CompressImage(PyObject *self, PyObject *args)
static PyObject *
cl_DecompressImage(PyObject *self, PyObject *args)
#define CheckCompressor(self)   if ((self)->ob_compressorHdl == NULL)
static PyObject *
doClose(clobject *self, int (*close_func)(CL_Handle))
static PyObject *
clm_CloseCompressor(PyObject *self)
static PyObject *
clm_CloseDecompressor(PyObject *self)
static PyObject *
clm_Compress(PyObject *self, PyObject *args)
static PyObject *
clm_Decompress(PyObject *self, PyObject *args)
static PyObject *
doParams(clobject *self, PyObject *args, int (*func)(CL_Handle, int *, int),
int modified)
static PyObject *
clm_GetParams(PyObject *self, PyObject *args)
static PyObject *
clm_SetParams(PyObject *self, PyObject *args)
static PyObject *
do_get(clobject *self, PyObject *args, int (*func)(CL_Handle, int))
static PyObject *
clm_GetParam(PyObject *self, PyObject *args)
static PyObject *
clm_GetDefault(PyObject *self, PyObject *args)
static PyObject *
clm_SetParam(PyObject *self, PyObject *args)
static PyObject *
clm_GetParamID(PyObject *self, PyObject *args)
static PyObject *
clm_QueryParams(PyObject *self)
static PyObject *
clm_GetMinMax(PyObject *self, PyObject *args)
static PyObject *
clm_GetName(PyObject *self, PyObject *args)
static PyObject *
clm_QuerySchemeFromHandle(PyObject *self)
static PyObject *
clm_ReadHeader(PyObject *self, PyObject *args)
static PyMethodDef compressor_methods[] = ;
static PyMethodDef decompressor_methods[] = ;
static void
cl_dealloc(PyObject *self)
static PyObject *
cl_getattr(PyObject *self, char *name)
static PyTypeObject Cltype = ;
static PyObject *
doOpen(PyObject *self, PyObject *args, int (*open_func)(int, CL_Handle *),
int iscompressor)
static PyObject *
cl_OpenCompressor(PyObject *self, PyObject *args)
static PyObject *
cl_OpenDecompressor(PyObject *self, PyObject *args)
static PyObject *
cl_QueryScheme(PyObject *self, PyObject *args)
static PyObject *
cl_QueryMaxHeaderSize(PyObject *self, PyObject *args)
static PyObject *
cl_QueryAlgorithms(PyObject *self, PyObject *args)
static PyObject *
cl_QuerySchemeFromName(PyObject *self, PyObject *args)
static PyObject *
cl_GetAlgorithmName(PyObject *self, PyObject *args)
static PyObject *
do_set(PyObject *self, PyObject *args, int (*func)(int, int, int))
static PyObject *
cl_SetDefault(PyObject *self, PyObject *args)
static PyObject *
cl_SetMin(PyObject *self, PyObject *args)
static PyObject *
cl_SetMax(PyObject *self, PyObject *args)
#define func(name, handler)     \
static PyObject *cl_##name(PyObject *self, PyObject *args) \
#define func2(name, handler)    \
static PyObject *cl_##name(PyObject *self, PyObject *args) \
func(BytesPerSample, Int_FromLong)
func(BytesPerPixel, Int_FromLong)
func(AudioFormatName, String_FromString)
func(VideoFormatName, String_FromString)
func(AlgorithmNumber, Int_FromLong)
func(AlgorithmType, Int_FromLong)
func2(Algorithm, Int_FromLong)
func(ParamNumber, Int_FromLong)
func(ParamType, Int_FromLong)
func2(ParamID, Int_FromLong)
static PyObject *
cvt_type(PyObject *self, PyObject *args)
static PyMethodDef cl_methods[] = ;
#define IRIX_5_3_LIBRARY
void
initcl(void)
