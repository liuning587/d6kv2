#ifndef FESPARA_STRING_H_
#define FESPARA_STRING_H_

#include <QtCore/QString>

#define  _Q2C( str ) ( str.toAscii(  ).data(  ) )
#define _C2Q( str ) ( QString::fromLocal8Bit( str ) )

#endif

