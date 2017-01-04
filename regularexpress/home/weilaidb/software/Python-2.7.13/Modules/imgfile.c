extern void i_seterror();
extern void iclose();
extern void filterzoom();
extern void putrow();
extern void getrow();
static PyObject * ImgfileError;
static int top_to_bottom;
static int error_called;
static void
imgfile_error(char *str)
static IMAGE *
imgfile_open(char *fname)
static PyObject *
imgfile_ttob(PyObject *self, PyObject *args)
static PyObject *
imgfile_read(PyObject *self, PyObject *args)
static IMAGE *glob_image;
static long *glob_datap;
static int glob_width, glob_z, glob_ysize;
static void
xs_get(short *buf, int y)
static void
xs_put_c(short *buf, int y)
static void
xs_put_0(short *buf, int y)
static void
xs_put_12(short *buf, int y)
static void
xscale(IMAGE *image, int xsize, int ysize, int zsize,
long *datap, int xnew, int ynew, int fmode, double blur)
static PyObject *
imgfile_readscaled(PyObject *self, PyObject *args)
static PyObject *
imgfile_getsizes(PyObject *self, PyObject *args)
static PyObject *
imgfile_write(PyObject *self, PyObject *args)
static PyMethodDef imgfile_methods[] = ;
void
initimgfile(void)
