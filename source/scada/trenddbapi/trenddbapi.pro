######################################################################
# Automatically generated by qmake (2.01a) ?? ?? 12 11:16:59 2012
######################################################################

TEMPLATE = lib

CONFIG	    += warn_on thread dll


DESTDIR = $(NBENV)/lib

DEPENDPATH += src

INCLUDEPATH += $(NBENV)/source/include





CONFIG  += warn_on thread dll

CONFIG -= qt 

QT -= gui core



LIBS=-L$(NBENV)/lib  -ltrenddb_api



win32{

DEFINES += TRENDDB_DLL _CRT_SECURE_NO_WARNINGS

}



# Input

SOURCES += trenddbapi.cpp
HEADERS += trenddbapi.h trenddb_api.h trenddb_api_i.h trenddb_err.h



