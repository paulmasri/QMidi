/*
 * Copyright 2012-2016 Augustin Cavalier <waddlesplash>
 * All rights reserved. Distributed under the terms of the MIT license.
 */
#include "QMidiOut.h"

#include <QStringList>

#define MACOS

// struct NativeMidiOutInstances {
// 	HMIDIOUT midiOut;
// };

QMap<QString, QString> QMidiOut::devices()
{
	QMap<QString, QString> ret;

	return ret;
}

bool QMidiOut::connect(QString outDeviceId)
{
	return false;
}

void QMidiOut::disconnect()
{
}

void QMidiOut::sendMsg(qint32 msg)
{
}
