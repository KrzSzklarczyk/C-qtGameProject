#include "slotmachine.h"


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
      reelSpeed(100),
      spinsLeft(30),
      gameResult(0)
{
    setupReelIcons();
    connect(reelTimer, &QTimer::timeout, this, &slotmachine::updateReels);
}

slotmachine::~slotmachine()
{
    delete reelTimer;
}

void slotmachine::startGame(int bet)
{
    reelTimer->start(reelSpeed);
    gameResult = bet;
}

void slotmachine::updateReels()
{
    reel1Position = prng.bounded(6);
    reel2Position = prng.bounded(6);
    reel3Position = prng.bounded(6);

    updateUi();

    if (spinsLeft < 1) {
        spinsLeft = 30;
        reelTimer->stop();
        if(reel1Position == reel2Position && reel2Position == reel3Position){
            if(gameResult!=0){
                switch(reel1Position){
                case 1:
                    gameResult*=2;
                    break;
                case 2:
                    gameResult*=3;
                    break;
                case 3:
                    gameResult*=4;
                    break;
                case 4:
                    gameResult*=5;
                    break;
                case 5:
                    gameResult*=6;
                    break;
                case 6:
                    gameResult*=7;
                    break;
                }
            }
        }
        else {
            gameResult = 0;
        }
        emit gameFinished(gameResult);
    }
    spinsLeft--;
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
