#ifndef GROUNDRECTOBJECT_H_HEADER_INCLUDED_BC7A2345
#define GROUNDRECTOBJECT_H_HEADER_INCLUDED_BC7A2345
#include "GRectObject.h"
class GScaleFactor;
class GFile;

//##ModelId=4385B4190177
//##Documentation
//## 定义：
//##        图元圆角矩形类
//## 功能：
//##        定义图元圆角矩形类
//## 设计：
//##        宋永生
//## 日期：
//##       2005-11-22
class GDE_EXPORT_DES GRoundRectObject : public GRectObject
{
  public:
    //##ModelId=4385B4EB0232
    //##Documentation
    //## 功能：
    //##     构造函数   
    //## 参数：
    //##     无
    //## 返回：
    //##     无
    //## 设计：
    //##     宋永生
    //## 日期：
    //##     2005-11-10
    GRoundRectObject();

    //##ModelId=4385B4EB0242
    //##Documentation
    //## 功能：
    //##     构造函数   
    //## 参数：
    //##     const GRoundRectObject&
    //## 返回：
    //##     无
    //## 设计：
    //##     宋永生
    //## 日期：
    //##     2005-11-10
    GRoundRectObject(const GRoundRectObject& copy);

    //##ModelId=4385B4EB0244
    //##Documentation
    //## 功能：
    //##     赋值函数   
    //## 参数：
    //##     const GRoundRectObject&
    //## 返回：
    //##     const GRoundRectObject&
    //## 设计：
    //##     宋永生
    //## 日期：
    //##     2005-11-10
    const GRoundRectObject& operator=(const GRoundRectObject& copy);

    //##ModelId=4340A54901C5
    //##Documentation
    //## 功能：
    //##   实现图元绘制功能，产生图元静态图象
    //## 参数：
    //##   GDC* pDC //绘制环境
    //##   const GFillStyle& fs//填充属性
	//##   const GLineStyle& ls//边框属性
	//##   uint8 bFill=1//是否填充
	//##   uint8 bFrame=1//是否绘制边框
	//##   GScaleFactor* pSF//缩放因子
    //## 返回：
    //##   if success return 1
    //##   else return 0
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-10-3
	virtual void drawNormal(GDC *pDC ,\
		const GFillStyle& fs,\
		const GLineStyle& ls ,\
		uint8 bFill=1, uint8 bFrame=1 ,\
		GScaleFactor *pSF=NULL );

    //##ModelId=4385B4EB0264
    //##Documentation
    //## 功能：
    //##   计算图元矩形
    //## 参数：  
    //##   无
    //## 返回：
    //##   uint32
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-10-6
    virtual void calcRect();

    //##ModelId=4385B4EB0271
    //##Documentation
    //## 功能：
    //##      重载读取函数，读取所有数据包含父类
    //## 参数：
    //##      GFile& fFile
    //## 返回：（int32）
    //##      if success return read real size
    //##      else return -1
    //## 设计：
    //##       宋永生
    //## 日期：
    //##       2005-10-2
    virtual int32 loadFile(GFile& fFile);

    //##ModelId=4385B4EB0280
    //##Documentation
    //## 功能：
    //##      重载写入函数
    //## 参数：
    //##      GFile& fFile //文件
    //## 返回：（int32 ）
    //##      if success return write real size
    //##      else return -1
    //## 设计：
    //##       宋永生
    //## 日期：
    //##       2005-10-2
    virtual int32 saveFile(GFile& fFile);

    //##ModelId=4385B4EB0290
    //##Documentation
    //## 功能：
    //##      重载读取函数
    //## 参数：
    //##      QDomElement& dom
    //## 返回：（uint8）
    //##      if success return 1
    //##      else return 0
    //## 设计：
    //##       宋永生
    //## 日期：
    //##       2005-10-25
    virtual uint8 readXML(QDomElement& dom);

    //##ModelId=4385B4EB0292
    //##Documentation
    //## 功能：
    //##      重载保存函数
    //## 参数：
    //##      QDomElement& dom
    //## 返回：（uint8）
    //##      if success return 1
    //##      else return 0
    //## 设计：
    //##       宋永生
    //## 日期：
    //##       2005-10-25
    virtual uint8 saveXML(QDomElement& dom);

    //##ModelId=4385B4EB029F
    //##Documentation
    //## 功能：
    //##   提供对象缩放计算，无返回，直接改变绘制对象
    //##   默认忽略，不要在该函数中调用pSF->scaleObject
    //## 参数： 
    //##   GScaleFactor *pSF //缩放因子
    //## 返回：
    //##   无
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-11-5
    virtual void scaleFactor(GScaleFactor* pSF);

    //##ModelId=4385B4EB02AF
    //##Documentation
    //## 功能：
    //##   测试点在图元指定范围
    //## 参数：  
    //##   const GPoint& pt
    //## 返回：
    //##   uint32
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-11-12
    virtual uint32 hitTest(const GPoint& pt);

    //##ModelId=4385B4EB02CF
    //##Documentation
    //## 功能：
    //##   实现图元绘制功能，产生图元静态图象
    //## 参数：
    //##   GDC* pDC //绘制环境
    //##   uint32 nFlags
    //## 返回：
    //##   无
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-10-3
    virtual void drawFocus(GDC* pDC, uint32 nFlags);

    //##ModelId=4385B4EB02DE
    //##Documentation
    //## 功能：
    //##     获取操作点值，用于进行基本操作
    //## 参数：
    //##     无
    //## 返回：
    //##     操作点个数
    //## 设计：
    //##     宋永生
    //## 日期：
    //##     2005-11-12
    virtual int32 getOPT(GPoint* pts = NULL);

    //##ModelId=4385B4EB034B
    //##Documentation
    //## 功能：
    //##     获取旋转操作点，用于进行旋转操作
    //## 参数：
    //##     GPoint*
    //## 返回：
    //##     操作点坐标个数
    //## 设计：
    //##     宋永生
    //## 日期：
    //##     2005-11-12
    virtual int32 getROPT(GPoint* pts);

    //##ModelId=4385B4EB035B
    //##Documentation
    //## 功能：
    //##   X,Y偏移量
    //## 参数：
    //##   FLOAT8 x
    //##   FLOAT8 y
    //##   uint32 flags
    //## 返回：
    //##   无
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-11-14
    virtual void offsetXY(FLOAT8 x, FLOAT8 y, uint32 flags = 0);

    //##ModelId=4385B4EB036B
    //##Documentation
    //## 功能：
    //##   X,Y调整偏移量
    //## 参数：
    //##   const GPoint& pt
    //##   FLOAT8 x
    //##   FLOAT8 y
    //##   uint32 flags
    //## 返回：
    //##   无
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-11-14
    virtual void resizeXY(const GPoint& pt, FLOAT8 x, FLOAT8 y, uint32 flags = 0);

    //##ModelId=4385B4EB037A
    //##Documentation
    //## 功能：
    //##   对图元进行镜像处理
    //## 参数：
    //##   uint32 op
    //##   uint32 flags
    //## 返回：
    //##   无
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-11-15
    virtual void mirrorXY(uint32 op, uint32 flags = 0);

    //##ModelId=4385B4EB03A9
    //##Documentation
    //## 功能：
    //##   以指定原点对图元进行镜像处理
    //## 参数：
    //##   const GPoint& pto
    //##   uint32 op
    //##   uint32 flags
    //## 返回：
    //##   无
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-11-15
    virtual void mirrorXY(const GPoint& pto, uint32 op, uint32 flags = 0);

    //##ModelId=4385B4EB03C8
    //##Documentation
    //## 功能：
    //##   按指定旋转中心点ptc旋转th度
    //## 参数：
    //##   const GPoint& ptc
    //##   FLOAT8 th
    //##   uint32 flags
    //## 返回：
    //##   无
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-11-14
    virtual void rotateXY(const GPoint& ptc, FLOAT8 th, uint32 flags = 0);

    //##ModelId=4385B4EC0000
    //##Documentation
    //## 功能：
    //##   按图元内部旋转中心点旋转th度
    //## 参数：
    //##   FLOAT8 th
    //##   uint32 flags
    //## 返回：
    //##   无
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-11-14
    virtual void rotateXY(FLOAT8 th, uint32 flags = 0);

    //##ModelId=4385B4EC001F
    //##Documentation
    //## 功能：
    //##   重置中心点
    //## 参数：
    //##   无
    //## 返回：
    //##   无
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-11-17
    virtual void resetRO();
    //##ModelId=4387FB2A030D
    //##Documentation
    //## 功能：
    //##   图元对齐操作,根据指定功能对齐图元
    //## 参数：
    //##   uint32 op
    //##   FLOAT8 v
    //## 返回：
    //##   if success return 1
    //##   else return 0
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-11-17
    virtual void alignPos(uint32 op, FLOAT8 v);
    //##ModelId=4387FB2A03A9
    //##Documentation
    //## 功能：
    //##   图元等大小操作,根据指定功能等大小图元
    //## 参数：
    //##   uint32 op
    //##   FLOAT8 w
    //##   FLOAT8 h
    //## 返回：
    //##   if success return 1
    //##   else return 0
    //## 设计：
    //##   宋永生
    //## 日期：
    //##   2005-11-17
    virtual void sameSize(uint32 op, FLOAT8 w, FLOAT8 h);

	FLOAT8	m_rndX ;
	FLOAT8	m_rndY ;
	GPoint  m_rndPX ;
	GPoint  m_rndPY ;

};



#endif /* GROUNDRECTOBJECT_H_HEADER_INCLUDED_BC7A2345 */
