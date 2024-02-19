#ifndef SLOTMACHINE_H
#define SLOTMACHINE_H

#include <QTimer>
#include <QObject>
#include <QWidget>
#include <QRandomGenerator>
#include "qlabel.h"
#include "SeedMaker.h"

class slotmachine: public QObject
{
    Q_OBJECT
private:
    QWidget* parentWidget;
    QTimer* reelTimer;
    QLabel* firstReel;
    QLabel* secondReel;
    QLabel* thirdReel;
    QRandomGenerator prng;
    int reel1Position;
    int reel2Position;
    int reel3Position;
    int reelSpeed;
    int spinsLeft;
    int gameResult;

    void setupReelIcons();
    void updateUi();
public:
    slotmachine(QWidget* parent = nullptr,
                QLabel* reel1 = nullptr,
                QLabel* reel2 = nullptr,
                QLabel* reel3 = nullptr);
    ~slotmachine();

    void startGame(int bet);
signals:
    void gameFinished(int result);
private slots:
    void updateReels();
};

#endif // SLOTMACHINE_H
