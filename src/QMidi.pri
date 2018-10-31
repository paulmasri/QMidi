# QMidi include file for QMake
CONFIG += c++11

INCLUDEPATH += $$PWD
SOURCES += $$PWD/QMidiOut.cpp \
	$$PWD/QMidiFile.cpp

HEADERS += $$PWD/QMidiOut.h \
	$$PWD/QMidiFile.h

win32&!winrt {
	LIBS += -lwinmm
	SOURCES += $$PWD/OS/QMidi_Win32.cpp
}

winrt {
        SOURCES += $$PWD/OS/QMidi_WinRT.cpp
        #Temporarily exclude more QMidi
        HEADERS -= $$PWD/QMidiFile.h
        SOURCES -= $$PWD/QMidiOut.cpp \
                $$PWD/QMidiFile.cpp
}

linux* {
	LIBS += -lasound
	SOURCES += $$PWD/OS/QMidi_ALSA.cpp
}

haiku* {
	LIBS += -lmidi2
	SOURCES += $$PWD/OS/QMidi_Haiku.cpp
}

macx {
	SOURCES += $$PWD/OS/QMidi_MacOS.cpp
}

ios {
        SOURCES += $$PWD/OS/QMidi_iOS.cpp
}
