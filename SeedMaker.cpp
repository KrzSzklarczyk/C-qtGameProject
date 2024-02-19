#include "SeedMaker.h"

qint64 generateSeed() {
    qint64 timestamp = QDateTime::currentMSecsSinceEpoch();
    QByteArray hashInput;
    hashInput.append(QByteArray::number(timestamp));
    QByteArray hashedData = QCryptographicHash::hash(hashInput, QCryptographicHash::Sha256);
    return *reinterpret_cast<const qint64*>(hashedData.constData());
}
