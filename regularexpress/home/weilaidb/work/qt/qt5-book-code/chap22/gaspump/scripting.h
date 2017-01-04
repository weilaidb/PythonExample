#define SCRIPTING_H
QT_BEGIN_NAMESPACE
class QScriptValue;
class PumpFilter;
QT_END_NAMESPACE
bool runScript(const QString &fileName, const QStringList &args);
QScriptValue pumpFilterConstructor(QScriptContext *context,
QScriptEngine *interpreter);
class PumpFilterPrototype : public QObject, public QScriptable
;
