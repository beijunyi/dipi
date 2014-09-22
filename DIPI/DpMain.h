#pragma once
#include "publicfunction.h"
#include "Autil.h"
#include <deque>
#include <stack>

using namespace std;
#define STATIC_NPC_NUM				200	//��̬npc����
#define CHAR_SKILL_NUM				30	//���＼����
#define EMAIL_NUM					80	//�ʼ���Ƭ��
#define MENUFLAG					64	//448
#define MAXTALKLENGTH				20

#define SUCCESSFUL					1
#define SENDMSG_ERROR				-2
#define RECVMSG_ERROR				-3
#define CHECKSUM_ERROR				-4
#define SPLITMSG_ERROR				-5
#define GETFUNC_ERROR				-6
#define CDKEY_AND_PWD_ERROR			-7
#define INVALID_INFO				-8
#define GET_ACCOUNT_INFO_ERROR		-9
#define NOT_LOGGED_IN				-10
#define NOACCOUNT					0
#define DELETE_CHAR_ERROR			-1
#define CREATE_NEWCHAR_ERROR		-1
#define LOGIN_ERROR					-1

#define			CHAR_P_STRING_HP				( 1 << 1  )		// 0x00000002
#define			CHAR_P_STRING_MAXHP				( 1 << 2  )		// 0x00000004
#define			CHAR_P_STRING_MP				( 1 << 3  )		// 0x00000008
#define			CHAR_P_STRING_MAXMP				( 1 << 4  )		// 0x00000010
#define			CHAR_P_STRING_VITAL				( 1 << 5  )
#define			CHAR_P_STRING_STR				( 1 << 6  )
#define			CHAR_P_STRING_TOUGH				( 1 << 7  )
#define			CHAR_P_STRING_DEX				( 1 << 8  )
#define			CHAR_P_STRING_EXP				( 1 << 9  )
#define			CHAR_P_STRING_NEXTEXP			( 1 << 10 )
#define			CHAR_P_STRING_LV				( 1 << 11 )
#define			CHAR_P_STRING_ATK				( 1 << 12 )
#define			CHAR_P_STRING_DEF				( 1 << 13 )
#define			CHAR_P_STRING_QUICK				( 1 << 14 )
#define			CHAR_P_STRING_CHARM				( 1 << 15 )
#define			CHAR_P_STRING_LUCK				( 1 << 16 )
#define			CHAR_P_STRING_EARTH				( 1 << 17 )
#define			CHAR_P_STRING_WATER				( 1 << 18 )
#define			CHAR_P_STRING_FIRE				( 1 << 19 )
#define			CHAR_P_STRING_WIND				( 1 << 20 )
#define			CHAR_P_STRING_GOLD				( 1 << 21 )
#define			CHAR_P_STRING_TITLE				( 1 << 22 )
#define			CHAR_P_STRING_DUELPOINT			( 1 << 23 )
#define			CHAR_P_STRING_TRANSMIGRATION	( 1 << 24 )
#define			CHAR_P_STRING_NAME				( 1 << 25 )
#define			CHAR_P_STRING_OWNTITLE			( 1 << 26 )
#define			CHAR_P_STRING_RIDEPET			( 1 << 27 )		// 0x08000000
#define			CHAR_P_STRING_LEARNRIDE			( 1 << 28 )		// 0x10000000
#define			CHAR_P_STRING_BASEBASEIMAGENUMBER	( 1 << 29 )		// 0x20000000

#define			CHAR_N_STRING_OBJINDEX			( 1 << 1  )
#define			CHAR_N_STRING_LV				( 1 << 2  )
#define			CHAR_N_STRING_MAXHP				( 1 << 3  )
#define			CHAR_N_STRING_HP				( 1 << 4  )
#define			CHAR_N_STRING_MP				( 1 << 5  )
#define			CHAR_N_STRING_NAME				( 1 << 6  )

#define			CHAR_K_STRING_BASEIMAGENUMBER   ( 1 << 1  )
#define			CHAR_K_STRING_HP				( 1 << 2  )
#define			CHAR_K_STRING_MAXHP				( 1 << 3  )
#define			CHAR_K_STRING_MP				( 1 << 4  )
#define			CHAR_K_STRING_MAXMP				( 1 << 5  )
#define			CHAR_K_STRING_EXP				( 1 << 6  )
#define			CHAR_K_STRING_NEXTEXP			( 1 << 7  )
#define			CHAR_K_STRING_LV				( 1 << 8  )
#define			CHAR_K_STRING_ATK				( 1 << 9  )
#define			CHAR_K_STRING_DEF				( 1 << 10 )
#define			CHAR_K_STRING_QUICK				( 1 << 11 )
#define			CHAR_K_STRING_AI				( 1 << 12 )
#define			CHAR_K_STRING_EARTH				( 1 << 13 )
#define			CHAR_K_STRING_WATER				( 1 << 14 )
#define			CHAR_K_STRING_FIRE				( 1 << 15 )
#define			CHAR_K_STRING_WIND				( 1 << 16 )
#define			CHAR_K_STRING_SLOT				( 1 << 17 )
#define			CHAR_K_STRING_CHANGENAMEFLG		( 1 << 18 )
#define			CHAR_K_STRING_NAME				( 1 << 19 )
#define			CHAR_K_STRING_USERPETNAME		( 1 << 20 )

#define BC_FLG_NEW			(1<<0)
#define BC_FLG_DEAD			(1<<1)		//����
#define BC_FLG_PLAYER		(1<<2)		//���,������쳣״̬ʱҪ�д�ֵ
#define BC_FLG_POISON		(1<<3)		//�ж�
#define BC_FLG_PARALYSIS	(1<<4)		//���
#define BC_FLG_SLEEP		(1<<5)		//��˯
#define BC_FLG_STONE		(1<<6)		//ʯ��
#define BC_FLG_DRUNK		(1<<7)		//ѣ��
#define BC_FLG_CONFUSION	(1<<8)		//����
#define BC_FLG_HIDE			(1<<9)		//�Ƿ����أ�����һ��
#define BC_FLG_REVERSE		(1<<10)		//��ת

#define		WINDOW_BUTTONTYPE_NONE		(0)
#define		WINDOW_BUTTONTYPE_OK		(1 << 0)
#define		WINDOW_BUTTONTYPE_CANCEL	(1 << 1)
#define		WINDOW_BUTTONTYPE_YES		(1 << 2)
#define		WINDOW_BUTTONTYPE_NO		(1 << 3)
#define		WINDOW_BUTTONTYPE_PREV		(1 << 4)
#define		WINDOW_BUTTONTYPE_NEXT		(1 << 5)

#define		WINDOW_BUTTONTYPE_OKCANCEL	(WINDOW_BUTTONTYPE_OK | WINDOW_BUTTONTYPE_CANCEL)
#define		WINDOW_BUTTONTYPE_YESNO	(WINDOW_BUTTONTYPE_YES | WINDOW_BUTTONTYPE_NO)
typedef enum
{
	WINDOW_MESSAGETYPE_MESSAGE,
	WINDOW_MESSAGETYPE_MESSAGEANDLINEINPUT,
	WINDOW_MESSAGETYPE_SELECT,
	WINDOW_MESSAGETYPE_PETSELECT,
	WINDOW_MESSAGETYPE_PARTYSELECT,
	WINDOW_MESSAGETYPE_PETANDPARTYSELECT,
	WINDOW_MESSAGETYPE_ITEMSHOPMENU,
	WINDOW_MESSAGETYPE_ITEMSHOPMAIN,
	WINDOW_MESSAGETYPE_LIMITITEMSHOPMAIN,
	WINDOW_MESSAGETYPE_PETSKILLSHOP,
	WINDOW_MESSAGETYPE_WIDEMESSAGE,
	WINDOW_MESSAGETYPE_WIDEMESSAGEANDLINEINPUT,
	WINDOW_MESSAGETYPE_POOLITEMSHOPMENU,
	WINDOW_MESSAGETYPE_POOLITEMSHOPMAIN,

	WINDOW_MESSAGETYPE_FAMILYADD,
	WINDOW_MESSAGETYPE_FAMILYJOIN,
	WINDOW_MESSAGETYPE_FAMILYOUT,
	WINDOW_MESSAGETYPE_FAMILYEND
}WINDOW_MESSAGETYPE;
typedef enum
{
    CHAR_WINDOWTYPE_RETURNTOELDER=-1,   /*  ĹϷ����륦����ɥ�    */
    CHAR_WINDOWTYPE_RESURRECTION=-2,   /*  ���褹�륦����ɥ�    */

	CHAR_WINDOWTYPE_SELECTBATTLE = 1,		/* ������Ʈ�����򤹤륦����ɥ� */
	CHAR_WINDOWTYPE_SELECTDUEL = 2,  		/* ����DUEL�����򤹤륦����ɥ� */
	CHAR_WINDOWTYPE_SELECTTRADECARD = 3, 	/* ̾�ɸ򴹤����򤹤륦����ɥ� */
	CHAR_WINDOWTYPE_SELECTPARTY = 4, 		/* �ѡ��ƥ������򤹤륦����ɥ� */
	CHAR_WINDOWTYPE_SELECTBATTLEWATCH = 5, 	/* ��������򤹤륦����ɥ� */
	CHAR_WINDOWTYPE_MICMESSAGE = 6,			/* MICNPC��ȤäƽФ륦����ɥ� */

	// CoolFish: Trade 2001/4/18
	CHAR_WINDOWTYPE_SELECTTRADE = 7,	/* ��� Window */

	CHAR_WINDOWTYPE_SELECTRENAMEITEM_PAGE1 = 10,	/* ̾�����ѹ����륢���ƥ�����򤹤륦����ɥ� */
	CHAR_WINDOWTYPE_SELECTRENAMEITEM_PAGE2 = 11,	/* ̾�����ѹ����륢���ƥ�����򤹤륦����ɥ� */
	CHAR_WINDOWTYPE_SELECTRENAMEITEM_PAGE3 = 12,	/* ̾�����ѹ����륢���ƥ�����򤹤륦����ɥ� */
	CHAR_WINDOWTYPE_SELECTRENAMEITEM_PAGE4 = 13,	/* ̾�����ѹ����륢���ƥ�����򤹤륦����ɥ� */
	CHAR_WINDOWTYPE_SELECTRENAMEITEM_RENAME = 14,	/* ̾�������Ϥ��륦����ɥ� */
	CHAR_WINDOWTYPE_SELECTRENAMEITEM_RENAME_ATTENTION  = 15,	/* ̾�������Ϥ��륦����ɥ� */
	
	CHAR_WINDOWTYPE_DENGON = 50,			/* ������ */

	CHAR_WINDOWTYPE_WINDOWMAN_START = 100,
	CHAR_WINDOWTYPE_WINDOWMAN_STARTMSG = CHAR_WINDOWTYPE_WINDOWMAN_START,
	CHAR_WINDOWTYPE_WINDOWMAN_END = 200,

	CHAR_WINDOWTYPE_JANKEN_START = 210,
	CHAR_WINDOWTYPE_JANKEN_MAIN = 211,
	CHAR_WINDOWTYPE_JANKEN_END = 212,
	
	CHAR_WINDOWTYPE_TRANSMIGRATION_START = 213,
	CHAR_WINDOWTYPE_TRANSMIGRATION_MAIN = 214,
	CHAR_WINDOWTYPE_TRANSMIGRATION_END = 215,
	CHAR_WINDOWTYPE_TRANSMIGRATION_NONE = 216,
	

	CHAR_WINDOWTYPE_WINDOWHEALER_START = 220,
	CHAR_WINDOWTYPE_WINDOWHEALER_STARTMSG = CHAR_WINDOWTYPE_WINDOWHEALER_START,
	CHAR_WINDOWTYPE_WINDOWHEALER_HPMSG = 221,
	CHAR_WINDOWTYPE_WINDOWHEALER_OKHPMSG = 222,
	CHAR_WINDOWTYPE_WINDOWHEALER_SPIRITMSG = 223,
	CHAR_WINDOWTYPE_WINDOWHEALER_OKSPIRITMSG = 224,
	CHAR_WINDOWTYPE_WINDOWHEALER_ALLMSG = 225,
	CHAR_WINDOWTYPE_WINDOWHEALER_OKALLMSG = 226,
	CHAR_WINDOWTYPE_WINDOWHEALER_END = 227,

	CHAR_WINDOWTYPE_WINDOWSAVEPOINT_START = 230,

	CHAR_WINDOWTYPE_WINDOWEVENT_STARTMSG = 231,
	CHAR_WINDOWTYPE_WINDOWEVENT_NOWEVENT = 232,
	CHAR_WINDOWTYPE_WINDOWEVENT_ENDEVENT = 233,
	CHAR_WINDOWTYPE_WINDOWEVENT_REQMAINMSG = 234,
	CHAR_WINDOWTYPE_WINDOWEVENT_ACCMAINMSG = 235,
	CHAR_WINDOWTYPE_WINDOWEVENT_NOMALMSG = 236,
	CHAR_WINDOWTYPE_WINDOWEVENT_CLEANMSG = 237,
	CHAR_WINDOWTYPE_WINDOWEVENT_REQTHANK = 238,
	CHAR_WINDOWTYPE_WINDOWEVENT_ACCTHANK = 239,
	

	CHAR_WINDOWTYPE_WINDOWITEMSHOP_START = 240,
	CHAR_WINDOWTYPE_WINDOWITEMSHOP_STARTMSG = CHAR_WINDOWTYPE_WINDOWITEMSHOP_START,
	CHAR_WINDOWTYPE_WINDOWITEMSHOP_MENU = 241,
	CHAR_WINDOWTYPE_WINDOWITEMSHOP_BUY_MSG = 242,
	CHAR_WINDOWTYPE_WINDOWITEMSHOP_SELL_MSG = 243,
	CHAR_WINDOWTYPE_WINDOWITEMSHOP_END = 244,
	CHAR_WINDOWTYPE_WINDOWITEMSHOP_LIMIT = 245,
	CHAR_WINDOWTYPE_WINDOWITEMSHOP_EXPRESS = 246,

	CHAR_WINDOWTYPE_DUELRANKING_START = 250,
	CHAR_WINDOWTYPE_DUELRANKING_TOPRANKING = 251,
	CHAR_WINDOWTYPE_DUELRANKING_MYRANKING = 252,
	CHAR_WINDOWTYPE_DUELRANKING_WAIT = 253,
	CHAR_WINDOWTYPE_DEFEND_BILLDBOARD = 254,

	CHAR_WINDOWTYPE_WINDOWPETSKILLSHOP = 260,

	CHAR_WINDOWTYPE_WINDOWPETSHOP_START = 261,
	CHAR_WINDOWTYPE_WINDOWPETSHOP_PETSELECT = 262,
	CHAR_WINDOWTYPE_WINDOWPETSHOP_MAIN = 263,
	CHAR_WINDOWTYPE_WINDOWPETSHOP_GOLDOVER 	= 264,
	CHAR_WINDOWTYPE_WINDOWPETSHOP_PETSELECT2 = 265,
	CHAR_WINDOWTYPE_WINDOWPETSHOP_MAIN2 = 266,
	CHAR_WINDOWTYPE_WINDOWPETSHOP_DRAWSELECT = 267,
	CHAR_WINDOWTYPE_WINDOWPETSHOP_ASKDRAW = 268,
	CHAR_WINDOWTYPE_WINDOWPETSHOP_END = 269,

	CHAR_WINDOWTYPE_WINDOWWARPMAN_MAIN = 271,
	CHAR_WINDOWTYPE_WINDOWWARPMAN_ERR = 272,
	CHAR_WINDOWTYPE_WINDOWWARPMAN_END = 273,

	CHAR_WINDOWTYPE_NPCENEMY_START = 281,
	
	CHAR_WINDOWTYPE_CHARM_START = 282,
	CHAR_WINDOWTYPE_CHARM_END = 283,

	CHAR_WINDOWTYPE_QUIZ_START = 284,
	CHAR_WINDOWTYPE_QUIZ_MAIN = 285,
	CHAR_WINDOWTYPE_QUIZ_END = 286,

	CHAR_WINDOWTYPE_CHECKMAN_START = 287,
	CHAR_WINDOWTYPE_CHECKMAN_MAIN = 288,
	CHAR_WINDOWTYPE_CHECKMAN_END = 289,

	CHAR_WINDOWTYPE_FAMILYMAN_START = 320,
	CHAR_WINDOWTYPE_FAMILYMAN_ADD = 321,
	CHAR_WINDOWTYPE_FAMILYMAN_JOIN = 322,
	CHAR_WINDOWTYPE_FAMILYMAN_OUT = 323,
	CHAR_WINDOWTYPE_FAMILYMAN_BROKEN = 324,
	
	CHAR_WINDOWTYPE_BANKMAN = 330,
	
	// CoolFish: FMPKMan 2001/7/4
	CHAR_WINDOWTYPE_FMPKMAN_START = 340,
	CHAR_WINDOWTYPE_FMPKMAN_VIEW = 341,
	CHAR_WINDOWTYPE_FMPKMAN_LEAVEPK = 342,
	CHAR_WINDOWTYPE_FMPKCALLMAN_START = 345,
	CHAR_WINDOWTYPE_FMPKCALLMAN_CALL = 346,
	CHAR_WINDOWTYPE_FMPKCALLMAN_COME = 347,
	CHAR_WINDOWTYPE_FMPKCALLMAN_LEAVE = 348,
	
	// Arminius 7.13 scheduleman
	CHAR_WINDOWTYPE_SCHEDULEMAN_START = 350,
	CHAR_WINDOWTYPE_SCHEDULEMAN_SELECT = 351,
	CHAR_WINDOWTYPE_SCHEDULEMAN_DETAIL = 352,
	
	// Arminius 7.27
	CHAR_WINDOWTYPE_MANORPK_START = 360,
	CHAR_WINDOWTYPE_MANORPK_ASK = 361,
	CHAR_WINDOWTYPE_MANORPK_END = 362,

        // shan
        CHAR_WINDOWTYPE_FM_DENGON      = 370,     // �a�گd���O
        CHAR_WINDOWTYPE_FM_FMSDENGON   = 371,     // �a�ڤ����d���O
        CHAR_WINDOWTYPE_FM_MESSAGE1    = 372,     // ��������(���I)
        CHAR_WINDOWTYPE_FM_MESSAGE2    = 373,     // ��������(����)
        CHAR_WINDOWTYPE_FM_SELECT      = 374,     // �ﶵ����
        CHAR_WINDOWTYPE_FM_MEMBERLIST  = 375,     // �����C��
        CHAR_WINDOWTYPE_FM_POINTLIST   = 376,     // ���I�C��
        CHAR_WINDOWTYPE_FM_DPTOP       = 377,     // �j�̪�(�e�T�Q�j�C�])
        CHAR_WINDOWTYPE_FM_DPME        = 378,     // �j�̪�(�ۤv���C�])
        CHAR_WINDOWTYPE_FM_DPSELECT    = 379,     // �j�̪��ﶵ����

	//#ifdef _TRANSER_MAN
	NPC_TRANSERMAN_START = 440,
	NPC_TRANSERMAN_SELECT,
	NPC_TRANSERMAN_WARP,
	NPC_TRANSERMAN_END,
	//#endif
}CHAR_WINDOWTYPE;
//�������ͣ���ң�����npc�ȱ������
typedef enum
{
    CHAR_TYPENONE,
    CHAR_TYPEPLAYER,
    CHAR_TYPEENEMY,
    CHAR_TYPEPET,
    CHAR_TYPEDOOR,
    CHAR_TYPEBOX,
    CHAR_TYPEMSG,
    CHAR_TYPEWARP,
    CHAR_TYPESHOP,
    CHAR_TYPEHEALER,
    CHAR_TYPEOLDMAN,
    CHAR_TYPEROOMADMIN,
    CHAR_TYPETOWNPEOPLE,
    CHAR_TYPEDENGON,
    CHAR_TYPEADM,
    CHAR_TYPETEMPLE,
    CHAR_TYPESTORYTELLER,
    CHAR_TYPERANKING,
    CHAR_TYPEOTHERNPC,
    CHAR_TYPEPRINTPASSMAN,
    CHAR_TYPENPCENEMY,
    CHAR_TYPEACTION,
    CHAR_TYPEWINDOWMAN,
    CHAR_TYPESAVEPOINT,
    CHAR_TYPEWINDOWHEALER,
	CHAR_TYPEITEMSHOP,
	CHAR_TYPESTONESHOP,
	CHAR_TYPEDUELRANKING,
	CHAR_TYPEWARPMAN,
	CHAR_TYPEEVENT,
	CHAR_TYPEMIC,
	CHAR_TYPELUCKYMAN,
	CHAR_TYPEBUS,
	CHAR_TYPECHARM,
	CHAR_TYPECHECKMAN,
	CHAR_TYPEJANKEN,
	CHAR_TYPETRANSMIGRATION,
	CHAR_TYPEFMWARPMAN,			// �a�ڢޢٳ��޲z��
	CHAR_TYPEFMSCHEDULEMAN,		// �a�ڢޢٳ��n�O��
	CHAR_TYPEMANORSCHEDULEMAN,	// ����ޢٳ��w���H
	CHAR_TRANSERMANS=44			//��Ŵ���ʦ
}CHAR_TYPE;
typedef enum
{
	CHAR_COLORWHITE,
	CHAR_COLORCYAN,
	CHAR_COLORPURPLE,
	CHAR_COLORBLUE,
	CHAR_COLORYELLOW,
	CHAR_COLORGREEN,
	CHAR_COLORRED,
	CHAR_COLORGRAY,
	CHAR_COLORBLUE2,
	CHAR_COLORGREEN2,

}CHAR_COLOR;
typedef enum
{
	MAGIC_FIELD_ALL,
	MAGIC_FIELD_BATTLE,	
	MAGIC_FIELD_MAP

}MAGIC_FIELDTYPE;
typedef enum
{
	MAGIC_TARGET_MYSELF,
	MAGIC_TARGET_OTHER,	
	MAGIC_TARGET_ALLMYSIDE,
	MAGIC_TARGET_ALLOTHERSIDE,
	MAGIC_TARGET_ALL,
	MAGIC_TARGET_NONE,
	MAGIC_TARGET_OTHERWITHOUTMYSELF,
	MAGIC_TARGET_WITHOUTMYSELFANDPET,
	MAGIC_TARGET_WHOLEOTHERSIDE
}MAGIC_TARGETTYPE;
typedef enum
{
 	PETSKILL_FIELD_ALL,
 	PETSKILL_FIELD_BATTLE,
 	PETSKILL_FIELD_MAP 
}PETSKILL_FIELDTYPE;
typedef enum
{
 	PETSKILL_TARGET_MYSELF,
 	PETSKILL_TARGET_OTHER,
 	PETSKILL_TARGET_ALLMYSIDE,
 	PETSKILL_TARGET_ALLOTHERSIDE,
 	PETSKILL_TARGET_ALL,
 	PETSKILL_TARGET_NONE,
 	PETSKILL_TARGET_OTHERWITHOUTMYSELF,
 	PETSKILL_TARGET_WITHOUTMYSELFANDPET
}PETSKILL_TARGETTYPE;

typedef enum{
	REST=0,
	FIGHTSTANDBY=1,
	EMAIL=4
}PETSTATE;
//��ʽ��1|CHAR_WHICHTYPE|NPC���|X����|Y����|���﷽��|��������|����ȼ�|������ɫ|��������|����ƺ�|CHAR_ISOVERED|CHAR_HAVEHEIGHT|Ӣ�۳ƺ���ɫ|������|�����|���ȼ�|0|0|0|0
typedef struct{
	int unknown;
	int charwhichtype;
	int objindex;		//npc��������
	int x;
	int y;
	int dir;
	int faceimg;
	int level;
	int namecolor;
	char name[100];
	char owntitle[50];
	int isovered;
	int haveheight;
	int popupnamecolor;
	char familyname[50];
	char ridepetname[50];
	int ridepetlevel;
	int unknown1;
	int unknown2;
	int unknown3;
	int unknown4;
}NPC_INFO;//�������ڱ���npc��Ϣ��Ҳ�ɱ�ʾ�����Ϣ
typedef struct{
	int id;		//��������װ����λ�ñ�ţ�ͷ0����1������2������3������4��
	int kubun;//װ���еľ����Ƿ���ã�װ��װ��Ϊ1��ȡ��װ����Ϊ0
	int mp;
	int field;
	int target;
	char name[100];
	char comment[200];
}MAGIC;

typedef struct{
	int dataplace;
	int faceimage;
	int	level;
	int maxhp;
	int atk;
	int def;
	int quick;
	int charm;
	int dp;
	int earth;
	int water;
	int fire;
	int wind;
	int logincount;
	char name[50];
	char place[50];
}CHARLIST;
typedef struct{
	int kubun;
	int hp;
	int maxhp;
	int mp;
	int maxmp;
	int vital;
	int str;
	int tough;
	int dex;
	int exp;
	int nextexp;
	int level;
	int attack;
	int defence;
	int fQuick;
	int fCharm;
	int fLuck;
	int fEarth;
	int fWater;
	int fFire;
	int fWind;
	int gold;
	int indexofeqtitle;
	int dp;
	int transmigration;
	int ridepet;		//��˳�����,�����Ϊ-1
	int learnride;
	int faceimg;
	int unknown;
	char name[50];
	char owntitle[50];
	/////////////////////
	int uplevelpoint;
	int fame;			//����
}CHARDETAIL;
typedef struct{
	int skillid;
	int field;
	int target;
	char name[50];
	char comment[100];
}PETSKILL;
typedef struct{
	int no;//���
	int islive;//��������Ϊ0(����)��������Ϊ1
	int image;
	int hp;
	int maxhp;
	int mp;
	int maxmp;
	int exp;
	int nextexp;
	int level;
	int attack;
	int defence;
	int quick;
	int ai;
	int fEarth;
	int fWater;
	int fFire;
	int fWind;
	int slot;
	int changenameflag;
	int transmigration;
	int unknown;
	char oldname[50];
	char newname[50];
	PETSKILL petskill[7];
	///////////////
	int state;		//����״̬��0=��Ϣ��1=ս��|�ȴ���4=�ʼ�	
}PETDETAIL;
typedef struct{
	int useflag;
	int identity;
	int target;
	int kind;
	int icon;
	int costmp;
	int level;
	char name[50];
	char comment[100];
}CHARSKILL;
typedef struct{//��Ʒλ��|��Ʒ����|parashow|��ɫ|��Ʒ����|��Ʒͼ����|��ʹ�õĳ���|Ŀ��|����|��־|�𻵳̶�|��������|����|itemlevel
	char name[50];			//���ֲ�Ϊ������Ʒ������û����Ʒ
	char paramshow[50];
	int color;
	char comment[100];
	int imgno;
	int ableusefield;
	int target;
	int level;
	int flg;		//������(0),�ʼ�(1)����ĳ��ϳ�(2)���ѵ�(4)��
	char damagecrushe[50];
	int pilenums;
	char element[50];
	int itemlevel;
	char unknown[50];
}ITEMINFO;
typedef struct{
	int floor;
	int maxX;
	int maxY;
	int x;
	int y;
}CHANGEMAP;
typedef struct{
	int floor;
	int x1;
	int y1;
	int x2;
	int y2;
	int unknown1;
	int unknown2;
	int unknown3;
	char floorname[50];
	////////////////��ͼ�л��¼����
	int seqno;
}MAPINFO;
typedef struct{
	char fmname[50];
	int fmleaderflag;
	int workfmchannel;
	int fmsprite;
	int workfmfloor;
}FAMILY;
typedef struct{
	int windowtype;
	int buttontype;
	int seqno;
	int objindex;
	char data[8192];
}DIALOGWINDOW;
typedef struct{
	int use;
	char charname[50];
	int level;
	int dp;
	int online;			//����Ϊ0������Ϊ4
	int graphicsno;
	int transmigration;
	int unknown;
}MAILCONTACTLIST;
typedef struct{
	int charid;		//������
	int time;		//����ʱ��
	int fightpet;	//ս����,//��ս��Ϊ-1,��ս��Ϊ����
	int menuflg;	//�˵����
	int x;			//���ﵱǰλ��
	int y;
	int direction;	//���﷽��
	int state;		//��Ϸ״̬��-1�ǳ���0ƽʱ��1ս��
	int round;		//ս���غ���
}CHAROTHERINFO;
typedef struct{
	int whotalk;
	char message[255];
	int color;
}TALKMESSAGE;
//BC|ս�����ԣ�0:������,1:��,2:ˮ,3:��,4:�磩|����������е�λ��|��������|����ƺ�|����������|����ȼ�(16����)|��ǰHP|���HP|����״̬���������ж��ȣ�|�Ƿ���˱�־(0:δ�1��,-1����)|�������|���ȼ�|���HP|������HP|ս���ڶ����е�λ��|ս������|δ֪|ս������|ս��ȼ�|ս��HP|ս�����HP|ս���쳣״̬����˯���������ж��ȣ�|0||0|0|0|
//���˵�1�Ŵ��ϵ�������Ϊ(13��11��F��10��12)�����˵�2�Ŵ��ϵ���Ϊ(E,C,A,B,D)
//�ҷ���1�Ŵ��ϵ�������Ϊ��9��7��5��6��8�����ҷ���2�Ŵ��ϵ���Ϊ(4,2,0,1,3)
typedef struct{
	int pos;
	char name[50];
	char owntitle[50];
	int faceimg;
	int level;
	int hp;
	int maxhp;
	int state;
	int isride;
	char ridepetname[50];
	int ridepetlevel;
	int ridepethp;
	int ridepetmaxhp;
	//ս����Ϣ
	int petpos;
	char petname[50];
	char unknown[50];
	int petimage;
	int petlevel;
	int pethp;
	int petmaxhp;
	int petstate;
	int unknown2;
	char unknown3[50];
	int unknown4;
	int unknown5;
	int unknown6;
}BC_CHAR_STATE_STRING;
//��1λ��|��1����|δ֪|��1����|��1�ȼ�|��1HP|��1���HP|�����쳣״̬���������ж��ȣ�|0||0|0|0|
typedef struct{
	int pos;
	char name[50];
	char unknown[50];
	int image;
	int level;
	int hp;
	int maxhp;
	int enemystate;
	int unknown2;
	char unknown3[50];
	int unknown4;
	int unknown5;
	int unknown6;
}BC_ENEMY_STATE_STRING;
//����������Ʒ�ṹ
typedef struct{
	char name[50];			//��Ʒ����
	int unknown;
	int uselevel;			//���ټ�����ʹ��
	int price;				//�۸�
	int image;				//��Ʒ����
	char comment[100];		//ע��
	int costfame;			//���򻨷�����,-1����Ҫ����
}BUYITEM;
//������Ʒʱ��ʾ��Ϣ�Ľṹ
typedef struct{
	int unknown;			//Ϊ0
	int dataflg;			//Ϊ1�״���ʾ��Ʒ�嵥����,�����嵥���ݣ�Ϊ0�����״���ʾ�����治���嵥����
	int windowtype;			//�������ͣ����Ͳ�ͬ��ʾ����Ϣ��ͬ����CHAR_WINDOWTYPE_WINDOWITEMSHOP_STARTMSG
	char main_msg[100];		//����
	char buy_main[100];		//����ʱ��ʾ����Ϣ
	char what_msg[100];		//ѯ��Ҫ��ʲô����
	char howmany_msg[100];	//�������
	char level_msg[100];	//���Ｖ�𲻹�ʱ��ʾ����Ϣ
	char really_msg[100];	//ȷ���Ƿ�Ҫ��
	char itemfull_msg[100];	//������ʱ��ʾ����Ϣ
	int num;				//�ж���������Լ����
	BUYITEM item[50];		//��Ʒ�嵥
}BUY_MSG;
//��ȡ����ʱ��������Ϣ�ṹ
typedef struct{
	char name[50];		//��������
	int cansave;		//�Ƿ�ɴ�ţ�1�����ԣ�0����
	int price;			//���߼۸�
	int image;
	char comment[100];	//ע��
	int num;			//��������
	int position;		//����λ��(10-24)
}SAVE_ITEM;
//�������Ϣ�ṹ
typedef struct{
	int unknown;
	int unknown1;
	char npcname[100];		//npc����
	char what_msg[100];		//���ĸ�����
	char itemfull_msg[100];	//������ʱ��ʾ����Ϣ
	char really_msg[100];	//ȷ���Ƿ�Ҫ��
	SAVE_ITEM saveitem[15];
}SAVE_MSG;
//ȡ����ʱ��������Ϣ�ṹ
typedef struct{
	char name[50];		//��������
	int unknown;		
	int unknown1;			
	int unknown2;
	int image;
	char comment[100];	//ע��
	int num;			//��������
}LOAD_ITEM;
//��npc�����ʱ��Ϣ�ṹ
typedef struct{
	int unknown;
	char npcname[100];		//npc����
	char what_msg[100];		//ȡ�ĸ�����
	char itemfull_msg[100];	//������ʱ��ʾ����Ϣ
	char really_msg[100];	//ȷ���Ƿ�Ҫ��
	LOAD_ITEM loaditem[50];
}LOAD_MSG;
//�ӳ����ȡ����ʱ��������Ϣ
typedef struct{
	int lv;
	int maxhp;
	char name[50];
}LOAD_PET;
//����ʦ���صĴ��͵���Ϣ�ṹ
typedef struct{
	char main_msg[100];			//������Ϣ
	int num;					//���͵���Ŀ
	char trans_point[20][100];	//���͵�
}TRANS_POINT;
typedef struct{
	int x;
	int y;
	char direction[2];
}WALKARRAY;
//���ﾫ�鲹Ѫ
typedef struct{
	int id;			//���������
	char name[50];	//���������
	int val;		//��Ѫ�趨����
}RECRUITBLOOD;
//���ﲹѪ
typedef struct{
	int skillid;	//����id
	int val;		//��Ѫ�趨����
}PETRECRUITBLOOD;
//����ű������ṹ
typedef struct{
	CString name;
	int val;
}INTVAR;
//��̲�ṹ
typedef struct{
	int type;	//���ͣ�0���ߣ�1����
	int pos;	//������Ʒ������λ��
	int price;	//�۸�
}BAITAN;
//�Ӱ�̲�ǹ�����Ʒ���ص���Ʒ�嵥
typedef struct{
	int type;			//���ͣ�0���ߣ�1����
	int price;			//�۸�
	char name[50];		//����
	char othername[50];	//��������,��Ʒû�д���
	int num;			//��Ʒ����������û�д���
	int pos;			//�����˵��е�λ��
}BUY_BAITAN;
class CDpMain
{
public:
	CDpMain(void);
	~CDpMain(void);
	SOCKET socket;
	
	CCriticalSection csLocalSingal;		//�ź���
	int scriptNum;						//�ű�����
	CString *script;					//����ű�
	CMap<CString,LPCTSTR,int,int> intvar;//�ű������ֵ�
	USERINFO user;						//�ʺ���Ϣ
	CHARLIST charlist[2];				//�����б�
	NPC_INFO npcinfo[STATIC_NPC_NUM];				//npc��Ϣ,�������ﶯ̬��Ϣ
	MAGIC magic[6];						//�������ϵľ�����Ϣ
	CHARDETAIL chardetail;				//������ϸ��Ϣ
	PETDETAIL petdetail[5];				//������ϸ��Ϣ
	CHANGEMAP changemap;				//�ı��ͼ���ص���Ϣ
	MAPINFO mapinfo;					//��ǰ��ͼ����Ϣ
	ITEMINFO iteminfo[24];				//��Ʒ��Ϣ
	CHARSKILL charskill[CHAR_SKILL_NUM];			//���＼����Ϣ
	FAMILY family;						//������Ϣ
	DIALOGWINDOW windowinfo;			//������Ϣ
	BUY_MSG buy_msg;					//����������Ϣ
	SAVE_MSG save_msg;					//��ķŵ�ʱ��Ϣ�ṹ
	LOAD_MSG load_msg;					//ȡ�ķŵ�ʱ��Ϣ�ṹ
	LOAD_PET load_pet[5];					//ȡ����ʱ����ʾ�ĳ�����Ϣ��������ڴ�
	BAITAN bai_tan[20];					//����ϵͳ���صİ�̲��Ϣ
	BUY_BAITAN buy_baitan[20];			//�����˵���Ϣ
	BOOL IsBaiTanOk;					//�����̲��ť�󣬷�����Ƿ񷵻�ȷ����Ϣ
	TRANS_POINT trans_point;			//���͵���Ϣ
	MAILCONTACTLIST mailcontactlist[EMAIL_NUM];	//�ʼ���ϵ���б�
	BC_CHAR_STATE_STRING bc_char[5];		//ս�������������Ϣ
	BC_ENEMY_STATE_STRING bc_enemy[10];		//ս���е��˶�����Ϣ
	BOOL bExit;							//����Ϸ�߳���ֹ
	BOOL bScriptExit;					//�ýű��߳���ֹ
	BOOL bIsReLogin;					//�Ƿ�ս����˵�¼���صǣ������ڿ��ƽű�����ת
	BOOL bIsBaiTaning;					//�Ƿ������ڰ�̲�У��ں�̲����Ϊtrue��ȡ����̲����Ϊfalse 
	int IP;								//ָ�������
	int ErrorLine;						//�ű�����ָ��
	DWORD nStartTime;					//����������Ϣ��ʱ��
	DWORD nRecvTime;					//����������Ϣ��ʱ��
	CHAROTHERINFO charotherinfo;		//�����������Ϣ	
	CAutil autil;
	deque <TALKMESSAGE *> talkmessage;	//������Ϸ��˵����Ϣ
	stack <int> IPStack;				//ָ���ջ
	BOOL IsOnLine;						//�Ƿ�����
	BOOL IsLogin;						//�����Ƿ����ڵ�¼��
	BOOL IsDispTalk;					//�Ƿ���ʾ˵������
	BOOL IsDispInfoOnTime;				//�Ƿ���ʾʵʱ������Ϣ
	int maxload;						//�����
	int MapSeqNo;						//��ͼ�л��¼����
	PHCALC phcalc;						//���ڷ��ű�����
	BOOL bIsSendDummy;					//�Ƿ��͹�dummy��Ϣ
	//��������
	int  nScriptDelay;				//�ű���ʱ��0-250��
	BOOL bReLogin;					//�Ƿ�����ص�
	BOOL bScriptErrorReStart;		//�ű�������������
	BOOL nAutoUnlock;				//�Զ�����
	BOOL IsSafeCodeUnlock;			//�Ƿ��ѽ���
	BOOL bAutoCapture;				//�Զ�׽��
	BOOL bAutoEscape;				//�Զ�����
	BOOL bAutoKNPC;					//�Զ�KNPC
	BOOL bFullEscape;				//��������
	BOOL bFightpetDeadEscape;		//ս�������Զ�����
	BOOL bMakeTeam;					//���
	BOOL bDuel;						//����
	BOOL bCallingCard;				//��Ƭ
	BOOL bTrade;					//����
	char cZDAttack[10][50];			//ָ�������ĳ���
	int nZDAttackNum;				//ָ�������ĳ���ĳ�������
	char cLockAttack[10][50];		//���������ĳ���
	int nLockAttackNum;
	char cZDEscape[10][50];			//ָ�����ܵĳ���
	int nZDEscapeNum;
	int nAutoUpPoint[4];			//�Զ��ӵ㣬1000����Ϊ������1000����Ϊ������2000����Ϊ������3000����Ϊ�ٶ�
	BOOL bAutoEatSYC;				//�Զ���������
	int	nEatSYCTime;				//�ϴγ������ݵ�ʱ��
	BOOL bAutoExpNut;				//���ǻ۹�
	int nExpNutTime;				//�ϴγ��ǻ۹���ʱ��
	BOOL bAutoPile;					//�Զ��ѵ�
	BOOL bEatMeat;					//�Բ�Ѫ��
	BOOL bDiscardMeat;				//��û�в�Ѫ���ܵ�Ѫ��
	BOOL bRecruitMpPlaceTime;		//ƽʱ����
	int nLockRidePet;				//�������
	int nLockFightPet;				//����ս��
	char cDiscardLikeItem[15][50];	//��������
	int nDiscardLikeItemNum;
	char cDiscardExceptItem[15][50];//����������
	int nDiscardExceptItemNum;
	double dFirstDelay;				//�״��ӳ�
	double dAttackDelay;			//�����ӳ�
	double dRMpByBlood;				//��Ѫ����
	char cCharFirstAction[50];		//�����״ζ���
	char cCharAction[50];			//����һ�㶯��
	char cPetFirstAction[50];		//ս���״ζ���
	char cPetAction[50];			//ս��һ�㶯��
	int nCapLevel;					//��׽�ȼ�
	char cCapPetName[5][50];		//׽������
	int nCapPetNum;					//��׽���������ʹ�ã�׽������
	int nCapPetBlood;				//׽��Ѫ��
	int nCapCharUseSkill;			//׽��ʱ����ļ��ܺ�׽��Ѫ��
	int nCapPetSkill;				//׽��ʱ����ʹ�õļ���
	BOOL bCapEscapeWhenNoPet;		//�Ƿ����ܵ�û��Ҫ����ĳ���ʱ
	RECRUITBLOOD recruitblood;		//�������ﾫ�鲹Ѫ����(����սʱ��ƽʱ)
	PETRECRUITBLOOD petrecruitblood;		//���＼�ܲ�Ѫ
	BOOL bDeleteChar;				//�ص�ʱ�Ƿ�ɾ���ʺ�

	void Init();
	void Run(USERINFO *puser);
	void RunScript();
	void SetExit(BOOL bexit);
	void SetScriptExit(BOOL bexit);
	int CheckUser(char * cdkey, char * pwd);
	int DeleteChar(int id);
	int CreateNewChar(int dataplace,char *charname,int imgno,int faceimgno,int vital,int str,int tgh,int dex,int earth,int water,int fire,int wind,int hometown);
	int CharLogin(int dataplace);
	BOOL ReceiveData(char *buf,int &datalen);
	int ParseLoginData(char *data,int datalen);
	int DecryptLoginData(char *data,int datalen);
	int ParseData(char *data,int datalen);
	int DecryptData(char *data,int datalen,int &count);
	void Parse_P_StatusString(char *data);
	void Parse_K_StatusString(char *data);
	void Parse_BC_StatusString(char *data);
	void Parse_BA_String(int endblt,char *data,char *enemy);
	void Parse_NPC_String(char *data);
	void Parse_BE_String(char *data,char *dst);
	int GetNearNpcObjIndex(int x, int y);
	void ReleaseTalkDeque();
	void TalkMsgToDeque(int whotalk,char *msg,int color);
	void AutoAddUpLevelPoint();
	void CalcMaxLoad();
	BOOL ItemCanPile(int flg);
	void GetCalcFormula(char *msg,char *dst);
	BOOL TranForumla(CString src);
	BOOL CalcJampAddress(CString szJump,int &lid);
	void GetTarget(char *src,char *dst,char *mypos,char *enemypos);
	void func34(int from ,int to);
	void func25(char *message);
	void func32(char *message);
	//����ָ���
	int SendOnlineInfo(char *info);
	int SendEOCommand();
	int SendMenuFlag(int flg);
	int SendLogFlag(int flg);
	int SendFightPet(int pet);
	int SendStandbyPet(int pet);
	int SendPetState();
	int SendPetState(int pet,int state);
	int SendRidePet(int pet);
	int SendDiscardPet(int pet);		
	int SendWalkPos(int x,int y,char *direction);
	int SendWalkDirection(int x,int y,char *direction);
	int SendTalk(int x,int y,char *msg,int color,int area);
	int SendSelectWindowButton(int x,int y,int seqno,int objindex,int select,char *data);

	int SendChangeMap(int seqno,int x,int y,int dir=-1);
	int SendAttackCommand(int round,char *enemy);
	int SendDummy();
	int SendUpLevelPoint(int flg);
	int SendMoveItem(int from,int to);
	int SendDiscardItem(int index);
	int SendDiscardMoney(int amount);
	int SendSaveLoadMoney(int num);
	int SendSaveLoadMoneyFromFamily(int num);
	int SendUseItem(int from,int to);
	int SendPickup(int x,int y,int dir);
	int SendEatExpNut();
	int SendEatSYC();
	int SendDiscardLikeItem();
	int SendDiscardExceptItem();
	int SendSafeCode(int seqno);
	int SendEatMeat();
	int SendDiscardMeat();
	int SendRecruitMpPlaceTime();
	int SendRecruitHpPlaceTime(int magicid,int to);
	int SendAutoPile();
	int SendCommand(char *cmd);
	int SendChangeCharName(char *name);
	int SendChangePetName(int pet,char *name);
	int SendPetMail(int towho,int petindex,int itemindex,char *msg,int color);
	int SendExchangeCard();
	int SendDeleteCard(int card);
	int SendMerge(int petid,int petskillid,int toindex,char *data);
	int SendBaiTan(char *data);
	int SendBaiTanOK(int x,int y,int data);
	//�ű�ָ��
	CString GetOperateCode(CString instruction);
	CString GetOperateNum(CString instruction);
	BOOL WalkPos(CString &para);
	int CalcWalkPos(WALKARRAY *walk,int xstart,int ystart,int xend,int yend);
	void CalcCharPosition(WALKARRAY *walk);
	void ParseSetPara(CString &data);
	BOOL BaiTan(CString para);
	BOOL BuyFromBaiTan(CString para);
	BOOL UseItem(CString item);
	int GetLabelNum(CString label);
	void Pickup(CString dir);
	void DoffItem(CString item);
	void DoffPet(CString  pet);
	void DoffStone(CString stone);
	void LoadStone(CString stone);
	void SaveStone(CString stone);
	void LoadStoneFromFamily(CString stone);
	void SaveStoneToFamily(CString stone);
	BOOL LiaoLi(CString para);
	BOOL WaitMap(CString para);
	void BuyItem(CString item);	
	void SaveItem(int towhere,CString item);
	void SellPet(CString item);
	void GetItem(int fromwhere,CString item);
	void SavePet(int towhere,CString item);
	void ParsePetData(char *data);
	void GetPet(int fromwhere,CString item);
	void MoveItem(CString para);	
	BOOL CharTrans(CString para);
	BOOL If_Check(CString para);
	BOOL Let_Set(CString para);
	void GetValue(CString &key,int &val);
	BOOL WaitSay(CString para);
	BOOL WaitDlg(CString para);
	void Button(CString para);	
	BOOL SetPetState(CString para);
	BOOL SignDpCheck(CString para);
	BOOL SignHYDCheck(CString para);
	BOOL SendPetMail(CString para);

	BOOL IfMap(CString para);
	BOOL IfPos(CString para);
	BOOL IfStone(CString para);
	BOOL IfFight(CString para);
	BOOL IfDlg(CString para);
	BOOL IfSay(CString para);
	BOOL IfEquipment(CString szItem,CString szTest,CString szPara,CString szJump);
	BOOL IfItemName(CString szItem,CString szTest,CString szPara,CString szJump);
	BOOL IfItemPosEmpty(CString szItem,CString szTest,CString szPara,CString szJump);
	BOOL IfItemIndexName(CString szItem,CString szTest,CString szPara,CString szJump);
	BOOL IfItemIndexPosEmpty(CString szItem,CString szTest,CString szPara,CString szJump);
	BOOL IfPetName(CString szPet,CString szTest,CString szPara,CString szJump);
	BOOL IfPetPosEmpty(CString szPet,CString szTest,CString szPara,CString szJump);
	BOOL IfPetIndexName(CString szPet,CString szTest,CString szPara,CString szJump);
	BOOL IfPetIndexPosEmpty(CString szPet,CString szTest,CString szPara,CString szJump);
	BOOL CheckChar(CString szPara);
	BOOL CheckCharLV(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharEXP(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharHP(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharHPP(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharMP(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharMPP(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharDP(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharAttack(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharDefence(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharQuick(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharCharm(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharVital(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharStr(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharTough(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharDex(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharTransmigration(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharUpLevelPoint(CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckCharGold(CString szTest,int num,int jump,BOOL iscall);

	BOOL CheckPet(CString szPara);
	BOOL CheckPetJob(int petid,CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckPetLV(int petid,CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckPetEXP(int petid,CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckPetHP(int petid,CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckPetHPP(int petid,CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckPetAttack(int petid,CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckPetDefence(int petid,CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckPetQuick(int petid,CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckPetAI(int petid,CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckPetTransmigration(int petid,CString szTest,int num,int jump,BOOL iscall);
	BOOL CheckMap(CString szPara);
	BOOL CheckPosition(CString szPara);
	BOOL CheckSay(CString szPara);
	BOOL CheckDlg(CString szPara);
	BOOL CheckGameState(CString szPara);
	BOOL CheckRelogin(CString szPara);
	BOOL CheckBaiTaning(CString szPara);
};

