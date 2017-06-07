######################################################################
# Automatically generated by qmake (2.01a) ?? 11? 28 15:27:58 2016
######################################################################

TEMPLATE = app
TARGET = waveanalyze
DESTDIR = $(NBENV)/bin

CONFIG	+= qt warn_on debug
DEFINES	+= QT_THREAD_SUPPORT
INCLUDEPATH	+= .
RESOURCES = res.qrc
LANGUAGE	= C++
QT          += network xml
win32{
		RC_FILE = images/qtwave.rc
}

# Input
FORMS	= mainform.ui \
	fileproperty.ui \
	options.ui \
	channelproperty.ui \
	waveproperty.ui \
	valueform.ui \
	selectdetail.ui \
	vectors.ui \
	selectchannel.ui \
	fileview.ui

HEADERS	+= comtrade.h \
	constutils.h \
	fileoperate.h \
	funutils.h \
	mouselinerect.h \
	viewintf.h \
	wavecaption.h \
	drawchannel.h \
	wavegraph.h \
	manageutils.h \
	analyzeutils.h \
	mainformimpl.h \
	mathutils.h \
	dataserver.h \
	complexs.h \
	wavepix.h \
	channelpropertyimpl.h \
	filepropertyimpl.h \
	optionsimpl.h \
	wavepropertyimpl.h \
	valueformimpl.h \
	wavetab.h \
	selectdetailimpl.h \
	vectorgraph.h \
	labelgraph.h \
	harmgraph.h \
	vectoritem.h \
	channelunit.h \
	selectchannelimpl.h \
	fileviewimpl.h \
	ftpwindow.h

SOURCES	+= comtrade.cpp \
	fileoperate.cpp \
	funutils.cpp \
	wavecaption.cpp \
	drawchannel.cpp \
	wavegraph.cpp \
	manageutils.cpp \
	analyzeutils.cpp \
	comandwave.cpp \
	mainformimpl.cpp \
	mathutils.cpp \
	dataserver.cpp \
	complexs.cpp \
	channelpropertyimpl.cpp \
	filepropertyimpl.cpp \
	optionsimpl.cpp \
	wavepropertyimpl.cpp \
	valueformimpl.cpp \
	wavetab.cpp \
	selectdetailimpl.cpp \
	channelunit.cpp \
	labelgraph.cpp \
	vectorgraph.cpp \
	harmgraph.cpp \
	vectoritem.cpp \
	selectchannelimpl.cpp \
	fileviewimpl.cpp \
	ftpwindow.cpp \
	Main.cpp

