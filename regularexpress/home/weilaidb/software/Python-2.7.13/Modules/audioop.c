#if SIZEOF_INT == 4
typedef int Py_Int32;
typedef unsigned int Py_UInt32;
#if SIZEOF_LONG == 4
typedef long Py_Int32;
typedef unsigned long Py_UInt32;
#error "No 4-byte integral type"
typedef short PyInt16;
#if defined(__CHAR_UNSIGNED__)
#if defined(signed)
static const int maxvals[] = ;
static const int minvals[] = ;
static const unsigned int masks[] = ;
static int
fbound(double val, double minval, double maxval)
#define BIAS 0x84
#define CLIP 32635
#define SIGN_BIT        (0x80)
#define QUANT_MASK      (0xf)
#define SEG_SHIFT       (4)
#define SEG_MASK        (0x70)
static PyInt16 seg_aend[8] = ;
static PyInt16 seg_uend[8] = ;
static PyInt16
search(PyInt16 val, PyInt16 *table, int size)
#define st_ulaw2linear16(uc) (_st_ulaw2linear16[uc])
#define st_alaw2linear16(uc) (_st_alaw2linear16[uc])
static PyInt16 _st_ulaw2linear16[256] = ;
static unsigned char
st_14linear2ulaw(PyInt16 pcm_val)
static PyInt16 _st_alaw2linear16[256] = ;
static unsigned char
st_linear2alaw(PyInt16 pcm_val)
static int indexTable[16] = ;
static int stepsizeTable[89] = ;
#define CHARP(cp, i) ((signed char *)(cp+i))
#define SHORTP(cp, i) ((short *)(cp+i))
#define LONGP(cp, i) ((Py_Int32 *)(cp+i))
static PyObject *AudioopError;
static int
audioop_check_size(int size)
static int
audioop_check_parameters(int len, int size)
static PyObject *
audioop_getsample(PyObject *self, PyObject *args)
static PyObject *
audioop_max(PyObject *self, PyObject *args)
static PyObject *
audioop_minmax(PyObject *self, PyObject *args)
static PyObject *
audioop_avg(PyObject *self, PyObject *args)
static PyObject *
audioop_rms(PyObject *self, PyObject *args)
static double _sum2(short *a, short *b, int len)
static PyObject *
audioop_findfit(PyObject *self, PyObject *args)
static PyObject *
audioop_findfactor(PyObject *self, PyObject *args)
static PyObject *
audioop_findmax(PyObject *self, PyObject *args)
static PyObject *
audioop_avgpp(PyObject *self, PyObject *args)
static PyObject *
audioop_maxpp(PyObject *self, PyObject *args)
static PyObject *
audioop_cross(PyObject *self, PyObject *args)
static PyObject *
audioop_mul(PyObject *self, PyObject *args)
static PyObject *
audioop_tomono(PyObject *self, PyObject *args)
static PyObject *
audioop_tostereo(PyObject *self, PyObject *args)
static PyObject *
audioop_add(PyObject *self, PyObject *args)
static PyObject *
audioop_bias(PyObject *self, PyObject *args)
static PyObject *
audioop_reverse(PyObject *self, PyObject *args)
static PyObject *
audioop_lin2lin(PyObject *self, PyObject *args)
static int
gcd(int a, int b)
static PyObject *
audioop_ratecv(PyObject *self, PyObject *args)
static PyObject *
audioop_lin2ulaw(PyObject *self, PyObject *args)
static PyObject *
audioop_ulaw2lin(PyObject *self, PyObject *args)
static PyObject *
audioop_lin2alaw(PyObject *self, PyObject *args)
static PyObject *
audioop_alaw2lin(PyObject *self, PyObject *args)
static PyObject *
audioop_lin2adpcm(PyObject *self, PyObject *args)
static PyObject *
audioop_adpcm2lin(PyObject *self, PyObject *args)
static PyMethodDef audioop_methods[] = ;
PyMODINIT_FUNC
initaudioop(void)
