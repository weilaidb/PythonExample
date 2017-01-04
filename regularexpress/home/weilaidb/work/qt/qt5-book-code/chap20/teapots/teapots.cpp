Teapots::Teapots(QWidget *parent)
: QGLWidget(parent)
Teapots::~Teapots()
void Teapots::initializeGL()
void Teapots::resizeGL(int width, int height)
void Teapots::paintGL()
void Teapots::mousePressEvent(QMouseEvent *event)
void Teapots::mouseMoveEvent(QMouseEvent *event)
void Teapots::mouseReleaseEvent(QMouseEvent *)
void Teapots::createGLTeapotObject()
void Teapots::drawTeapot(GLfloat x, GLfloat y, GLfloat ambientR,
GLfloat ambientG, GLfloat ambientB,
GLfloat diffuseR, GLfloat diffuseG,
GLfloat diffuseB, GLfloat specularR,
GLfloat specularG, GLfloat specularB,
GLfloat shininess)
void Teapots::drawTeapots()
