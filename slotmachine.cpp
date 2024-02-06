#include "slotmachine.h"
#include "SeedMaker.h"

slotmachine::slotmachine(QWidget* parent,
                         QLabel* reel1,
                         QLabel* reel2,
                         QLabel* reel3)
    : QObject(parent),
      parentWidget(parent),
      reelTimer(new QTimer(this)),
      firstReel(reel1),
      secondReel(reel2),
      thirdReel(reel3),
      prng(generateSeed()),
      reel1Position(0),
      reel2Position(0),
      reel3Position(0),
      reelSpeed(100)
{
    setupReelIcons();
    connect(reelTimer, &QTimer::timeout, this, &slotmachine::updateReels);
}

slotmachine::~slotmachine()
{
    delete reelTimer;
}

void slotmachine::startGame()
{
    reelTimer->start(reelSpeed);
}

void slotmachine::updateReels()
{
    reel1Position = prng.bounded(6);
    reel2Position = prng.bounded(6);
    reel3Position = prng.bounded(6);

    qDebug() << "wartosci reel1,2,3 w updateReels:"
             << reel1Position << ","
             << reel2Position << ","
             << reel3Position;

    updateUi();

    if (reel1Position == 0 && reel2Position == 0 && reel3Position == 0) {
        reelTimer->stop();
        emit gameFinished(/* JAKIŚ WYNIK */0);
    }
}

void slotmachine::setupReelIcons()
{
    if(firstReel)
        firstReel->setPixmap(QPixmap("icons/icon01.png"));
    if(secondReel)
        secondReel->setPixmap(QPixmap("icons/icon02.png"));
    if(thirdReel)
        thirdReel->setPixmap(QPixmap("icons/icon03.png"));
}

void slotmachine::updateUi()
{
    if (firstReel)
        firstReel->setPixmap(QPixmap(QString("icons/icon0%1.png").arg(reel1Position + 1)));
    if (secondReel)
        secondReel->setPixmap(QPixmap(QString("icons/icon0%1.png").arg(reel2Position + 1)));
    if (thirdReel)
        thirdReel->setPixmap(QPixmap(QString("icons/icon0%1.png").arg(reel3Position + 1)));
}
