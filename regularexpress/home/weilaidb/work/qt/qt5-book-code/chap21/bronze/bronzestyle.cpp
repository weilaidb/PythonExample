void BronzeStyle::polish(QPalette &palette)
void BronzeStyle::polish(QWidget *widget)
void BronzeStyle::unpolish(QWidget *widget)
int BronzeStyle::styleHint(StyleHint which, const QStyleOption *option,
const QWidget *widget,
QStyleHintReturn *returnData) const
int BronzeStyle::pixelMetric(PixelMetric which,
const QStyleOption *option,
const QWidget *widget) const
void BronzeStyle::drawPrimitive(PrimitiveElement which,
const QStyleOption *option,
QPainter *painter,
const QWidget *widget) const
void BronzeStyle::drawComplexControl(ComplexControl which,
const QStyleOptionComplex *option,
QPainter *painter,
const QWidget *widget) const
QRect BronzeStyle::subControlRect(ComplexControl whichControl,
const QStyleOptionComplex *option,
SubControl whichSubControl,
const QWidget *widget) const
QIcon BronzeStyle::standardIconImplementation(StandardPixmap which,
const QStyleOption *option, const QWidget *widget) const
void BronzeStyle::drawBronzeFrame(const QStyleOption *option,
QPainter *painter) const
void BronzeStyle::drawBronzeBevel(const QStyleOption *option,
QPainter *painter) const
void BronzeStyle::drawBronzeCheckBoxIndicator(
const QStyleOption *option, QPainter *painter) const
void BronzeStyle::drawBronzeSpinBoxButton(SubControl which,
const QStyleOptionComplex *option, QPainter *painter) const
