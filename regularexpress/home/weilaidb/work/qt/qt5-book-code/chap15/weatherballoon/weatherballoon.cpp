WeatherBalloon::WeatherBalloon(QWidget *parent)
: QPushButton(tr("Quit"), parent)
double WeatherBalloon::temperature() const
double WeatherBalloon::humidity() const
double WeatherBalloon::altitude() const
void WeatherBalloon::sendDatagram()
