Q_DECLARE_METATYPE(PumpFilter)
Q_DECLARE_METATYPE(PumpFilter *)
bool runScript(const QString &fileName, const QStringList &args)
QScriptValue pumpFilterConstructor(QScriptContext *,
QScriptEngine *interpreter)
PumpFilterPrototype::PumpFilterPrototype(QObject *parent)
: QObject(parent)
void PumpFilterPrototype::setFromDate(const QDate &date)
QDate PumpFilterPrototype::fromDate() const
void PumpFilterPrototype::setToDate(const QDate &date)
QDate PumpFilterPrototype::toDate() const
void PumpFilterPrototype::setFromTime(const QTime &time)
QTime PumpFilterPrototype::fromTime() const
void PumpFilterPrototype::setToTime(const QTime &time)
QTime PumpFilterPrototype::toTime() const
void PumpFilterPrototype::setPump(const QString &pump)
QString PumpFilterPrototype::pump() const
void PumpFilterPrototype::setCompany(const QString &company)
QString PumpFilterPrototype::company() const
void PumpFilterPrototype::setUser(const QString &user)
QString PumpFilterPrototype::user() const
void PumpFilterPrototype::setFromQuantity(double quantity)
double PumpFilterPrototype::fromQuantity() const
void PumpFilterPrototype::setToQuantity(double quantity)
double PumpFilterPrototype::toQuantity() const
void PumpFilterPrototype::setStatus(const QString &status)
QString PumpFilterPrototype::status() const
PumpFilter *PumpFilterPrototype::wrappedFilter() const
