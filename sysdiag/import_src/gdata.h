#pragma once









#define PRINT_INFO	DbgPrint("------------------------------------------------------\n");	\
					DbgPrint("������ް�ȫ��� ����������������> sysydiag.sys\n");					\
					DbgPrint("��Ŀ��ַ:https://github.com/stonedreamforest/re_sysdiag\n");													\
					DbgPrint("��վ:https://github.com/stonedreamforest\n");					\
					DbgPrint("����:Tennn\n");												\
					DbgPrint("------------------------------------------------------\n");











//NTKERNELAPI VOID NTAPI SeDeleteAccessState(
extern NTKERNELAPI  PSHORT NtBuildNumber;





extern PINIT_LIST g_LT;

extern INIT_LIST	g_init_list_A;
extern INIT_LIST	g_init_list_B;
extern INIT_LIST	g_init_list_C;
extern INIT_LIST	g_init_list_D;


extern INIT_FUNTABLE	g_init_ftA;
extern INIT_FUNTABLE	g_init_ftB;
extern INIT_FUNTABLE	g_init_ftC;
extern INIT_FUNTABLE	g_init_ftD;




extern SYSDIAG g_sysdiag;
extern INIT_MEMOBJECT g_init_memob;



extern int dword_14005AFA8[];

extern INIT_KEVENT g_init_kevent[];









extern int dword_14005AFA8[];
extern  NPAGED_LOOKASIDE_LIST g_np_lkaside[];


extern STRC_140059950 strc_140059950[];

extern STRU_14005B290 stru_14005b290[];
extern STRC_14005B708 strc_14005b708;