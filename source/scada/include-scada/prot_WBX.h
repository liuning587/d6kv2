#ifndef _PROT_WBX_H
#define _PROT_WBX_H

#include "scd/cmddef.h"
#include "rdb/rdbapi.h"
#include "scadatime.h"
#include "protect.h"
									//////////////////////////////////////////////////////
									/*					WBX						*/
									//////////////////////////////////////////////////////
										//////////////////////////////////////////////
										/*			WBX_事件信息(wbx_action)				*/
										//////////////////////////////////////////////
typedef	struct {
		ushort   actiontype;						//事件类型
		ushort	actioncode;						//序号
		char	actioninfo[PROTINFO_LEN];		//描述
		uchar   alarmf;							//是否报警	
		uchar	sgflag;							//是否判事故
    	char    entname[ENTNAME_LEN];		//报警句
} WBX_PROTECTACTION;

								
							//////////////////////////////////////////////////////////////
							/*						WBX 微机保护处理类			*/
							//////////////////////////////////////////////////////////////
class WBX_Protect : public BaseProtect
{
public:
	WBX_Protect(void);

	PROTECTMDL *GetModulePara(ushort terminalno,ushort prottype,ushort address1,ushort address2);
	WBX_PROTECTACTION	*GetActionPara(ushort actiontype,ushort actioncode);		//取保护动作参数

	//解释FEP服务器保护生报文
	int protectinfo(short terminalno,unsigned char protocoltype,unsigned char gram_len,unsigned char *gram);
	
	//生成应用事件
	void make_action_apevent(SYS_CLOCK *sysclock,PROTECTMDL *mdlp, unsigned char *event);

	//生成存盘事件
	int save_action_apevent(SYS_CLOCK *sysclock,PROTECTMDL *mdlp, unsigned char *event);
};

#endif
