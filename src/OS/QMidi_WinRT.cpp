/*
 * Copyright 2012-2016 Augustin Cavalier <waddlesplash>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "QMidiOut.h"

QMidiOut::QMidiOut()
    : fMidiPtrs(nullptr),
      fConnected(false)
{
}
QMidiOut::~QMidiOut()
{
}

void QMidiOut::sendEvent(const QMidiEvent& e)
{
    Q_UNUSED(e)
}

void QMidiOut::setInstrument(int voice, int instr)
{
    Q_UNUSED(voice)
    Q_UNUSED(instr)
}

void QMidiOut::noteOn(int note, int voice, int velocity)
{
    Q_UNUSED(note)
    Q_UNUSED(voice)
    Q_UNUSED(velocity)
}

void QMidiOut::noteOff(int note, int voice)
{
    Q_UNUSED(note)
    Q_UNUSED(voice)
}

void QMidiOut::pitchWheel(int voice, int value)
{
    Q_UNUSED(voice)
    Q_UNUSED(value)
}

void QMidiOut::channelAftertouch(int voice, int value)
{
    Q_UNUSED(voice)
    Q_UNUSED(value)
}

void QMidiOut::polyphonicAftertouch(int note, int voice, int value)
{
    Q_UNUSED(note)
    Q_UNUSED(voice)
    Q_UNUSED(value)
}

void QMidiOut::controlChange(int voice, int number, int value)
{
    Q_UNUSED(voice)
    Q_UNUSED(number)
    Q_UNUSED(value)
}

void QMidiOut::stopAll()
{
}

void QMidiOut::stopAll(int voice)
{
    Q_UNUSED(voice)
}

QMap<QString, QString> QMidiOut::devices()
{
	QMap<QString, QString> ret;

	return ret;
}

bool QMidiOut::connect(QString outDeviceId)
{
    Q_UNUSED(outDeviceId)
	return false;
}

void QMidiOut::disconnect()
{
}

void QMidiOut::sendMsg(qint32 msg)
{
    Q_UNUSED(msg)
}
