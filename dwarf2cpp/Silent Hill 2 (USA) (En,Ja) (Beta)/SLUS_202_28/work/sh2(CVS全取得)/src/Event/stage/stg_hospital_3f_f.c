typedef struct Model_List;
typedef struct sh2gfw_AREA_HEAD;
typedef struct SubCharacter;
typedef union fsFileIndex;
typedef struct shPlayerWork;
typedef struct _anon0;
typedef union fsFile;
typedef struct shBattleFight;
typedef struct Enemy_List;
typedef struct shBattleShot;
typedef struct _anon1;
typedef struct shBattleArea;
typedef struct Pad_KeyConfig;
typedef struct shBattleInfo;
typedef struct _anon2;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Stage_Data;
typedef struct Event_List;
typedef struct CharaData_DemoList;
typedef struct _CL_VHIT_WALL;
typedef struct Item_List;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct fsCdFile;
typedef struct _anon3;
typedef union _anon4;
typedef struct _CL_VHIT_RESULT;
typedef struct _AnimeInfo;
typedef struct PAD_3D;
typedef union _anon5;
typedef struct DramaDemo_MessageTime;
typedef struct fsMgcFile;
typedef struct Playing_Info;
typedef struct PAD_2D;
typedef struct DramaDemo_PlayInfo;
typedef struct fsMgfFile;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct shSkelton;
typedef struct _anon6;
typedef struct fsHdFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct fsMgpFile;
typedef struct _anon7;
typedef struct PicDraw_Data;

typedef int(*type_4)();
typedef void(*type_18)();
typedef void(*type_87)(SubCharacter*);
typedef void(*type_90)(SubCharacter*);

typedef fsFileIndex type_0[1];
typedef short type_1[4];
typedef short type_2[4][4];
typedef short type_3[4][4][9];
typedef fsFileIndex type_5[1];
typedef fsFileIndex type_6[1];
typedef _AnimeInfo type_7[18];
typedef unsigned char type_8[2];
typedef unsigned char type_9[2];
typedef float type_10[4];
typedef fsFileIndex type_11[1];
typedef short type_12[2];
typedef short type_13[2][4];
typedef short type_14[2][4][9];
typedef _AnimeInfo type_15[5];
typedef fsFileIndex type_16[1];
typedef unsigned char type_17[14];
typedef unsigned char type_19[4];
typedef unsigned char type_20[4][9];
typedef _AnimeInfo type_21[33];
typedef short type_22[2];
typedef unsigned int type_23[255];
typedef unsigned char type_24[97];
typedef short type_25[2][4];
typedef short type_26[2][4][9];
typedef unsigned char type_27[3];
typedef unsigned int type_28[32];
typedef unsigned char type_29[4];
typedef Item_List type_30[6];
typedef char type_31[4];
typedef int type_32[2];
typedef int type_33[2][9];
typedef fsFileIndex type_34[1];
typedef char type_35[4];
typedef _AnimeInfo type_36[11];
typedef char type_37[4];
typedef _AnimeInfo type_38[30];
typedef short type_39[4];
typedef short type_40[4][10];
typedef fsFileIndex type_41[1];
typedef int type_42[6];
typedef char type_43[4];
typedef fsFileIndex type_44[1];
typedef Model_List type_45[5];
typedef char type_46[4];
typedef fsFileIndex type_47[1];
typedef short type_48[3];
typedef short type_49[3][10];
typedef CharaData_DemoList type_50[4];
typedef unsigned char type_51[2];
typedef _AnimeInfo type_52[17];
typedef fsFileIndex type_53[1];
typedef unsigned char type_54[20];
typedef unsigned char type_55[604];
typedef _AnimeInfo type_56[34];
typedef unsigned char type_57[2];
typedef unsigned char type_58[2][2];
typedef unsigned char type_59[2][2][5];
typedef char type_60[4];
typedef fsFileIndex type_61[1];
typedef _AnimeInfo type_62[17];
typedef fsFileIndex type_63[1];
typedef short type_64[2];
typedef short type_65[2][9];
typedef float type_66[4];
typedef float type_67[4][4];
typedef shAttackInfo type_68[66];
typedef _AnimeInfo type_69[17];
typedef int(*type_70)()[15];
typedef fsFileIndex type_71[1];
typedef unsigned char type_72[14];
typedef char type_73[0];
typedef char type_74[4];
typedef CharaData_DemoList type_75[2];
typedef float type_76[2];
typedef PAD_INFO type_77[10];
typedef float type_78[2][3];
typedef float type_79[2][3][5];
typedef Enemy_List type_80[8];
typedef float type_81[4];
typedef fsFileIndex type_82[1];
typedef float type_83[2];
typedef float type_84[4][2];
typedef float type_85[4][2];
typedef _AnimeInfo type_86[33];
typedef fsFileIndex type_88[1];
typedef unsigned char type_89[69];
typedef unsigned char type_91[4];
typedef fsFileIndex type_92[1];
typedef float type_93[7];
typedef CharaData_DemoList type_94[5];
typedef unsigned char type_95[4];
typedef unsigned int type_96[7];
typedef Event_List type_97[64];
typedef unsigned char type_98[4];
typedef fsFileIndex type_99[1];
typedef _AnimeInfo type_100[24];

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	unsigned int model_type;
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon6 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon3 b_pos;
	_anon3 b_rot;
	int en_first_status;
	int colis_fall_timer;
	shBattleInfo battle;
	_CL_VHIT_RESULT eye;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubCharacter* pre;
	SubCharacter* next;
	unsigned char work[4];
	void* enemy_p;
};

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon3 dist_rot;
	_anon3 dist_pos;
	_anon3 pos;
	_anon3 rot;
	float rot_y;
	float inner_to_wall;
	float dist_to_wall;
	float dir_tgt_2d;
	float dir_now_2d;
	unsigned char map_mode;
	unsigned char reserve0;
	unsigned char step;
	unsigned char sub_step;
	unsigned short timer;
	unsigned short timer2;
	unsigned int allbody_now;
	_JAMES_UPPER_STATUS upper_now;
	_JAMES_LOWER_STATUS lower_now;
	unsigned int allbody_prev;
	_JAMES_UPPER_STATUS upper_prev;
	_JAMES_LOWER_STATUS lower_prev;
	unsigned char event_status_now;
	unsigned char event_status_prev;
	unsigned char event_move_mode;
	unsigned char reserve1;
	unsigned int upper_st_flg;
	unsigned int lower_st_flg;
	unsigned int u_anime_st_flg;
	unsigned int l_anime_st_flg;
	unsigned int anime_pause;
	unsigned int act_with_wep;
	float light_vec_inner_rate;
	float light_pos_revise[4];
	float light_vec_revise[4];
	float light_pos[4];
	float light_vec[4];
	float light_pos_revise_reverse[4];
	float light_vec_revise_reverse[4];
	float light_pos_reverse[4];
	float light_vec_reverse[4];
	float light_vec_neck[4];
	int room_name_prev;
	int room_name_now;
	_CL_VHIT_RESULT r_side;
	_CL_VHIT_RESULT l_side;
	_CL_VHIT_RESULT foot;
	_CL_VHIT_RESULT ft_floor;
	_CL_VHIT_RESULT r_foot;
	_CL_VHIT_RESULT l_foot;
	_CL_HITPOLY_COLUMN column_mov;
	_CL_HITPOLY_COLUMN column_atk;
	float col_mov_z_hosei;
	float col_atk_z_hosei;
	unsigned char wep_no_hit_floor;
	unsigned char efct_upper;
	unsigned char light_reverse;
	unsigned char water_road;
	PAD_INFO pad[10];
	float rstick_x;
	float rstick_y;
	float lstick_x;
	float lstick_y;
	float lstick_p;
	float cam_rot_y[2];
	unsigned char now_cam_no;
	unsigned char cam_chg_flg;
	unsigned char ctrl_unit;
	unsigned char ctrl_inputing;
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	float csaw_se_vol;
	unsigned char csaw_se_flg;
	unsigned char d_shock;
	unsigned char reserve2;
	unsigned char strike_splash_flg;
	int event_anime;
	_anon3 tgt_body_angle;
	_anon3 tgt_neck_angle;
	_anon3 tgt_arms_angle;
	unsigned char hold_chg[2];
	unsigned char hold_loop[2];
	unsigned char motion_no;
	unsigned char shotgun_dir;
	unsigned char shotgun_prev;
	unsigned char guard_check;
	int parts_light;
	int parts_rhand;
	int parts_lhand;
	SubCharacter* target;
	SubCharacter* look_tgt;
	float non_input;
	float hugging_gauge;
	float running_time;
	float muteki_time;
	float hp;
	float hp_max;
	float hp_recover;
	float shock;
	float spray_time;
	int tired;
	int tired_max;
	int spirit;
	SubCharacter* enemy_liedown;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char enemy_near;
	unsigned char lock_on;
	unsigned char running;
	unsigned char cannot_run;
	unsigned char fall_type;
	unsigned char reload;
	unsigned char weapon;
	unsigned char shoot_val;
	unsigned char reload_val;
	unsigned char atk_type;
	unsigned char atk_reserve[2];
	unsigned char attack_ok;
	char hold_type;
	unsigned char dead;
	unsigned char no_damage;
	unsigned char atk_count;
	unsigned char hug_status;
	unsigned char hug_dir;
	unsigned char se_on;
	unsigned char spray_set;
	char spray_pow;
	unsigned short damage_no;
	unsigned short attack_no;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon7 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct Enemy_List
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	unsigned short condition;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon1
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct shBattleArea
{
	float center;
	float radius;
};

struct Pad_KeyConfig
{
	int enter;
	int cancel;
	int skip;
	int front_move;
	int back_move;
	int right_turn;
	int left_turn;
	int right_move;
	int left_move;
	int action;
	int attack;
	int dash;
	int light;
	int item;
	int search_view;
	int ready;
	int pause;
	int map;
	int padding[6];
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float dead_timer;
	float damage;
	float shock;
	int atk_result;
	float prev_atk_pos[4];
	SubCharacter* target;
	float hp;
	float hp_max;
	float hp_rate;
	unsigned int status;
	shBattleArea look;
	shBattleArea feel;
	unsigned char se;
};

struct _anon2
{
	unsigned int flag[255];
	float time_deai;
	unsigned int enemy[32];
	unsigned char safe[4];
	char rotate[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	char runaway[4];
	unsigned short hanging;
	short pad;
	char trunk[4];
};

enum _JAMES_LOWER_STATUS : unsigned char
{
	JMS_ST_L_STAND,
	JMS_ST_L_RELAX,
	JMS_ST_L_ALERT,
	JMS_ST_L_TIRED,
	JMS_ST_L_READY,
	JMS_ST_L_READYOFF,
	JMS_ST_L_LROUND,
	JMS_ST_L_RROUND,
	JMS_ST_L_BACK,
	JMS_ST_L_WALK,
	JMS_ST_L_LSWALK,
	JMS_ST_L_RSWALK,
	JMS_ST_L_RUN1,
	JMS_ST_L_RUN2,
	JMS_ST_L_RUN3,
	JMS_ST_L_LSRUN,
	JMS_ST_L_RSRUN,
	JMS_ST_L_WALL_F,
	JMS_ST_L_LTURN,
	JMS_ST_L_RTURN,
	JMS_ST_L_JUMP,
	JMS_ST_L_GUARD,
	JMS_ST_L_LSTEP,
	JMS_ST_L_RSTEP,
	JMS_ST_L_FALL,
	JMS_ST_L_DAMAGE,
	JMS_ST_L_HOLD,
	JMS_ST_L_RELEASE,
	JMS_ST_L_ATTACK,
	JMS_ST_L_KICK,
	JMS_ST_L_TO_STAND,
	JMS_ST_L_EVENT
};

struct Stage_Data
{
	Event_List* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	Item_List* gi_list;
	Model_List* mdl_list;
	Enemy_List* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int pc_model;
	_AnimeInfo* stg_anim_info;
	int(*bgm_control)();
	_anon1* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct CharaData_DemoList
{
	int kind;
	fsFileIndex* model;
	fsFileIndex* animation;
	fsFileIndex* shadow;
	fsFileIndex* cluster;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon4 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

union _anon4
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon5 hobj;
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	char pad;
};

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

union _anon5
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
};

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char voice_off;
	unsigned char memo_select;
	unsigned char clear_end_kind;
	unsigned char clear_end_number;
	unsigned char rank;
	unsigned char game_stage;
	unsigned char hidden_item_get;
	char spray_pow;
	unsigned short savecount;
	unsigned short clearcount;
	unsigned short item_get;
	unsigned short kill_by_shot;
	unsigned short kill_by_fight;
	float time;
	float walk_distance;
	float run_distance;
	float boat_clear_time;
	float boat_max_speed;
	float jms_damage_total;
	float mar_damage_by_enemy;
	float mar_damage_by_jms;
	float stage_check_point[7];
	unsigned int stage_score[7];
	unsigned int total_score;
	float total_time;
	unsigned char battle_level;
	unsigned char riddle_level;
	unsigned char brightness_level;
	char screen_position_x;
	char screen_position_y;
	unsigned char vibration;
	unsigned char auto_load;
	unsigned char sound;
	unsigned char bgm_volume;
	unsigned char se_volume;
	unsigned char weapon_control;
	unsigned char blood_color;
	unsigned char view_control;
	unsigned char retreat_turn;
	unsigned char walk_run_control;
	unsigned char auto_aiming;
	unsigned char view_mode;
	unsigned char bullet_adjust;
	unsigned char language;
	unsigned char subtitles;
	unsigned char control_type;
	unsigned char radar;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct DramaDemo_PlayInfo
{
	int demo_no;
	char* adr_dds_top;
	short* adr_anim;
	DramaDemo_MessageTime* adr_msg_time;
	short msg_start;
	short voice_sd_no;
	int* adr_voice;
	int stream_no;
	float stream_start;
	float add_pos_x;
	float add_pos_z;
};

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

enum _JAMES_UPPER_STATUS : unsigned char
{
	JMS_ST_U_STAND,
	JMS_ST_U_RELAX,
	JMS_ST_U_ALERT,
	JMS_ST_U_TIRED,
	JMS_ST_U_READY,
	JMS_ST_U_READYOFF,
	JMS_ST_U_LROUND,
	JMS_ST_U_RROUND,
	JMS_ST_U_BACK,
	JMS_ST_U_WALK,
	JMS_ST_U_LSWALK,
	JMS_ST_U_RSWALK,
	JMS_ST_U_RUN1,
	JMS_ST_U_RUN2,
	JMS_ST_U_RUN3,
	JMS_ST_U_LSRUN,
	JMS_ST_U_RSRUN,
	JMS_ST_U_WALL_F,
	JMS_ST_U_LTURN,
	JMS_ST_U_RTURN,
	JMS_ST_U_JUMP,
	JMS_ST_U_GUARD,
	JMS_ST_U_LSTEP,
	JMS_ST_U_RSTEP,
	JMS_ST_U_FALL,
	JMS_ST_U_DAMAGE,
	JMS_ST_U_HOLD,
	JMS_ST_U_RELEASE,
	JMS_ST_U_ATTACK,
	JMS_ST_U_KICK,
	JMS_ST_U_TO_STAND,
	JMS_ST_U_EVENT
};

struct PAD_INFO
{
	unsigned char action;
	unsigned char dash;
	unsigned char attack0;
	unsigned char attack1;
	unsigned char attack2;
	unsigned char menu;
	unsigned char hold;
	unsigned char search;
	unsigned char map;
	struct
	{
		unsigned char light_ : 4;
		unsigned char light : 4;
	};
	unsigned char l_button;
	unsigned char r_button;
	char lstickX;
	char lstickY;
	char rstickX;
	char rstickY;
	unsigned char forward;
	unsigned char backward;
	unsigned char lround;
	unsigned char rround;
	unsigned char skip;
	unsigned char pause;
	union
	{
		PAD_3D pad3d;
		PAD_2D pad2d;
	};
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon6 src_m;
	_anon3 src_t;
	_anon6 des_m;
	_anon3 des_t;
	_anon3 axis;
	float theta;
	float xx;
	float yy;
	float zz;
	float xy;
	float yz;
	float zx;
	unsigned short c_count;
	unsigned short c_speed;
	char change;
	char reserved;
	char is_key;
	char pad;
	void* untouchable;
};

struct _anon6
{
	float d[4][4];
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct _CL_HITPOLY_COLUMN
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct _anon7
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
};

struct PicDraw_Data
{
	sh2gfw_AREA_HEAD* ap;
	int tex;
	int clut;
	short x0;
	short y0;
	short x1;
	short y1;
	short x2;
	short y2;
	short x3;
	short y3;
	int us0;
	int vt0;
	int us1;
	int vt1;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	unsigned char alpha_a;
	unsigned char alpha_b;
	unsigned char alpha_c;
	unsigned char alpha_d;
	unsigned char alpha_fix;
	unsigned char test_ate;
	unsigned char test_atst;
	unsigned char test_aref;
	unsigned char test_afail;
	unsigned char test_date;
	unsigned char test_datm;
	unsigned char test_zte;
	unsigned char test_ztst;
	unsigned char pad[3];
	short otp;
	short status;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo pjames_anim[34];
_AnimeInfo pjames_hg_anim[11];
_AnimeInfo pjames_sg_anim[17];
_AnimeInfo pjames_rg_anim[5];
_AnimeInfo pjames_sp_anim[17];
_AnimeInfo pjames_ka_anim[33];
_AnimeInfo pjames_pi_anim[33];
_AnimeInfo pjames_na_anim[17];
_AnimeInfo pjames_cs_anim[24];
_AnimeInfo pjames_demo_anim[30];
_AnimeInfo pjames_stage_anim[18];
unsigned char ev_pos[604];
Event_List ev_list[64];
Item_List gi_list[6];
int(*ev_prog)()[15];
Model_List mdl_list[5];
Enemy_List en_list[8];
Stage_Data stage_hospital_3f_f;
float maria_pos[4][2];
char* dds_adr_c;
char* dds_adr_d;
<unknown fundamental type (0xa510)>* anim_adr;
_anon2 game_flag;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
float demo_frame;
char MemShare_gp_data_buf[0];
fsFileIndex data_demo_mar_hagureru_hagureru_dds[1];
Pad_KeyConfig key_config;
fsFileIndex data_pic_hsp_p_boxnumber_2_tex[1];
fsFileIndex data_pic_hsp_p_boxnumber_tex[1];
char* layer_adr;
fsFileIndex data_pic_hsp_p_drainage_key_tex[1];
fsFileIndex data_pic_hsp_p_drainage_tex[1];
fsFileIndex data_demo_tsuri_tsuri_dds[1];
float ev_timer;
fsFileIndex data_pic_hsp_p_hair_hair_tex[1];
fsFileIndex data_pic_hsp_p_hair_tex[1];
float guruguru_alpha;
float carbon_alpha;
float chain_alpha;
char push_number[4];
fsFileIndex data_pic_hsp_pboxkey01_tex[1];
fsFileIndex data_pic_hsp_p_box_tex[1];
float ev_cursor_x;
float ev_cursor_y;
fsFileIndex data_pic_hsp_p_panel02_tex[1];
fsFileIndex data_pic_hsp_p_panel_tex[1];
char set_pass_number_answer[4];
Playing_Info playing;
int ev_prog_flag_set;
int ev_cancel;
fsFileIndex data_demo_tenjou_hll_jms_anm[1];
fsFileIndex data_demo_tenjou_tenjou_dds[1];
fsFileIndex data_demo_mar_hagureru_hagureru_d_dds[1];
fsFileIndex data_demo_mar_hagureru_hagureru_c_dds[1];
fsFileIndex data_demo_mar_hagureru_hll_jms_anm[1];

int EvProgLostMaria();
int EvProgLostMariaAfter();
int EvProgGetRoofKey();
int EvProgGuruguruNumber();
void EvProgSubGuruguruDraw();
int EvProgOnlyNeedle();
int EvProgOnlyHair();
int EvProgInShowerDrain();
int EvProgFishKey();
int EvProgBoxWithKey();
void EvProgSubKeyLayer();
void EvProgSubKeyCursor();
void EvProgSubHairInBox(int alpha);
int EvProgEmptyBox();
int EvProgSetPassNumberT();
void EvProgSubSetNumberPicDisp();
void EvProgSubSetNumberButton();
int EvProgLouiseTakecare();
int EvProgUseElevatorKey();
int EvProgFromRoof();
int EvCharaDataClear(int room);
void EvRoomInit();
void EvAllTimeFunc();

// 
// Start address: 0x1f01e80
int EvProgLostMaria()
{
	int ret;
	SubCharacter* scp;
	float jms_rot;
	float jms_pos[4];
	DramaDemo_PlayInfo lost;
	CharaData_DemoList chara_data[5];
	// Line 81, Address: 0x1f01e80, Func Offset: 0
	// Line 105, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 107, Address: 0x1f01ea0, Func Offset: 0x20
	// Line 109, Address: 0x1f01f00, Func Offset: 0x80
	// Line 110, Address: 0x1f01f18, Func Offset: 0x98
	// Line 111, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 112, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 113, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 114, Address: 0x1f01f5c, Func Offset: 0xdc
	// Line 118, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 119, Address: 0x1f01f88, Func Offset: 0x108
	// Line 120, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 123, Address: 0x1f01fb8, Func Offset: 0x138
	// Line 124, Address: 0x1f01fe4, Func Offset: 0x164
	// Line 125, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 128, Address: 0x1f02000, Func Offset: 0x180
	// Line 129, Address: 0x1f02008, Func Offset: 0x188
	// Line 130, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 134, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 135, Address: 0x1f02044, Func Offset: 0x1c4
	// Line 136, Address: 0x1f0205c, Func Offset: 0x1dc
	// Line 137, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 139, Address: 0x1f0207c, Func Offset: 0x1fc
	// Line 140, Address: 0x1f02098, Func Offset: 0x218
	// Line 143, Address: 0x1f020a0, Func Offset: 0x220
	// Line 144, Address: 0x1f020a8, Func Offset: 0x228
	// Line 145, Address: 0x1f020b8, Func Offset: 0x238
	// Line 149, Address: 0x1f020cc, Func Offset: 0x24c
	// Line 150, Address: 0x1f020e0, Func Offset: 0x260
	// Line 151, Address: 0x1f020ec, Func Offset: 0x26c
	// Line 152, Address: 0x1f020f8, Func Offset: 0x278
	// Line 153, Address: 0x1f02104, Func Offset: 0x284
	// Line 154, Address: 0x1f02118, Func Offset: 0x298
	// Line 156, Address: 0x1f02148, Func Offset: 0x2c8
	// Line 157, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 158, Address: 0x1f02168, Func Offset: 0x2e8
	// Line 160, Address: 0x1f02174, Func Offset: 0x2f4
	// Line 161, Address: 0x1f02178, Func Offset: 0x2f8
	// Func End, Address: 0x1f0218c, Func Offset: 0x30c
	// Line 97, Address: 0x1f01e80, Func Offset: 0
	// Line 129, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 131, Address: 0x1f01ebc, Func Offset: 0x3c
	// Line 132, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 133, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 134, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 135, Address: 0x1f01f08, Func Offset: 0x88
	// Line 138, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 139, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 140, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 141, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 142, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 145, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 146, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 147, Address: 0x1f01fd4, Func Offset: 0x154
	// Line 148, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 149, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 150, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 152, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 153, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 154, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 156, Address: 0x1f0205c, Func Offset: 0x1dc
	// Line 157, Address: 0x1f02060, Func Offset: 0x1e0
	// Func End, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 131, Address: 0x1f01e80, Func Offset: 0
	// Line 132, Address: 0x1f01e88, Func Offset: 0x8
	// Line 134, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 135, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 136, Address: 0x1f01f08, Func Offset: 0x88
	// Line 139, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 141, Address: 0x1f01f3c, Func Offset: 0xbc
	// Line 142, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 146, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 147, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 148, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 149, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 150, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 153, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 154, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 155, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 156, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 157, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 158, Address: 0x1f02008, Func Offset: 0x188
	// Line 161, Address: 0x1f02010, Func Offset: 0x190
	// Line 162, Address: 0x1f02018, Func Offset: 0x198
	// Line 163, Address: 0x1f02020, Func Offset: 0x1a0
	// Line 164, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 165, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 166, Address: 0x1f02044, Func Offset: 0x1c4
	// Line 167, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 168, Address: 0x1f02068, Func Offset: 0x1e8
	// Line 171, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 172, Address: 0x1f02080, Func Offset: 0x200
	// Line 174, Address: 0x1f02094, Func Offset: 0x214
	// Line 175, Address: 0x1f02098, Func Offset: 0x218
	// Line 176, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 177, Address: 0x1f020b8, Func Offset: 0x238
	// Line 178, Address: 0x1f020d0, Func Offset: 0x250
	// Line 179, Address: 0x1f02104, Func Offset: 0x284
	// Line 180, Address: 0x1f02118, Func Offset: 0x298
	// Line 183, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 184, Address: 0x1f02128, Func Offset: 0x2a8
	// Func End, Address: 0x1f02138, Func Offset: 0x2b8
	// Line 467, Address: 0x1f01e80, Func Offset: 0
	// Line 484, Address: 0x1f01e88, Func Offset: 0x8
	// Line 486, Address: 0x1f01e94, Func Offset: 0x14
	// Line 488, Address: 0x1f01f00, Func Offset: 0x80
	// Line 489, Address: 0x1f01f14, Func Offset: 0x94
	// Line 490, Address: 0x1f01f20, Func Offset: 0xa0
	// Line 491, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 494, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 495, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 497, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 498, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 499, Address: 0x1f01fc4, Func Offset: 0x144
	// Line 500, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 501, Address: 0x1f02018, Func Offset: 0x198
	// Line 504, Address: 0x1f02020, Func Offset: 0x1a0
	// Line 505, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 506, Address: 0x1f0203c, Func Offset: 0x1bc
	// Line 507, Address: 0x1f0204c, Func Offset: 0x1cc
	// Line 508, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 509, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 510, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 513, Address: 0x1f0208c, Func Offset: 0x20c
	// Line 514, Address: 0x1f020a4, Func Offset: 0x224
	// Line 515, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 517, Address: 0x1f020f0, Func Offset: 0x270
	// Line 520, Address: 0x1f020f8, Func Offset: 0x278
	// Line 521, Address: 0x1f02114, Func Offset: 0x294
	// Line 522, Address: 0x1f02148, Func Offset: 0x2c8
	// Line 523, Address: 0x1f02178, Func Offset: 0x2f8
	// Line 524, Address: 0x1f02188, Func Offset: 0x308
	// Line 527, Address: 0x1f02190, Func Offset: 0x310
	// Line 528, Address: 0x1f021ac, Func Offset: 0x32c
	// Line 531, Address: 0x1f021b8, Func Offset: 0x338
	// Line 532, Address: 0x1f021c0, Func Offset: 0x340
	// Line 533, Address: 0x1f021d4, Func Offset: 0x354
	// Line 536, Address: 0x1f021e8, Func Offset: 0x368
	// Line 537, Address: 0x1f021fc, Func Offset: 0x37c
	// Line 538, Address: 0x1f02218, Func Offset: 0x398
	// Line 539, Address: 0x1f02224, Func Offset: 0x3a4
	// Line 540, Address: 0x1f02238, Func Offset: 0x3b8
	// Line 541, Address: 0x1f02240, Func Offset: 0x3c0
	// Line 543, Address: 0x1f0224c, Func Offset: 0x3cc
	// Line 544, Address: 0x1f02250, Func Offset: 0x3d0
	// Func End, Address: 0x1f02260, Func Offset: 0x3e0
	// Line 110, Address: 0x1f01e80, Func Offset: 0
	// Line 144, Address: 0x1f01e88, Func Offset: 0x8
	// Line 146, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 147, Address: 0x1f01f00, Func Offset: 0x80
	// Line 148, Address: 0x1f01f10, Func Offset: 0x90
	// Line 149, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 150, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 151, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 155, Address: 0x1f01f54, Func Offset: 0xd4
	// Line 156, Address: 0x1f01f6c, Func Offset: 0xec
	// Line 157, Address: 0x1f01f94, Func Offset: 0x114
	// Line 160, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 161, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 162, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 165, Address: 0x1f01fe4, Func Offset: 0x164
	// Line 166, Address: 0x1f01fec, Func Offset: 0x16c
	// Line 167, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 171, Address: 0x1f02010, Func Offset: 0x190
	// Line 172, Address: 0x1f0203c, Func Offset: 0x1bc
	// Line 175, Address: 0x1f02044, Func Offset: 0x1c4
	// Line 176, Address: 0x1f0204c, Func Offset: 0x1cc
	// Line 180, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 181, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 182, Address: 0x1f02088, Func Offset: 0x208
	// Line 183, Address: 0x1f0209c, Func Offset: 0x21c
	// Line 184, Address: 0x1f020a4, Func Offset: 0x224
	// Line 185, Address: 0x1f020b0, Func Offset: 0x230
	// Line 186, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 187, Address: 0x1f020d4, Func Offset: 0x254
	// Line 189, Address: 0x1f020e0, Func Offset: 0x260
	// Line 190, Address: 0x1f020e4, Func Offset: 0x264
	// Func End, Address: 0x1f020f4, Func Offset: 0x274
	// Line 246, Address: 0x1f01e80, Func Offset: 0
	// Line 247, Address: 0x1f01e88, Func Offset: 0x8
	// Line 249, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 250, Address: 0x1f01f08, Func Offset: 0x88
	// Line 251, Address: 0x1f01f14, Func Offset: 0x94
	// Line 255, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 256, Address: 0x1f01f3c, Func Offset: 0xbc
	// Line 258, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 259, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 261, Address: 0x1f01f84, Func Offset: 0x104
	// Line 264, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 266, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 267, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 271, Address: 0x1f01fd0, Func Offset: 0x150
	// Line 272, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 273, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 274, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 275, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 278, Address: 0x1f02014, Func Offset: 0x194
	// Line 279, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 280, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 281, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 282, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 283, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 286, Address: 0x1f02080, Func Offset: 0x200
	// Line 287, Address: 0x1f02088, Func Offset: 0x208
	// Line 288, Address: 0x1f02090, Func Offset: 0x210
	// Line 289, Address: 0x1f02098, Func Offset: 0x218
	// Line 290, Address: 0x1f020a0, Func Offset: 0x220
	// Line 291, Address: 0x1f020b4, Func Offset: 0x234
	// Line 292, Address: 0x1f020c8, Func Offset: 0x248
	// Line 293, Address: 0x1f020d8, Func Offset: 0x258
	// Line 296, Address: 0x1f020e0, Func Offset: 0x260
	// Line 297, Address: 0x1f020f0, Func Offset: 0x270
	// Line 298, Address: 0x1f02104, Func Offset: 0x284
	// Line 299, Address: 0x1f02114, Func Offset: 0x294
	// Line 302, Address: 0x1f0211c, Func Offset: 0x29c
	// Line 303, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 305, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 306, Address: 0x1f02140, Func Offset: 0x2c0
	// Func End, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 108, Address: 0x1f01e80, Func Offset: 0
	// Line 141, Address: 0x1f01e88, Func Offset: 0x8
	// Line 142, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 144, Address: 0x1f01eec, Func Offset: 0x6c
	// Line 146, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 147, Address: 0x1f01f54, Func Offset: 0xd4
	// Line 148, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 149, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 150, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 154, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 155, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 157, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 158, Address: 0x1f01ff0, Func Offset: 0x170
	// Line 160, Address: 0x1f02004, Func Offset: 0x184
	// Line 163, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 164, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 165, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 166, Address: 0x1f02044, Func Offset: 0x1c4
	// Line 167, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 168, Address: 0x1f0206c, Func Offset: 0x1ec
	// Line 172, Address: 0x1f02080, Func Offset: 0x200
	// Line 173, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 176, Address: 0x1f020b4, Func Offset: 0x234
	// Line 177, Address: 0x1f020c0, Func Offset: 0x240
	// Line 178, Address: 0x1f020cc, Func Offset: 0x24c
	// Line 179, Address: 0x1f020d8, Func Offset: 0x258
	// Line 181, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 182, Address: 0x1f02108, Func Offset: 0x288
	// Line 183, Address: 0x1f0211c, Func Offset: 0x29c
	// Line 184, Address: 0x1f02128, Func Offset: 0x2a8
	// Line 185, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 188, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 189, Address: 0x1f02170, Func Offset: 0x2f0
	// Line 190, Address: 0x1f02184, Func Offset: 0x304
	// Line 192, Address: 0x1f02190, Func Offset: 0x310
	// Line 193, Address: 0x1f02194, Func Offset: 0x314
	// Func End, Address: 0x1f021a4, Func Offset: 0x324
	// Line 145, Address: 0x1f01e80, Func Offset: 0
	// Line 193, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 195, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 196, Address: 0x1f01ee0, Func Offset: 0x60
	// Line 197, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 198, Address: 0x1f01f00, Func Offset: 0x80
	// Line 199, Address: 0x1f01f14, Func Offset: 0x94
	// Line 201, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 203, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 206, Address: 0x1f01f84, Func Offset: 0x104
	// Line 207, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 208, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 210, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 213, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 214, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 215, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 218, Address: 0x1f02004, Func Offset: 0x184
	// Line 220, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 221, Address: 0x1f0203c, Func Offset: 0x1bc
	// Line 222, Address: 0x1f02048, Func Offset: 0x1c8
	// Line 223, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 224, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 225, Address: 0x1f0206c, Func Offset: 0x1ec
	// Line 226, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 227, Address: 0x1f0208c, Func Offset: 0x20c
	// Line 228, Address: 0x1f02094, Func Offset: 0x214
	// Line 229, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 230, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 232, Address: 0x1f020d8, Func Offset: 0x258
	// Line 234, Address: 0x1f02100, Func Offset: 0x280
	// Line 236, Address: 0x1f02128, Func Offset: 0x2a8
	// Line 237, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 238, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 239, Address: 0x1f0215c, Func Offset: 0x2dc
	// Line 240, Address: 0x1f02168, Func Offset: 0x2e8
	// Line 241, Address: 0x1f02178, Func Offset: 0x2f8
	// Line 242, Address: 0x1f02190, Func Offset: 0x310
	// Line 244, Address: 0x1f0219c, Func Offset: 0x31c
	// Line 245, Address: 0x1f021a0, Func Offset: 0x320
	// Func End, Address: 0x1f021b4, Func Offset: 0x334
	// Line 219, Address: 0x1f01e80, Func Offset: 0
	// Line 222, Address: 0x1f01e88, Func Offset: 0x8
	// Line 232, Address: 0x1f01f04, Func Offset: 0x84
	// Line 233, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 234, Address: 0x1f01f14, Func Offset: 0x94
	// Line 236, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 237, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 239, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 240, Address: 0x1f01f6c, Func Offset: 0xec
	// Line 244, Address: 0x1f01f74, Func Offset: 0xf4
	// Line 246, Address: 0x1f02010, Func Offset: 0x190
	// Line 247, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 248, Address: 0x1f0205c, Func Offset: 0x1dc
	// Line 252, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 254, Address: 0x1f02090, Func Offset: 0x210
	// Line 255, Address: 0x1f020a0, Func Offset: 0x220
	// Line 259, Address: 0x1f020b4, Func Offset: 0x234
	// Line 260, Address: 0x1f020c4, Func Offset: 0x244
	// Line 261, Address: 0x1f020d8, Func Offset: 0x258
	// Line 264, Address: 0x1f020e0, Func Offset: 0x260
	// Line 265, Address: 0x1f02118, Func Offset: 0x298
	// Line 266, Address: 0x1f0212c, Func Offset: 0x2ac
	// Line 269, Address: 0x1f02134, Func Offset: 0x2b4
	// Line 270, Address: 0x1f02144, Func Offset: 0x2c4
	// Line 271, Address: 0x1f02158, Func Offset: 0x2d8
	// Line 274, Address: 0x1f02160, Func Offset: 0x2e0
	// Line 275, Address: 0x1f02170, Func Offset: 0x2f0
	// Line 276, Address: 0x1f02184, Func Offset: 0x304
	// Line 277, Address: 0x1f02198, Func Offset: 0x318
	// Line 278, Address: 0x1f021ac, Func Offset: 0x32c
	// Line 279, Address: 0x1f021c4, Func Offset: 0x344
	// Line 280, Address: 0x1f021d4, Func Offset: 0x354
	// Line 281, Address: 0x1f021e8, Func Offset: 0x368
	// Line 282, Address: 0x1f02200, Func Offset: 0x380
	// Line 283, Address: 0x1f02210, Func Offset: 0x390
	// Line 284, Address: 0x1f02218, Func Offset: 0x398
	// Line 285, Address: 0x1f02230, Func Offset: 0x3b0
	// Line 287, Address: 0x1f02244, Func Offset: 0x3c4
	// Line 288, Address: 0x1f02258, Func Offset: 0x3d8
	// Line 291, Address: 0x1f02260, Func Offset: 0x3e0
	// Line 294, Address: 0x1f02284, Func Offset: 0x404
	// Line 295, Address: 0x1f02294, Func Offset: 0x414
	// Line 296, Address: 0x1f022a8, Func Offset: 0x428
	// Line 299, Address: 0x1f022b0, Func Offset: 0x430
	// Line 300, Address: 0x1f022c0, Func Offset: 0x440
	// Line 301, Address: 0x1f022d4, Func Offset: 0x454
	// Line 304, Address: 0x1f022dc, Func Offset: 0x45c
	// Line 305, Address: 0x1f02314, Func Offset: 0x494
	// Line 306, Address: 0x1f02328, Func Offset: 0x4a8
	// Line 309, Address: 0x1f02330, Func Offset: 0x4b0
	// Line 310, Address: 0x1f02344, Func Offset: 0x4c4
	// Line 311, Address: 0x1f02358, Func Offset: 0x4d8
	// Line 312, Address: 0x1f02368, Func Offset: 0x4e8
	// Line 315, Address: 0x1f02370, Func Offset: 0x4f0
	// Line 316, Address: 0x1f02394, Func Offset: 0x514
	// Line 319, Address: 0x1f0239c, Func Offset: 0x51c
	// Line 320, Address: 0x1f023b0, Func Offset: 0x530
	// Line 321, Address: 0x1f023c0, Func Offset: 0x540
	// Line 323, Address: 0x1f023cc, Func Offset: 0x54c
	// Line 324, Address: 0x1f023d0, Func Offset: 0x550
	// Func End, Address: 0x1f023e0, Func Offset: 0x560
	// Line 83, Address: 0x1f01e80, Func Offset: 0
	// Line 84, Address: 0x1f01ea0, Func Offset: 0x20
	// Func End, Address: 0x1f01ea8, Func Offset: 0x28
	// Line 232, Address: 0x1f01e80, Func Offset: 0
	// Line 236, Address: 0x1f01e88, Func Offset: 0x8
	// Line 238, Address: 0x1f01e90, Func Offset: 0x10
	// Line 242, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 243, Address: 0x1f01ecc, Func Offset: 0x4c
	// Line 244, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 249, Address: 0x1f01ef0, Func Offset: 0x70
	// Line 251, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 254, Address: 0x1f01f04, Func Offset: 0x84
	// Line 255, Address: 0x1f01f18, Func Offset: 0x98
	// Line 256, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 260, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 261, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 262, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 263, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 264, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 265, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 266, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 267, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 268, Address: 0x1f0203c, Func Offset: 0x1bc
	// Line 269, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 270, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 271, Address: 0x1f02094, Func Offset: 0x214
	// Line 272, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 273, Address: 0x1f020d4, Func Offset: 0x254
	// Line 279, Address: 0x1f020f0, Func Offset: 0x270
	// Func End, Address: 0x1f02100, Func Offset: 0x280
	// Line 103, Address: 0x1f01e80, Func Offset: 0
	// Line 104, Address: 0x1f01e88, Func Offset: 0x8
	// Line 105, Address: 0x1f01e98, Func Offset: 0x18
	// Func End, Address: 0x1f01ea8, Func Offset: 0x28
	// Line 516, Address: 0x1f01e80, Func Offset: 0
	// Line 554, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 556, Address: 0x1f01eec, Func Offset: 0x6c
	// Line 557, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 558, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 559, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 560, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 561, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 564, Address: 0x1f01f5c, Func Offset: 0xdc
	// Line 565, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 567, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 568, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 569, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 570, Address: 0x1f02000, Func Offset: 0x180
	// Line 573, Address: 0x1f02008, Func Offset: 0x188
	// Line 574, Address: 0x1f02034, Func Offset: 0x1b4
	// Line 575, Address: 0x1f02048, Func Offset: 0x1c8
	// Line 578, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 579, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 583, Address: 0x1f0206c, Func Offset: 0x1ec
	// Line 584, Address: 0x1f02098, Func Offset: 0x218
	// Line 587, Address: 0x1f020a0, Func Offset: 0x220
	// Line 588, Address: 0x1f020a8, Func Offset: 0x228
	// Line 592, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 593, Address: 0x1f020c4, Func Offset: 0x244
	// Line 594, Address: 0x1f020d0, Func Offset: 0x250
	// Line 595, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 596, Address: 0x1f020e8, Func Offset: 0x268
	// Line 597, Address: 0x1f020f0, Func Offset: 0x270
	// Line 598, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 599, Address: 0x1f02110, Func Offset: 0x290
	// Line 600, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 601, Address: 0x1f02138, Func Offset: 0x2b8
	// Line 602, Address: 0x1f02144, Func Offset: 0x2c4
	// Line 603, Address: 0x1f0214c, Func Offset: 0x2cc
	// Line 605, Address: 0x1f02158, Func Offset: 0x2d8
	// Line 606, Address: 0x1f0215c, Func Offset: 0x2dc
	// Func End, Address: 0x1f02170, Func Offset: 0x2f0
	// Line 112, Address: 0x1f01e80, Func Offset: 0
	// Line 154, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 156, Address: 0x1f01ebc, Func Offset: 0x3c
	// Line 157, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 158, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 159, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 160, Address: 0x1f01f08, Func Offset: 0x88
	// Line 163, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 164, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 166, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 167, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 169, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 172, Address: 0x1f01f94, Func Offset: 0x114
	// Line 173, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 174, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 175, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 176, Address: 0x1f01fd4, Func Offset: 0x154
	// Line 177, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 178, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 179, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 180, Address: 0x1f02008, Func Offset: 0x188
	// Line 182, Address: 0x1f02014, Func Offset: 0x194
	// Line 183, Address: 0x1f02018, Func Offset: 0x198
	// Func End, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 79, Address: 0x1f01e80, Func Offset: 0
	// Line 103, Address: 0x1f01e88, Func Offset: 0x8
	// Line 105, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 106, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 107, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 108, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 111, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 112, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 115, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 116, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 117, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 118, Address: 0x1f01f6c, Func Offset: 0xec
	// Line 119, Address: 0x1f01f80, Func Offset: 0x100
	// Line 120, Address: 0x1f01f94, Func Offset: 0x114
	// Line 121, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 122, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 123, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 124, Address: 0x1f01fd0, Func Offset: 0x150
	// Line 125, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 126, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 127, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 128, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 129, Address: 0x1f02004, Func Offset: 0x184
	// Line 130, Address: 0x1f02008, Func Offset: 0x188
	// Line 131, Address: 0x1f02014, Func Offset: 0x194
	// Line 132, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 133, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 134, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 135, Address: 0x1f02044, Func Offset: 0x1c4
	// Line 137, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 138, Address: 0x1f02054, Func Offset: 0x1d4
	// Func End, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 128, Address: 0x1f01e80, Func Offset: 0
	// Line 129, Address: 0x1f01e88, Func Offset: 0x8
	// Line 131, Address: 0x1f01e9c, Func Offset: 0x1c
	// Func End, Address: 0x1f01eac, Func Offset: 0x2c
	// Line 122, Address: 0x1f01e80, Func Offset: 0
	// Line 123, Address: 0x1f01e88, Func Offset: 0x8
	// Line 124, Address: 0x1f01e98, Func Offset: 0x18
	// Func End, Address: 0x1f01ea8, Func Offset: 0x28
	// Line 162, Address: 0x1f01e80, Func Offset: 0
	// Line 203, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 205, Address: 0x1f01ebc, Func Offset: 0x3c
	// Line 206, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 207, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 208, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 209, Address: 0x1f01f08, Func Offset: 0x88
	// Line 210, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 213, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 214, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 215, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 216, Address: 0x1f01f84, Func Offset: 0x104
	// Line 217, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 220, Address: 0x1f01fa8, Func Offset: 0x128
	// Line 221, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 222, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 223, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 224, Address: 0x1f01fd4, Func Offset: 0x154
	// Line 225, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 226, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 227, Address: 0x1f02014, Func Offset: 0x194
	// Line 228, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 229, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 230, Address: 0x1f0204c, Func Offset: 0x1cc
	// Line 231, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 232, Address: 0x1f02080, Func Offset: 0x200
	// Line 233, Address: 0x1f02088, Func Offset: 0x208
	// Line 234, Address: 0x1f02090, Func Offset: 0x210
	// Line 235, Address: 0x1f0209c, Func Offset: 0x21c
	// Line 236, Address: 0x1f020b4, Func Offset: 0x234
	// Line 237, Address: 0x1f020e0, Func Offset: 0x260
	// Line 239, Address: 0x1f020ec, Func Offset: 0x26c
	// Line 240, Address: 0x1f020f0, Func Offset: 0x270
	// Func End, Address: 0x1f02104, Func Offset: 0x284
	// Line 102, Address: 0x1f01e80, Func Offset: 0
	// Line 103, Address: 0x1f01e88, Func Offset: 0x8
	// Line 106, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 107, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 108, Address: 0x1f01f08, Func Offset: 0x88
	// Line 109, Address: 0x1f01f18, Func Offset: 0x98
	// Line 110, Address: 0x1f01f20, Func Offset: 0xa0
	// Line 114, Address: 0x1f01f34, Func Offset: 0xb4
	// Line 117, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 118, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 122, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 123, Address: 0x1f01f84, Func Offset: 0x104
	// Line 124, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 125, Address: 0x1f01f98, Func Offset: 0x118
	// Line 126, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 127, Address: 0x1f01fa8, Func Offset: 0x128
	// Line 129, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 130, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 131, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 134, Address: 0x1f02034, Func Offset: 0x1b4
	// Line 135, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 136, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 137, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 138, Address: 0x1f02068, Func Offset: 0x1e8
	// Line 139, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 140, Address: 0x1f02094, Func Offset: 0x214
	// Line 141, Address: 0x1f020a8, Func Offset: 0x228
	// Line 142, Address: 0x1f020b8, Func Offset: 0x238
	// Line 145, Address: 0x1f02120, Func Offset: 0x2a0
	// Line 146, Address: 0x1f02138, Func Offset: 0x2b8
	// Line 149, Address: 0x1f02140, Func Offset: 0x2c0
	// Line 150, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 151, Address: 0x1f02164, Func Offset: 0x2e4
	// Line 154, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 155, Address: 0x1f021e0, Func Offset: 0x360
	// Line 156, Address: 0x1f021e8, Func Offset: 0x368
	// Line 157, Address: 0x1f02218, Func Offset: 0x398
	// Line 158, Address: 0x1f0222c, Func Offset: 0x3ac
	// Line 159, Address: 0x1f02238, Func Offset: 0x3b8
	// Line 160, Address: 0x1f02244, Func Offset: 0x3c4
	// Line 162, Address: 0x1f02258, Func Offset: 0x3d8
	// Line 165, Address: 0x1f02260, Func Offset: 0x3e0
	// Line 166, Address: 0x1f0227c, Func Offset: 0x3fc
	// Line 167, Address: 0x1f02294, Func Offset: 0x414
	// Line 168, Address: 0x1f022a0, Func Offset: 0x420
	// Line 169, Address: 0x1f022b8, Func Offset: 0x438
	// Line 171, Address: 0x1f022cc, Func Offset: 0x44c
	// Line 174, Address: 0x1f022d4, Func Offset: 0x454
	// Line 175, Address: 0x1f022e4, Func Offset: 0x464
	// Line 176, Address: 0x1f022f8, Func Offset: 0x478
	// Line 177, Address: 0x1f02314, Func Offset: 0x494
	// Line 178, Address: 0x1f02330, Func Offset: 0x4b0
	// Line 179, Address: 0x1f0234c, Func Offset: 0x4cc
	// Line 182, Address: 0x1f02358, Func Offset: 0x4d8
	// Line 183, Address: 0x1f0235c, Func Offset: 0x4dc
	// Func End, Address: 0x1f0236c, Func Offset: 0x4ec
	// Line 96, Address: 0x1f01e80, Func Offset: 0
	// Line 141, Address: 0x1f01e88, Func Offset: 0x8
	// Line 143, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 144, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 145, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 146, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 147, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 148, Address: 0x1f01f08, Func Offset: 0x88
	// Line 152, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 153, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 156, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 157, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 158, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 159, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 160, Address: 0x1f01f88, Func Offset: 0x108
	// Line 161, Address: 0x1f01f94, Func Offset: 0x114
	// Line 163, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 164, Address: 0x1f01fa4, Func Offset: 0x124
	// Func End, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 82, Address: 0x1f01e80, Func Offset: 0
	// Line 99, Address: 0x1f01e88, Func Offset: 0x8
	// Line 101, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 102, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 103, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 104, Address: 0x1f01ef0, Func Offset: 0x70
	// Line 105, Address: 0x1f01f04, Func Offset: 0x84
	// Line 108, Address: 0x1f01f18, Func Offset: 0x98
	// Line 109, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 112, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 113, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 114, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 115, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 116, Address: 0x1f01f80, Func Offset: 0x100
	// Line 117, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 118, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 119, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 120, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 121, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 122, Address: 0x1f01fec, Func Offset: 0x16c
	// Line 124, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 125, Address: 0x1f01ffc, Func Offset: 0x17c
	// Func End, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 100, Address: 0x1f01e80, Func Offset: 0
	// Line 143, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 145, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 146, Address: 0x1f01f10, Func Offset: 0x90
	// Line 147, Address: 0x1f01f24, Func Offset: 0xa4
	// Line 148, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 149, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 153, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 154, Address: 0x1f01f6c, Func Offset: 0xec
	// Line 156, Address: 0x1f01f98, Func Offset: 0x118
	// Line 157, Address: 0x1f01fa8, Func Offset: 0x128
	// Line 159, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 162, Address: 0x1f01fc4, Func Offset: 0x144
	// Line 163, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 164, Address: 0x1f01fec, Func Offset: 0x16c
	// Line 165, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 169, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 170, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 171, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 172, Address: 0x1f02080, Func Offset: 0x200
	// Line 173, Address: 0x1f02094, Func Offset: 0x214
	// Line 176, Address: 0x1f0209c, Func Offset: 0x21c
	// Line 177, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 178, Address: 0x1f020d4, Func Offset: 0x254
	// Line 181, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 182, Address: 0x1f020ec, Func Offset: 0x26c
	// Line 183, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 184, Address: 0x1f02118, Func Offset: 0x298
	// Line 187, Address: 0x1f02120, Func Offset: 0x2a0
	// Line 188, Address: 0x1f0212c, Func Offset: 0x2ac
	// Line 189, Address: 0x1f02138, Func Offset: 0x2b8
	// Line 190, Address: 0x1f02144, Func Offset: 0x2c4
	// Line 191, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 192, Address: 0x1f02164, Func Offset: 0x2e4
	// Line 193, Address: 0x1f0216c, Func Offset: 0x2ec
	// Line 194, Address: 0x1f02174, Func Offset: 0x2f4
	// Line 195, Address: 0x1f02188, Func Offset: 0x308
	// Line 196, Address: 0x1f0219c, Func Offset: 0x31c
	// Line 197, Address: 0x1f021b0, Func Offset: 0x330
	// Line 198, Address: 0x1f021c0, Func Offset: 0x340
	// Line 199, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 200, Address: 0x1f021d8, Func Offset: 0x358
	// Line 201, Address: 0x1f021e4, Func Offset: 0x364
	// Line 202, Address: 0x1f021f0, Func Offset: 0x370
	// Line 204, Address: 0x1f02210, Func Offset: 0x390
	// Line 205, Address: 0x1f0221c, Func Offset: 0x39c
	// Line 208, Address: 0x1f02234, Func Offset: 0x3b4
	// Line 209, Address: 0x1f02248, Func Offset: 0x3c8
	// Line 211, Address: 0x1f02254, Func Offset: 0x3d4
	// Line 212, Address: 0x1f02258, Func Offset: 0x3d8
	// Func End, Address: 0x1f0226c, Func Offset: 0x3ec
	// Line 117, Address: 0x1f01e80, Func Offset: 0
	// Line 120, Address: 0x1f01e88, Func Offset: 0x8
	// Line 126, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 127, Address: 0x1f01f00, Func Offset: 0x80
	// Line 128, Address: 0x1f01f08, Func Offset: 0x88
	// Line 129, Address: 0x1f01f10, Func Offset: 0x90
	// Line 130, Address: 0x1f01f18, Func Offset: 0x98
	// Line 135, Address: 0x1f01f20, Func Offset: 0xa0
	// Line 136, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 137, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 138, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 139, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 143, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 145, Address: 0x1f01fe4, Func Offset: 0x164
	// Line 146, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 147, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 148, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 149, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 150, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 152, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 153, Address: 0x1f0208c, Func Offset: 0x20c
	// Line 154, Address: 0x1f02094, Func Offset: 0x214
	// Line 155, Address: 0x1f020a8, Func Offset: 0x228
	// Line 156, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 157, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 159, Address: 0x1f020f0, Func Offset: 0x270
	// Line 162, Address: 0x1f020f8, Func Offset: 0x278
	// Line 163, Address: 0x1f0211c, Func Offset: 0x29c
	// Line 164, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 165, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 166, Address: 0x1f02164, Func Offset: 0x2e4
	// Line 169, Address: 0x1f0216c, Func Offset: 0x2ec
	// Line 172, Address: 0x1f02190, Func Offset: 0x310
	// Line 173, Address: 0x1f021a0, Func Offset: 0x320
	// Line 174, Address: 0x1f021b4, Func Offset: 0x334
	// Line 177, Address: 0x1f021bc, Func Offset: 0x33c
	// Line 178, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 179, Address: 0x1f02200, Func Offset: 0x380
	// Line 180, Address: 0x1f02210, Func Offset: 0x390
	// Line 181, Address: 0x1f0222c, Func Offset: 0x3ac
	// Line 182, Address: 0x1f02240, Func Offset: 0x3c0
	// Line 185, Address: 0x1f02248, Func Offset: 0x3c8
	// Line 187, Address: 0x1f02270, Func Offset: 0x3f0
	// Line 188, Address: 0x1f02284, Func Offset: 0x404
	// Line 190, Address: 0x1f02298, Func Offset: 0x418
	// Line 193, Address: 0x1f022a0, Func Offset: 0x420
	// Line 194, Address: 0x1f022bc, Func Offset: 0x43c
	// Line 195, Address: 0x1f022d8, Func Offset: 0x458
	// Line 196, Address: 0x1f022e0, Func Offset: 0x460
	// Line 200, Address: 0x1f02314, Func Offset: 0x494
	// Line 202, Address: 0x1f02328, Func Offset: 0x4a8
	// Line 205, Address: 0x1f02330, Func Offset: 0x4b0
	// Line 207, Address: 0x1f02358, Func Offset: 0x4d8
	// Line 208, Address: 0x1f0236c, Func Offset: 0x4ec
	// Line 210, Address: 0x1f02380, Func Offset: 0x500
	// Line 213, Address: 0x1f02388, Func Offset: 0x508
	// Line 214, Address: 0x1f023a4, Func Offset: 0x524
	// Line 215, Address: 0x1f023c0, Func Offset: 0x540
	// Line 218, Address: 0x1f023c8, Func Offset: 0x548
	// Line 219, Address: 0x1f023dc, Func Offset: 0x55c
	// Line 222, Address: 0x1f023e4, Func Offset: 0x564
	// Line 224, Address: 0x1f0241c, Func Offset: 0x59c
	// Line 226, Address: 0x1f02444, Func Offset: 0x5c4
	// Line 227, Address: 0x1f02454, Func Offset: 0x5d4
	// Line 228, Address: 0x1f02468, Func Offset: 0x5e8
	// Line 229, Address: 0x1f02484, Func Offset: 0x604
	// Line 232, Address: 0x1f0248c, Func Offset: 0x60c
	// Line 233, Address: 0x1f024a0, Func Offset: 0x620
	// Line 234, Address: 0x1f024b0, Func Offset: 0x630
	// Line 235, Address: 0x1f024c4, Func Offset: 0x644
	// Line 238, Address: 0x1f024cc, Func Offset: 0x64c
	// Line 239, Address: 0x1f024f0, Func Offset: 0x670
	// Line 242, Address: 0x1f024f8, Func Offset: 0x678
	// Line 243, Address: 0x1f0250c, Func Offset: 0x68c
	// Line 244, Address: 0x1f0251c, Func Offset: 0x69c
	// Line 245, Address: 0x1f02534, Func Offset: 0x6b4
	// Line 246, Address: 0x1f0254c, Func Offset: 0x6cc
	// Line 249, Address: 0x1f02558, Func Offset: 0x6d8
	// Line 250, Address: 0x1f0255c, Func Offset: 0x6dc
	// Func End, Address: 0x1f0256c, Func Offset: 0x6ec
	// Line 113, Address: 0x1f01e80, Func Offset: 0
	// Line 150, Address: 0x1f01e88, Func Offset: 0x8
	// Line 152, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 153, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 154, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 155, Address: 0x1f01f18, Func Offset: 0x98
	// Line 159, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 160, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 161, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 164, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 166, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 167, Address: 0x1f01fb8, Func Offset: 0x138
	// Line 170, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 171, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 172, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 173, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 177, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 178, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 181, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 182, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 186, Address: 0x1f0204c, Func Offset: 0x1cc
	// Line 187, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 188, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 189, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 190, Address: 0x1f02084, Func Offset: 0x204
	// Line 191, Address: 0x1f02098, Func Offset: 0x218
	// Line 192, Address: 0x1f020a0, Func Offset: 0x220
	// Line 195, Address: 0x1f020d0, Func Offset: 0x250
	// Line 196, Address: 0x1f020f4, Func Offset: 0x274
	// Line 197, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 199, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 200, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 201, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 202, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 204, Address: 0x1f0215c, Func Offset: 0x2dc
	// Line 205, Address: 0x1f02160, Func Offset: 0x2e0
	// Func End, Address: 0x1f02170, Func Offset: 0x2f0
	// Line 120, Address: 0x1f01e80, Func Offset: 0
	// Line 121, Address: 0x1f01e88, Func Offset: 0x8
	// Line 124, Address: 0x1f01ec4, Func Offset: 0x44
	// Line 125, Address: 0x1f01ec8, Func Offset: 0x48
	// Func End, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 72, Address: 0x1f01e80, Func Offset: 0
	// Line 73, Address: 0x1f01e88, Func Offset: 0x8
	// Line 75, Address: 0x1f01e9c, Func Offset: 0x1c
	// Func End, Address: 0x1f01eac, Func Offset: 0x2c
	// Line 71, Address: 0x1f01e80, Func Offset: 0
	// Line 78, Address: 0x1f01e88, Func Offset: 0x8
	// Line 81, Address: 0x1f01edc, Func Offset: 0x5c
	// Line 82, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 84, Address: 0x1f01f24, Func Offset: 0xa4
	// Line 85, Address: 0x1f01f3c, Func Offset: 0xbc
	// Line 86, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 87, Address: 0x1f01f5c, Func Offset: 0xdc
	// Line 91, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 92, Address: 0x1f01f84, Func Offset: 0x104
	// Line 93, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 94, Address: 0x1f01fc4, Func Offset: 0x144
	// Line 97, Address: 0x1f01fcc, Func Offset: 0x14c
	// Line 98, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 99, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 100, Address: 0x1f02010, Func Offset: 0x190
	// Line 101, Address: 0x1f02018, Func Offset: 0x198
	// Line 102, Address: 0x1f02020, Func Offset: 0x1a0
	// Line 104, Address: 0x1f02034, Func Offset: 0x1b4
	// Line 105, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 106, Address: 0x1f0206c, Func Offset: 0x1ec
	// Line 107, Address: 0x1f02098, Func Offset: 0x218
	// Line 110, Address: 0x1f020a0, Func Offset: 0x220
	// Line 111, Address: 0x1f020b0, Func Offset: 0x230
	// Line 115, Address: 0x1f020d0, Func Offset: 0x250
	// Line 116, Address: 0x1f020e4, Func Offset: 0x264
	// Line 118, Address: 0x1f020f8, Func Offset: 0x278
	// Line 119, Address: 0x1f0210c, Func Offset: 0x28c
	// Line 121, Address: 0x1f02118, Func Offset: 0x298
	// Line 122, Address: 0x1f0211c, Func Offset: 0x29c
	// Func End, Address: 0x1f0212c, Func Offset: 0x2ac
	// Line 184, Address: 0x1f01e80, Func Offset: 0
	// Line 191, Address: 0x1f01e88, Func Offset: 0x8
	// Line 193, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 194, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 196, Address: 0x1f01f00, Func Offset: 0x80
	// Line 197, Address: 0x1f01f18, Func Offset: 0x98
	// Line 198, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 199, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 200, Address: 0x1f01f5c, Func Offset: 0xdc
	// Line 201, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 205, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 206, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 209, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 210, Address: 0x1f01fcc, Func Offset: 0x14c
	// Line 211, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 212, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 213, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 215, Address: 0x1f02000, Func Offset: 0x180
	// Line 216, Address: 0x1f02004, Func Offset: 0x184
	// Func End, Address: 0x1f02014, Func Offset: 0x194
	// Line 141, Address: 0x1f01e80, Func Offset: 0
	// Line 227, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 229, Address: 0x1f01f10, Func Offset: 0x90
	// Line 230, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 232, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 234, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 235, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 236, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 237, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 238, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 242, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 243, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 244, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 245, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 246, Address: 0x1f02040, Func Offset: 0x1c0
	// Line 248, Address: 0x1f0205c, Func Offset: 0x1dc
	// Line 250, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 252, Address: 0x1f020a0, Func Offset: 0x220
	// Line 255, Address: 0x1f020a8, Func Offset: 0x228
	// Line 256, Address: 0x1f020d4, Func Offset: 0x254
	// Line 257, Address: 0x1f020e8, Func Offset: 0x268
	// Line 260, Address: 0x1f020f0, Func Offset: 0x270
	// Line 261, Address: 0x1f020f8, Func Offset: 0x278
	// Line 265, Address: 0x1f0210c, Func Offset: 0x28c
	// Line 266, Address: 0x1f02128, Func Offset: 0x2a8
	// Line 267, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 268, Address: 0x1f02170, Func Offset: 0x2f0
	// Line 269, Address: 0x1f02188, Func Offset: 0x308
	// Line 271, Address: 0x1f021a4, Func Offset: 0x324
	// Line 272, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 275, Address: 0x1f021d4, Func Offset: 0x354
	// Line 276, Address: 0x1f02200, Func Offset: 0x380
	// Line 277, Address: 0x1f02214, Func Offset: 0x394
	// Line 280, Address: 0x1f0221c, Func Offset: 0x39c
	// Line 281, Address: 0x1f02224, Func Offset: 0x3a4
	// Line 285, Address: 0x1f02238, Func Offset: 0x3b8
	// Line 286, Address: 0x1f02264, Func Offset: 0x3e4
	// Line 289, Address: 0x1f0226c, Func Offset: 0x3ec
	// Line 290, Address: 0x1f02274, Func Offset: 0x3f4
	// Line 294, Address: 0x1f02288, Func Offset: 0x408
	// Line 295, Address: 0x1f02294, Func Offset: 0x414
	// Line 296, Address: 0x1f022a0, Func Offset: 0x420
	// Line 297, Address: 0x1f022ac, Func Offset: 0x42c
	// Line 298, Address: 0x1f022b8, Func Offset: 0x438
	// Line 299, Address: 0x1f022cc, Func Offset: 0x44c
	// Line 300, Address: 0x1f022d4, Func Offset: 0x454
	// Line 301, Address: 0x1f022f0, Func Offset: 0x470
	// Line 302, Address: 0x1f02318, Func Offset: 0x498
	// Line 304, Address: 0x1f02348, Func Offset: 0x4c8
	// Line 305, Address: 0x1f02354, Func Offset: 0x4d4
	// Line 306, Address: 0x1f02360, Func Offset: 0x4e0
	// Line 307, Address: 0x1f02370, Func Offset: 0x4f0
	// Line 309, Address: 0x1f0237c, Func Offset: 0x4fc
	// Line 310, Address: 0x1f02380, Func Offset: 0x500
	// Func End, Address: 0x1f02394, Func Offset: 0x514
	// Line 136, Address: 0x1f01e80, Func Offset: 0
	// Line 137, Address: 0x1f01e88, Func Offset: 0x8
	// Line 138, Address: 0x1f01e9c, Func Offset: 0x1c
	// Line 139, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 141, Address: 0x1f01eb4, Func Offset: 0x34
	// Func End, Address: 0x1f01ec4, Func Offset: 0x44
	// Line 85, Address: 0x1f01e80, Func Offset: 0
	// Line 94, Address: 0x1f01e88, Func Offset: 0x8
	// Line 97, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 98, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 100, Address: 0x1f01f00, Func Offset: 0x80
	// Line 101, Address: 0x1f01f18, Func Offset: 0x98
	// Line 102, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 103, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 104, Address: 0x1f01f5c, Func Offset: 0xdc
	// Line 105, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 109, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 110, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 113, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 114, Address: 0x1f01fcc, Func Offset: 0x14c
	// Line 115, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 116, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 117, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 118, Address: 0x1f02008, Func Offset: 0x188
	// Line 119, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 120, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 121, Address: 0x1f0203c, Func Offset: 0x1bc
	// Line 122, Address: 0x1f02048, Func Offset: 0x1c8
	// Line 123, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 125, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 126, Address: 0x1f02064, Func Offset: 0x1e4
	// Func End, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 411, Address: 0x1f01e80, Func Offset: 0
	// Line 417, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 418, Address: 0x1f01e9c, Func Offset: 0x1c
	// Line 420, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 422, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 423, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 425, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 427, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 429, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 430, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 431, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 433, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 434, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 435, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 436, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 439, Address: 0x1f02014, Func Offset: 0x194
	// Line 440, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 442, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 444, Address: 0x1f02074, Func Offset: 0x1f4
	// Func End, Address: 0x1f02088, Func Offset: 0x208
	// Line 467, Address: 0x1f01e80, Func Offset: 0
	// Line 473, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 474, Address: 0x1f01e9c, Func Offset: 0x1c
	// Line 476, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 480, Address: 0x1f01edc, Func Offset: 0x5c
	// Line 481, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 483, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 485, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 487, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 488, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 489, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 491, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 492, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 493, Address: 0x1f02004, Func Offset: 0x184
	// Line 494, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 497, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 498, Address: 0x1f0204c, Func Offset: 0x1cc
	// Line 500, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 503, Address: 0x1f02098, Func Offset: 0x218
	// Func End, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 530, Address: 0x1f01e80, Func Offset: 0
	// Line 536, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 537, Address: 0x1f01e9c, Func Offset: 0x1c
	// Line 538, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 540, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 541, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 543, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 545, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 547, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 548, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 549, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 551, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 552, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 553, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 554, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 557, Address: 0x1f02014, Func Offset: 0x194
	// Line 558, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 560, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 563, Address: 0x1f02074, Func Offset: 0x1f4
	// Func End, Address: 0x1f02088, Func Offset: 0x208
	// Line 111, Address: 0x1f01e80, Func Offset: 0
	// Line 168, Address: 0x1f01e88, Func Offset: 0x8
	// Line 170, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 171, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 172, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 174, Address: 0x1f01f00, Func Offset: 0x80
	// Line 175, Address: 0x1f01f10, Func Offset: 0x90
	// Line 176, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 177, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 180, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 181, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 184, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 185, Address: 0x1f01f84, Func Offset: 0x104
	// Line 186, Address: 0x1f01f98, Func Offset: 0x118
	// Line 187, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 188, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 189, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 190, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 191, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 193, Address: 0x1f02020, Func Offset: 0x1a0
	// Line 194, Address: 0x1f02048, Func Offset: 0x1c8
	// Line 198, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 200, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 201, Address: 0x1f02064, Func Offset: 0x1e4
	// Func End, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 91, Address: 0x1f01e80, Func Offset: 0
	// Line 100, Address: 0x1f01e88, Func Offset: 0x8
	// Line 102, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 103, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 104, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 105, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 106, Address: 0x1f01ef0, Func Offset: 0x70
	// Line 110, Address: 0x1f01f04, Func Offset: 0x84
	// Line 111, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 114, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 115, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 116, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 117, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 118, Address: 0x1f01f74, Func Offset: 0xf4
	// Line 119, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 123, Address: 0x1f01f98, Func Offset: 0x118
	// Line 125, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 126, Address: 0x1f01fa8, Func Offset: 0x128
	// Func End, Address: 0x1f01fb8, Func Offset: 0x138
	// Line 109, Address: 0x1f01e80, Func Offset: 0
	// Line 110, Address: 0x1f01e88, Func Offset: 0x8
	// Line 111, Address: 0x1f01e98, Func Offset: 0x18
	// Func End, Address: 0x1f01ea8, Func Offset: 0x28
	// Line 97, Address: 0x1f01e80, Func Offset: 0
	// Line 98, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 99, Address: 0x1f01e98, Func Offset: 0x18
	// Line 103, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 104, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 106, Address: 0x1f01f00, Func Offset: 0x80
	// Line 116, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 122, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 123, Address: 0x1f01f88, Func Offset: 0x108
	// Line 125, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 126, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 128, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 130, Address: 0x1f01fec, Func Offset: 0x16c
	// Line 131, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 134, Address: 0x1f02000, Func Offset: 0x180
	// Line 135, Address: 0x1f02008, Func Offset: 0x188
	// Line 136, Address: 0x1f02014, Func Offset: 0x194
	// Line 137, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 139, Address: 0x1f02068, Func Offset: 0x1e8
	// Line 142, Address: 0x1f020a8, Func Offset: 0x228
	// Line 143, Address: 0x1f020b8, Func Offset: 0x238
	// Line 144, Address: 0x1f020c8, Func Offset: 0x248
	// Line 145, Address: 0x1f020d8, Func Offset: 0x258
	// Func End, Address: 0x1f020ec, Func Offset: 0x26c
	// Line 200, Address: 0x1f01e80, Func Offset: 0
	// Line 201, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 202, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 203, Address: 0x1f01eec, Func Offset: 0x6c
	// Line 204, Address: 0x1f01f18, Func Offset: 0x98
	// Line 205, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 206, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 207, Address: 0x1f01f6c, Func Offset: 0xec
	// Line 208, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 209, Address: 0x1f01fd0, Func Offset: 0x150
	// Line 211, Address: 0x1f01ff0, Func Offset: 0x170
	// Line 212, Address: 0x1f01ff4, Func Offset: 0x174
	// Func End, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 286, Address: 0x1f01e80, Func Offset: 0
	// Line 287, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 288, Address: 0x1f01e98, Func Offset: 0x18
	// Line 292, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 293, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 295, Address: 0x1f01f00, Func Offset: 0x80
	// Line 305, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 311, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 312, Address: 0x1f01f88, Func Offset: 0x108
	// Line 314, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 315, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 317, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 319, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 320, Address: 0x1f01ff0, Func Offset: 0x170
	// Line 323, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 324, Address: 0x1f02004, Func Offset: 0x184
	// Line 325, Address: 0x1f02010, Func Offset: 0x190
	// Line 326, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 328, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 330, Address: 0x1f020a4, Func Offset: 0x224
	// Line 331, Address: 0x1f020b4, Func Offset: 0x234
	// Line 332, Address: 0x1f020c4, Func Offset: 0x244
	// Line 333, Address: 0x1f020d4, Func Offset: 0x254
	// Func End, Address: 0x1f020e8, Func Offset: 0x268
	// Line 106, Address: 0x1f01e80, Func Offset: 0
	// Line 109, Address: 0x1f01e88, Func Offset: 0x8
	// Line 111, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 112, Address: 0x1f01f20, Func Offset: 0xa0
	// Line 113, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 117, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 119, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 120, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 121, Address: 0x1f01f84, Func Offset: 0x104
	// Line 124, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 125, Address: 0x1f01f94, Func Offset: 0x114
	// Line 126, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 127, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 128, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 131, Address: 0x1f01fd0, Func Offset: 0x150
	// Line 132, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 133, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 134, Address: 0x1f01fec, Func Offset: 0x16c
	// Line 135, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 136, Address: 0x1f02004, Func Offset: 0x184
	// Line 137, Address: 0x1f02014, Func Offset: 0x194
	// Line 138, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 139, Address: 0x1f02034, Func Offset: 0x1b4
	// Line 140, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 141, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 142, Address: 0x1f02088, Func Offset: 0x208
	// Line 143, Address: 0x1f02098, Func Offset: 0x218
	// Line 145, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 148, Address: 0x1f020b4, Func Offset: 0x234
	// Line 149, Address: 0x1f020c4, Func Offset: 0x244
	// Line 150, Address: 0x1f020d8, Func Offset: 0x258
	// Line 152, Address: 0x1f020ec, Func Offset: 0x26c
	// Line 155, Address: 0x1f020f4, Func Offset: 0x274
	// Line 156, Address: 0x1f02104, Func Offset: 0x284
	// Line 157, Address: 0x1f02118, Func Offset: 0x298
	// Line 158, Address: 0x1f02120, Func Offset: 0x2a0
	// Line 159, Address: 0x1f02128, Func Offset: 0x2a8
	// Line 160, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 161, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 162, Address: 0x1f02164, Func Offset: 0x2e4
	// Line 164, Address: 0x1f02190, Func Offset: 0x310
	// Line 165, Address: 0x1f021b8, Func Offset: 0x338
	// Line 168, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 169, Address: 0x1f021e4, Func Offset: 0x364
	// Line 170, Address: 0x1f02200, Func Offset: 0x380
	// Line 171, Address: 0x1f0221c, Func Offset: 0x39c
	// Line 172, Address: 0x1f02248, Func Offset: 0x3c8
	// Line 173, Address: 0x1f0226c, Func Offset: 0x3ec
	// Line 174, Address: 0x1f02294, Func Offset: 0x414
	// Line 175, Address: 0x1f022b4, Func Offset: 0x434
	// Line 177, Address: 0x1f022ec, Func Offset: 0x46c
	// Line 180, Address: 0x1f022f4, Func Offset: 0x474
	// Line 181, Address: 0x1f0230c, Func Offset: 0x48c
	// Line 182, Address: 0x1f02320, Func Offset: 0x4a0
	// Line 183, Address: 0x1f02334, Func Offset: 0x4b4
	// Line 184, Address: 0x1f02348, Func Offset: 0x4c8
	// Line 186, Address: 0x1f02374, Func Offset: 0x4f4
	// Line 187, Address: 0x1f0239c, Func Offset: 0x51c
	// Line 188, Address: 0x1f023c8, Func Offset: 0x548
	// Line 189, Address: 0x1f023ec, Func Offset: 0x56c
	// Line 190, Address: 0x1f02414, Func Offset: 0x594
	// Line 191, Address: 0x1f02434, Func Offset: 0x5b4
	// Line 192, Address: 0x1f02468, Func Offset: 0x5e8
	// Line 193, Address: 0x1f0247c, Func Offset: 0x5fc
	// Line 196, Address: 0x1f02484, Func Offset: 0x604
	// Line 197, Address: 0x1f0249c, Func Offset: 0x61c
	// Line 198, Address: 0x1f024a4, Func Offset: 0x624
	// Line 199, Address: 0x1f024ac, Func Offset: 0x62c
	// Line 201, Address: 0x1f024d4, Func Offset: 0x654
	// Line 202, Address: 0x1f024e0, Func Offset: 0x660
	// Line 203, Address: 0x1f024f0, Func Offset: 0x670
	// Line 205, Address: 0x1f02504, Func Offset: 0x684
	// Line 206, Address: 0x1f02508, Func Offset: 0x688
	// Line 207, Address: 0x1f0251c, Func Offset: 0x69c
	// Line 208, Address: 0x1f02528, Func Offset: 0x6a8
	// Line 211, Address: 0x1f02534, Func Offset: 0x6b4
	// Line 212, Address: 0x1f02538, Func Offset: 0x6b8
	// Func End, Address: 0x1f02548, Func Offset: 0x6c8
	// Line 139, Address: 0x1f01e80, Func Offset: 0
	// Line 177, Address: 0x1f01e88, Func Offset: 0x8
	// Line 179, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 180, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 181, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 183, Address: 0x1f01f00, Func Offset: 0x80
	// Line 185, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 187, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 188, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 189, Address: 0x1f01f54, Func Offset: 0xd4
	// Line 190, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 193, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 194, Address: 0x1f01fa8, Func Offset: 0x128
	// Line 197, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 198, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 199, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 200, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 201, Address: 0x1f01fe4, Func Offset: 0x164
	// Line 203, Address: 0x1f02004, Func Offset: 0x184
	// Line 204, Address: 0x1f02018, Func Offset: 0x198
	// Line 205, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 206, Address: 0x1f02040, Func Offset: 0x1c0
	// Line 207, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 209, Address: 0x1f0207c, Func Offset: 0x1fc
	// Line 211, Address: 0x1f020a4, Func Offset: 0x224
	// Line 212, Address: 0x1f020b0, Func Offset: 0x230
	// Line 213, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 215, Address: 0x1f020c8, Func Offset: 0x248
	// Line 216, Address: 0x1f020cc, Func Offset: 0x24c
	// Func End, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 103, Address: 0x1f01e80, Func Offset: 0
	// Line 119, Address: 0x1f01e88, Func Offset: 0x8
	// Line 121, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 122, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 123, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 124, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 128, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 129, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 132, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 133, Address: 0x1f01f3c, Func Offset: 0xbc
	// Line 134, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 135, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 136, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 137, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 139, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 140, Address: 0x1f01f80, Func Offset: 0x100
	// Func End, Address: 0x1f01f90, Func Offset: 0x110
	// Line 73, Address: 0x1f01e80, Func Offset: 0
	// Line 74, Address: 0x1f01e88, Func Offset: 0x8
	// Line 76, Address: 0x1f01eb8, Func Offset: 0x38
	// Func End, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 33, Address: 0x1f01e80, Func Offset: 0
	// Line 46, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 54, Address: 0x1f01eac, Func Offset: 0x2c
	// Line 57, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 61, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 62, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 63, Address: 0x1f01ef0, Func Offset: 0x70
	// Line 64, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 65, Address: 0x1f01f04, Func Offset: 0x84
	// Line 66, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 67, Address: 0x1f01f18, Func Offset: 0x98
	// Line 68, Address: 0x1f01f20, Func Offset: 0xa0
	// Line 70, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 71, Address: 0x1f01f3c, Func Offset: 0xbc
	// Line 73, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 74, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 75, Address: 0x1f01f88, Func Offset: 0x108
	// Line 76, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 78, Address: 0x1f02010, Func Offset: 0x190
	// Line 79, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 80, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 81, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 82, Address: 0x1f02040, Func Offset: 0x1c0
	// Line 83, Address: 0x1f02048, Func Offset: 0x1c8
	// Line 84, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 85, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 87, Address: 0x1f0205c, Func Offset: 0x1dc
	// Line 89, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 93, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 95, Address: 0x1f02090, Func Offset: 0x210
	// Line 96, Address: 0x1f020a4, Func Offset: 0x224
	// Line 97, Address: 0x1f020b8, Func Offset: 0x238
	// Line 100, Address: 0x1f020c0, Func Offset: 0x240
	// Line 101, Address: 0x1f020cc, Func Offset: 0x24c
	// Line 105, Address: 0x1f020e0, Func Offset: 0x260
	// Line 107, Address: 0x1f02110, Func Offset: 0x290
	// Line 108, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 110, Address: 0x1f0212c, Func Offset: 0x2ac
	// Line 111, Address: 0x1f02140, Func Offset: 0x2c0
	// Line 114, Address: 0x1f02148, Func Offset: 0x2c8
	// Line 115, Address: 0x1f0215c, Func Offset: 0x2dc
	// Line 117, Address: 0x1f02164, Func Offset: 0x2e4
	// Line 122, Address: 0x1f02178, Func Offset: 0x2f8
	// Line 123, Address: 0x1f0218c, Func Offset: 0x30c
	// Line 124, Address: 0x1f021a0, Func Offset: 0x320
	// Func End, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 96, Address: 0x1f01e80, Func Offset: 0
	// Line 143, Address: 0x1f01e9c, Func Offset: 0x1c
	// Line 145, Address: 0x1f01ecc, Func Offset: 0x4c
	// Line 146, Address: 0x1f01edc, Func Offset: 0x5c
	// Line 147, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 148, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 149, Address: 0x1f01f04, Func Offset: 0x84
	// Line 153, Address: 0x1f01f18, Func Offset: 0x98
	// Line 154, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 155, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 156, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 157, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 158, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 159, Address: 0x1f01f84, Func Offset: 0x104
	// Line 160, Address: 0x1f01f90, Func Offset: 0x110
	// Line 162, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 163, Address: 0x1f02010, Func Offset: 0x190
	// Line 173, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 174, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 176, Address: 0x1f02040, Func Offset: 0x1c0
	// Line 177, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 178, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 179, Address: 0x1f02098, Func Offset: 0x218
	// Line 180, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 181, Address: 0x1f020d8, Func Offset: 0x258
	// Line 184, Address: 0x1f020e0, Func Offset: 0x260
	// Line 185, Address: 0x1f020f4, Func Offset: 0x274
	// Line 186, Address: 0x1f02100, Func Offset: 0x280
	// Line 187, Address: 0x1f02114, Func Offset: 0x294
	// Line 188, Address: 0x1f0211c, Func Offset: 0x29c
	// Line 189, Address: 0x1f02128, Func Offset: 0x2a8
	// Line 190, Address: 0x1f02134, Func Offset: 0x2b4
	// Line 192, Address: 0x1f0215c, Func Offset: 0x2dc
	// Line 194, Address: 0x1f02184, Func Offset: 0x304
	// Line 200, Address: 0x1f02190, Func Offset: 0x310
	// Line 202, Address: 0x1f0219c, Func Offset: 0x31c
	// Line 203, Address: 0x1f021a0, Func Offset: 0x320
	// Func End, Address: 0x1f021c4, Func Offset: 0x344
	// Line 87, Address: 0x1f01e80, Func Offset: 0
	// Line 134, Address: 0x1f01e98, Func Offset: 0x18
	// Line 136, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 137, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 138, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 139, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 140, Address: 0x1f01f00, Func Offset: 0x80
	// Line 144, Address: 0x1f01f14, Func Offset: 0x94
	// Line 145, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 146, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 147, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 148, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 149, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 150, Address: 0x1f01f88, Func Offset: 0x108
	// Line 152, Address: 0x1f02004, Func Offset: 0x184
	// Line 153, Address: 0x1f02008, Func Offset: 0x188
	// Line 154, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 155, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 157, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 158, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 159, Address: 0x1f02094, Func Offset: 0x214
	// Line 160, Address: 0x1f020b8, Func Offset: 0x238
	// Line 161, Address: 0x1f020d4, Func Offset: 0x254
	// Line 164, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 165, Address: 0x1f020f0, Func Offset: 0x270
	// Line 166, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 167, Address: 0x1f02110, Func Offset: 0x290
	// Line 168, Address: 0x1f02118, Func Offset: 0x298
	// Line 169, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 170, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 172, Address: 0x1f02158, Func Offset: 0x2d8
	// Line 174, Address: 0x1f02180, Func Offset: 0x300
	// Line 176, Address: 0x1f0218c, Func Offset: 0x30c
	// Line 178, Address: 0x1f021a4, Func Offset: 0x324
	// Line 180, Address: 0x1f021b0, Func Offset: 0x330
	// Line 181, Address: 0x1f021b4, Func Offset: 0x334
	// Func End, Address: 0x1f021d4, Func Offset: 0x354
	// Line 96, Address: 0x1f01e80, Func Offset: 0
	// Line 142, Address: 0x1f01e98, Func Offset: 0x18
	// Line 144, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 145, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 146, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 147, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 148, Address: 0x1f01f00, Func Offset: 0x80
	// Line 152, Address: 0x1f01f14, Func Offset: 0x94
	// Line 153, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 154, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 155, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 156, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 157, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 158, Address: 0x1f01f88, Func Offset: 0x108
	// Line 160, Address: 0x1f02004, Func Offset: 0x184
	// Line 161, Address: 0x1f02008, Func Offset: 0x188
	// Line 162, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 163, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 165, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 166, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 167, Address: 0x1f02094, Func Offset: 0x214
	// Line 168, Address: 0x1f020b8, Func Offset: 0x238
	// Line 169, Address: 0x1f020d4, Func Offset: 0x254
	// Line 172, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 173, Address: 0x1f020f0, Func Offset: 0x270
	// Line 174, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 175, Address: 0x1f02110, Func Offset: 0x290
	// Line 176, Address: 0x1f02118, Func Offset: 0x298
	// Line 177, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 178, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 180, Address: 0x1f02158, Func Offset: 0x2d8
	// Line 182, Address: 0x1f02180, Func Offset: 0x300
	// Line 184, Address: 0x1f0218c, Func Offset: 0x30c
	// Line 186, Address: 0x1f021a4, Func Offset: 0x324
	// Line 188, Address: 0x1f021b0, Func Offset: 0x330
	// Line 189, Address: 0x1f021b4, Func Offset: 0x334
	// Func End, Address: 0x1f021d4, Func Offset: 0x354
	// Line 87, Address: 0x1f01e80, Func Offset: 0
	// Line 130, Address: 0x1f01e98, Func Offset: 0x18
	// Line 132, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 133, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 134, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 135, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 136, Address: 0x1f01f00, Func Offset: 0x80
	// Line 140, Address: 0x1f01f14, Func Offset: 0x94
	// Line 141, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 142, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 143, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 144, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 145, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 146, Address: 0x1f01f88, Func Offset: 0x108
	// Line 148, Address: 0x1f02004, Func Offset: 0x184
	// Line 149, Address: 0x1f02008, Func Offset: 0x188
	// Line 150, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 151, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 153, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 154, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 155, Address: 0x1f02094, Func Offset: 0x214
	// Line 156, Address: 0x1f020b8, Func Offset: 0x238
	// Line 157, Address: 0x1f020d4, Func Offset: 0x254
	// Line 160, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 161, Address: 0x1f020f0, Func Offset: 0x270
	// Line 162, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 163, Address: 0x1f02110, Func Offset: 0x290
	// Line 164, Address: 0x1f02118, Func Offset: 0x298
	// Line 165, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 166, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 168, Address: 0x1f02158, Func Offset: 0x2d8
	// Line 170, Address: 0x1f02180, Func Offset: 0x300
	// Line 172, Address: 0x1f0218c, Func Offset: 0x30c
	// Line 174, Address: 0x1f021a4, Func Offset: 0x324
	// Line 176, Address: 0x1f021b0, Func Offset: 0x330
	// Line 177, Address: 0x1f021b4, Func Offset: 0x334
	// Func End, Address: 0x1f021d4, Func Offset: 0x354
	// Line 60, Address: 0x1f01e80, Func Offset: 0
	// Line 89, Address: 0x1f01e88, Func Offset: 0x8
	// Line 91, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 92, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 93, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 94, Address: 0x1f01ef0, Func Offset: 0x70
	// Line 95, Address: 0x1f01f04, Func Offset: 0x84
	// Line 99, Address: 0x1f01f18, Func Offset: 0x98
	// Line 100, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 103, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 104, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 105, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 106, Address: 0x1f01f74, Func Offset: 0xf4
	// Line 107, Address: 0x1f01f80, Func Offset: 0x100
	// Line 109, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 110, Address: 0x1f01f90, Func Offset: 0x110
	// Func End, Address: 0x1f01fa0, Func Offset: 0x120
}

// 
// Start address: 0x1f02110
int EvProgLostMariaAfter()
{
	SubCharacter* scp;
	DramaDemo_PlayInfo info_d;
	DramaDemo_PlayInfo info_c;
	// Line 245, Address: 0x1f02110, Func Offset: 0
	// Line 277, Address: 0x1f0211c, Func Offset: 0xc
	// Line 279, Address: 0x1f0214c, Func Offset: 0x3c
	// Line 280, Address: 0x1f02160, Func Offset: 0x50
	// Line 281, Address: 0x1f02170, Func Offset: 0x60
	// Line 282, Address: 0x1f02180, Func Offset: 0x70
	// Line 283, Address: 0x1f021a0, Func Offset: 0x90
	// Line 284, Address: 0x1f021a8, Func Offset: 0x98
	// Line 287, Address: 0x1f021bc, Func Offset: 0xac
	// Line 289, Address: 0x1f021fc, Func Offset: 0xec
	// Line 290, Address: 0x1f02210, Func Offset: 0x100
	// Line 293, Address: 0x1f02218, Func Offset: 0x108
	// Line 294, Address: 0x1f02220, Func Offset: 0x110
	// Line 295, Address: 0x1f02234, Func Offset: 0x124
	// Line 297, Address: 0x1f02264, Func Offset: 0x154
	// Line 298, Address: 0x1f0226c, Func Offset: 0x15c
	// Line 299, Address: 0x1f0228c, Func Offset: 0x17c
	// Line 300, Address: 0x1f022a0, Func Offset: 0x190
	// Line 301, Address: 0x1f022c0, Func Offset: 0x1b0
	// Line 302, Address: 0x1f022d0, Func Offset: 0x1c0
	// Line 303, Address: 0x1f022dc, Func Offset: 0x1cc
	// Line 304, Address: 0x1f022f4, Func Offset: 0x1e4
	// Line 305, Address: 0x1f02310, Func Offset: 0x200
	// Line 306, Address: 0x1f02320, Func Offset: 0x210
	// Line 308, Address: 0x1f0232c, Func Offset: 0x21c
	// Line 309, Address: 0x1f02330, Func Offset: 0x220
	// Func End, Address: 0x1f02344, Func Offset: 0x234
}

// 
// Start address: 0x1f02350
int EvProgGetRoofKey()
{
	// Line 200, Address: 0x1f02350, Func Offset: 0
	// Line 219, Address: 0x1f02358, Func Offset: 0x8
	// Line 221, Address: 0x1f023b8, Func Offset: 0x68
	// Line 222, Address: 0x1f023cc, Func Offset: 0x7c
	// Line 223, Address: 0x1f023d8, Func Offset: 0x88
	// Line 224, Address: 0x1f023f0, Func Offset: 0xa0
	// Line 225, Address: 0x1f02404, Func Offset: 0xb4
	// Line 228, Address: 0x1f02418, Func Offset: 0xc8
	// Line 229, Address: 0x1f0242c, Func Offset: 0xdc
	// Line 231, Address: 0x1f02458, Func Offset: 0x108
	// Line 232, Address: 0x1f02468, Func Offset: 0x118
	// Line 234, Address: 0x1f0247c, Func Offset: 0x12c
	// Line 237, Address: 0x1f02484, Func Offset: 0x134
	// Line 238, Address: 0x1f0249c, Func Offset: 0x14c
	// Line 239, Address: 0x1f024b0, Func Offset: 0x160
	// Line 240, Address: 0x1f024bc, Func Offset: 0x16c
	// Line 241, Address: 0x1f024d0, Func Offset: 0x180
	// Line 244, Address: 0x1f024e4, Func Offset: 0x194
	// Line 245, Address: 0x1f024f4, Func Offset: 0x1a4
	// Line 246, Address: 0x1f02524, Func Offset: 0x1d4
	// Line 247, Address: 0x1f02538, Func Offset: 0x1e8
	// Line 248, Address: 0x1f0255c, Func Offset: 0x20c
	// Line 249, Address: 0x1f02560, Func Offset: 0x210
	// Line 250, Address: 0x1f0257c, Func Offset: 0x22c
	// Line 251, Address: 0x1f02590, Func Offset: 0x240
	// Line 253, Address: 0x1f025a4, Func Offset: 0x254
	// Line 256, Address: 0x1f025ac, Func Offset: 0x25c
	// Line 257, Address: 0x1f025b8, Func Offset: 0x268
	// Line 258, Address: 0x1f025c4, Func Offset: 0x274
	// Line 259, Address: 0x1f025d0, Func Offset: 0x280
	// Line 260, Address: 0x1f025e4, Func Offset: 0x294
	// Line 261, Address: 0x1f025ec, Func Offset: 0x29c
	// Line 262, Address: 0x1f025f8, Func Offset: 0x2a8
	// Line 263, Address: 0x1f02608, Func Offset: 0x2b8
	// Line 267, Address: 0x1f0261c, Func Offset: 0x2cc
	// Line 268, Address: 0x1f02624, Func Offset: 0x2d4
	// Line 269, Address: 0x1f02638, Func Offset: 0x2e8
	// Line 270, Address: 0x1f02640, Func Offset: 0x2f0
	// Line 271, Address: 0x1f02654, Func Offset: 0x304
	// Line 272, Address: 0x1f02660, Func Offset: 0x310
	// Line 273, Address: 0x1f02670, Func Offset: 0x320
	// Line 274, Address: 0x1f02680, Func Offset: 0x330
	// Line 276, Address: 0x1f02694, Func Offset: 0x344
	// Line 279, Address: 0x1f0269c, Func Offset: 0x34c
	// Line 280, Address: 0x1f026b0, Func Offset: 0x360
	// Line 282, Address: 0x1f026bc, Func Offset: 0x36c
	// Line 283, Address: 0x1f026c0, Func Offset: 0x370
	// Func End, Address: 0x1f026d0, Func Offset: 0x380
	// Line 315, Address: 0x1f02350, Func Offset: 0
	// Line 316, Address: 0x1f02358, Func Offset: 0x8
	// Line 317, Address: 0x1f02368, Func Offset: 0x18
	// Func End, Address: 0x1f02378, Func Offset: 0x28
	// Line 287, Address: 0x1f02350, Func Offset: 0
	// Line 289, Address: 0x1f02368, Func Offset: 0x18
	// Func End, Address: 0x1f02370, Func Offset: 0x20
	// Line 272, Address: 0x1f02350, Func Offset: 0
	// Func End, Address: 0x1f02358, Func Offset: 0x8
}

// 
// Start address: 0x1f02380
int EvProgGuruguruNumber()
{
	// Line 323, Address: 0x1f02380, Func Offset: 0
	// Line 324, Address: 0x1f02388, Func Offset: 0x8
	// Line 326, Address: 0x1f023f4, Func Offset: 0x74
	// Line 327, Address: 0x1f02408, Func Offset: 0x88
	// Line 328, Address: 0x1f02438, Func Offset: 0xb8
	// Line 329, Address: 0x1f0244c, Func Offset: 0xcc
	// Line 332, Address: 0x1f02454, Func Offset: 0xd4
	// Line 333, Address: 0x1f02468, Func Offset: 0xe8
	// Line 334, Address: 0x1f0247c, Func Offset: 0xfc
	// Line 337, Address: 0x1f02484, Func Offset: 0x104
	// Line 340, Address: 0x1f024a8, Func Offset: 0x128
	// Line 341, Address: 0x1f024b8, Func Offset: 0x138
	// Line 342, Address: 0x1f024cc, Func Offset: 0x14c
	// Line 345, Address: 0x1f024d4, Func Offset: 0x154
	// Line 346, Address: 0x1f024dc, Func Offset: 0x15c
	// Line 347, Address: 0x1f024e4, Func Offset: 0x164
	// Line 348, Address: 0x1f024ec, Func Offset: 0x16c
	// Line 349, Address: 0x1f024f4, Func Offset: 0x174
	// Line 350, Address: 0x1f02518, Func Offset: 0x198
	// Line 353, Address: 0x1f02520, Func Offset: 0x1a0
	// Line 354, Address: 0x1f02528, Func Offset: 0x1a8
	// Line 355, Address: 0x1f02530, Func Offset: 0x1b0
	// Line 356, Address: 0x1f02538, Func Offset: 0x1b8
	// Line 357, Address: 0x1f02540, Func Offset: 0x1c0
	// Line 358, Address: 0x1f02568, Func Offset: 0x1e8
	// Line 359, Address: 0x1f0257c, Func Offset: 0x1fc
	// Line 362, Address: 0x1f02584, Func Offset: 0x204
	// Line 363, Address: 0x1f0258c, Func Offset: 0x20c
	// Line 364, Address: 0x1f02594, Func Offset: 0x214
	// Line 365, Address: 0x1f0259c, Func Offset: 0x21c
	// Line 366, Address: 0x1f025a4, Func Offset: 0x224
	// Line 367, Address: 0x1f025ac, Func Offset: 0x22c
	// Line 368, Address: 0x1f025c0, Func Offset: 0x240
	// Line 369, Address: 0x1f025d0, Func Offset: 0x250
	// Line 370, Address: 0x1f025e4, Func Offset: 0x264
	// Line 373, Address: 0x1f025ec, Func Offset: 0x26c
	// Line 374, Address: 0x1f025f4, Func Offset: 0x274
	// Line 375, Address: 0x1f025fc, Func Offset: 0x27c
	// Line 376, Address: 0x1f02604, Func Offset: 0x284
	// Line 377, Address: 0x1f0260c, Func Offset: 0x28c
	// Line 378, Address: 0x1f02614, Func Offset: 0x294
	// Line 379, Address: 0x1f02638, Func Offset: 0x2b8
	// Line 382, Address: 0x1f02640, Func Offset: 0x2c0
	// Line 383, Address: 0x1f02650, Func Offset: 0x2d0
	// Line 384, Address: 0x1f02664, Func Offset: 0x2e4
	// Line 386, Address: 0x1f02670, Func Offset: 0x2f0
	// Line 387, Address: 0x1f02674, Func Offset: 0x2f4
	// Func End, Address: 0x1f02684, Func Offset: 0x304
	// Line 262, Address: 0x1f02380, Func Offset: 0
	// Line 304, Address: 0x1f02388, Func Offset: 0x8
	// Line 306, Address: 0x1f023b8, Func Offset: 0x38
	// Line 309, Address: 0x1f023d0, Func Offset: 0x50
	// Line 310, Address: 0x1f023e4, Func Offset: 0x64
	// Line 311, Address: 0x1f023f4, Func Offset: 0x74
	// Line 312, Address: 0x1f02400, Func Offset: 0x80
	// Line 313, Address: 0x1f02414, Func Offset: 0x94
	// Line 317, Address: 0x1f02428, Func Offset: 0xa8
	// Line 318, Address: 0x1f02454, Func Offset: 0xd4
	// Line 321, Address: 0x1f0245c, Func Offset: 0xdc
	// Line 322, Address: 0x1f02468, Func Offset: 0xe8
	// Line 323, Address: 0x1f02474, Func Offset: 0xf4
	// Line 324, Address: 0x1f02480, Func Offset: 0x100
	// Line 325, Address: 0x1f0248c, Func Offset: 0x10c
	// Line 327, Address: 0x1f02498, Func Offset: 0x118
	// Line 328, Address: 0x1f0249c, Func Offset: 0x11c
	// Func End, Address: 0x1f024ac, Func Offset: 0x12c
}

// 
// Start address: 0x1f02690
void EvProgSubGuruguruDraw()
{
	int i;
	int no;
	PicDraw_Data pic;
	short tex[4][4][9];
	short pos[2][4][9];
	// Line 392, Address: 0x1f02690, Func Offset: 0
	// Line 426, Address: 0x1f026a0, Func Offset: 0x10
	// Line 428, Address: 0x1f026bc, Func Offset: 0x2c
	// Line 430, Address: 0x1f026cc, Func Offset: 0x3c
	// Line 431, Address: 0x1f026f4, Func Offset: 0x64
	// Line 432, Address: 0x1f026fc, Func Offset: 0x6c
	// Line 433, Address: 0x1f02728, Func Offset: 0x98
	// Line 434, Address: 0x1f02734, Func Offset: 0xa4
	// Line 438, Address: 0x1f02744, Func Offset: 0xb4
	// Line 441, Address: 0x1f02800, Func Offset: 0x170
	// Line 442, Address: 0x1f02834, Func Offset: 0x1a4
	// Line 443, Address: 0x1f02840, Func Offset: 0x1b0
	// Line 444, Address: 0x1f02854, Func Offset: 0x1c4
	// Func End, Address: 0x1f0286c, Func Offset: 0x1dc
	// Line 264, Address: 0x1f02690, Func Offset: 0
	// Line 274, Address: 0x1f0269c, Func Offset: 0xc
	// Line 277, Address: 0x1f026f0, Func Offset: 0x60
	// Line 278, Address: 0x1f02708, Func Offset: 0x78
	// Line 280, Address: 0x1f02738, Func Offset: 0xa8
	// Line 281, Address: 0x1f02750, Func Offset: 0xc0
	// Line 282, Address: 0x1f02764, Func Offset: 0xd4
	// Line 283, Address: 0x1f02770, Func Offset: 0xe0
	// Line 287, Address: 0x1f02784, Func Offset: 0xf4
	// Line 288, Address: 0x1f02798, Func Offset: 0x108
	// Line 289, Address: 0x1f027c4, Func Offset: 0x134
	// Line 290, Address: 0x1f027d8, Func Offset: 0x148
	// Line 293, Address: 0x1f027e0, Func Offset: 0x150
	// Line 294, Address: 0x1f027f0, Func Offset: 0x160
	// Line 295, Address: 0x1f02810, Func Offset: 0x180
	// Line 296, Address: 0x1f02824, Func Offset: 0x194
	// Line 297, Address: 0x1f0282c, Func Offset: 0x19c
	// Line 299, Address: 0x1f02840, Func Offset: 0x1b0
	// Line 300, Address: 0x1f02854, Func Offset: 0x1c4
	// Line 301, Address: 0x1f02884, Func Offset: 0x1f4
	// Line 302, Address: 0x1f02898, Func Offset: 0x208
	// Line 303, Address: 0x1f028b4, Func Offset: 0x224
	// Line 306, Address: 0x1f028bc, Func Offset: 0x22c
	// Line 307, Address: 0x1f028cc, Func Offset: 0x23c
	// Line 308, Address: 0x1f028ec, Func Offset: 0x25c
	// Line 309, Address: 0x1f02900, Func Offset: 0x270
	// Line 310, Address: 0x1f02908, Func Offset: 0x278
	// Line 311, Address: 0x1f02914, Func Offset: 0x284
	// Line 312, Address: 0x1f0292c, Func Offset: 0x29c
	// Line 314, Address: 0x1f02940, Func Offset: 0x2b0
	// Line 315, Address: 0x1f02954, Func Offset: 0x2c4
	// Line 317, Address: 0x1f02960, Func Offset: 0x2d0
	// Line 318, Address: 0x1f02964, Func Offset: 0x2d4
	// Func End, Address: 0x1f02978, Func Offset: 0x2e8
	// Line 286, Address: 0x1f02690, Func Offset: 0
	// Line 288, Address: 0x1f02698, Func Offset: 0x8
	// Line 291, Address: 0x1f026c8, Func Offset: 0x38
	// Func End, Address: 0x1f026d8, Func Offset: 0x48
}

// 
// Start address: 0x1f02870
int EvProgOnlyNeedle()
{
	// Line 449, Address: 0x1f02870, Func Offset: 0
	// Line 450, Address: 0x1f02878, Func Offset: 0x8
	// Line 452, Address: 0x1f028c0, Func Offset: 0x50
	// Line 453, Address: 0x1f028d0, Func Offset: 0x60
	// Line 454, Address: 0x1f028dc, Func Offset: 0x6c
	// Line 458, Address: 0x1f028f0, Func Offset: 0x80
	// Line 459, Address: 0x1f02900, Func Offset: 0x90
	// Line 460, Address: 0x1f02910, Func Offset: 0xa0
	// Line 464, Address: 0x1f02924, Func Offset: 0xb4
	// Line 465, Address: 0x1f02938, Func Offset: 0xc8
	// Line 466, Address: 0x1f02948, Func Offset: 0xd8
	// Line 470, Address: 0x1f0295c, Func Offset: 0xec
	// Line 471, Address: 0x1f02974, Func Offset: 0x104
	// Line 475, Address: 0x1f02988, Func Offset: 0x118
	// Line 476, Address: 0x1f0299c, Func Offset: 0x12c
	// Line 478, Address: 0x1f029a8, Func Offset: 0x138
	// Line 479, Address: 0x1f029ac, Func Offset: 0x13c
	// Func End, Address: 0x1f029bc, Func Offset: 0x14c
}

// 
// Start address: 0x1f029c0
int EvProgOnlyHair()
{
	// Line 787, Address: 0x1f029c0, Func Offset: 0
	// Line 789, Address: 0x1f029c8, Func Offset: 0x8
	// Line 795, Address: 0x1f02a10, Func Offset: 0x50
	// Func End, Address: 0x1f02a20, Func Offset: 0x60
	// Line 484, Address: 0x1f029c0, Func Offset: 0
	// Line 485, Address: 0x1f029c8, Func Offset: 0x8
	// Line 487, Address: 0x1f02a10, Func Offset: 0x50
	// Line 488, Address: 0x1f02a20, Func Offset: 0x60
	// Line 489, Address: 0x1f02a2c, Func Offset: 0x6c
	// Line 493, Address: 0x1f02a40, Func Offset: 0x80
	// Line 494, Address: 0x1f02a50, Func Offset: 0x90
	// Line 495, Address: 0x1f02a60, Func Offset: 0xa0
	// Line 499, Address: 0x1f02a74, Func Offset: 0xb4
	// Line 500, Address: 0x1f02a88, Func Offset: 0xc8
	// Line 501, Address: 0x1f02a98, Func Offset: 0xd8
	// Line 505, Address: 0x1f02aac, Func Offset: 0xec
	// Line 506, Address: 0x1f02ac4, Func Offset: 0x104
	// Line 510, Address: 0x1f02ad8, Func Offset: 0x118
	// Line 511, Address: 0x1f02aec, Func Offset: 0x12c
	// Line 513, Address: 0x1f02af8, Func Offset: 0x138
	// Line 514, Address: 0x1f02afc, Func Offset: 0x13c
	// Func End, Address: 0x1f02b0c, Func Offset: 0x14c
}

// 
// Start address: 0x1f02b10
int EvProgInShowerDrain()
{
	int msg;
	// Line 520, Address: 0x1f02b10, Func Offset: 0
	// Line 523, Address: 0x1f02b1c, Func Offset: 0xc
	// Line 525, Address: 0x1f02b88, Func Offset: 0x78
	// Line 526, Address: 0x1f02b98, Func Offset: 0x88
	// Line 527, Address: 0x1f02ba4, Func Offset: 0x94
	// Line 531, Address: 0x1f02bb8, Func Offset: 0xa8
	// Line 532, Address: 0x1f02bc8, Func Offset: 0xb8
	// Line 533, Address: 0x1f02bd8, Func Offset: 0xc8
	// Line 537, Address: 0x1f02bec, Func Offset: 0xdc
	// Line 540, Address: 0x1f02c10, Func Offset: 0x100
	// Line 541, Address: 0x1f02c20, Func Offset: 0x110
	// Line 545, Address: 0x1f02c34, Func Offset: 0x124
	// Line 546, Address: 0x1f02c3c, Func Offset: 0x12c
	// Line 547, Address: 0x1f02c44, Func Offset: 0x134
	// Line 548, Address: 0x1f02c5c, Func Offset: 0x14c
	// Line 549, Address: 0x1f02c78, Func Offset: 0x168
	// Line 550, Address: 0x1f02c80, Func Offset: 0x170
	// Line 551, Address: 0x1f02ca4, Func Offset: 0x194
	// Line 554, Address: 0x1f02cac, Func Offset: 0x19c
	// Line 555, Address: 0x1f02cb4, Func Offset: 0x1a4
	// Line 556, Address: 0x1f02cbc, Func Offset: 0x1ac
	// Line 557, Address: 0x1f02cd4, Func Offset: 0x1c4
	// Line 558, Address: 0x1f02cf0, Func Offset: 0x1e0
	// Line 559, Address: 0x1f02cf4, Func Offset: 0x1e4
	// Line 560, Address: 0x1f02d00, Func Offset: 0x1f0
	// Line 561, Address: 0x1f02d08, Func Offset: 0x1f8
	// Line 562, Address: 0x1f02d1c, Func Offset: 0x20c
	// Line 563, Address: 0x1f02d2c, Func Offset: 0x21c
	// Line 564, Address: 0x1f02d40, Func Offset: 0x230
	// Line 567, Address: 0x1f02d48, Func Offset: 0x238
	// Line 568, Address: 0x1f02d58, Func Offset: 0x248
	// Line 569, Address: 0x1f02d68, Func Offset: 0x258
	// Line 570, Address: 0x1f02d78, Func Offset: 0x268
	// Line 574, Address: 0x1f02d8c, Func Offset: 0x27c
	// Line 575, Address: 0x1f02da4, Func Offset: 0x294
	// Line 579, Address: 0x1f02db8, Func Offset: 0x2a8
	// Line 580, Address: 0x1f02dcc, Func Offset: 0x2bc
	// Line 582, Address: 0x1f02dd8, Func Offset: 0x2c8
	// Line 583, Address: 0x1f02ddc, Func Offset: 0x2cc
	// Func End, Address: 0x1f02df0, Func Offset: 0x2e0
}

// 
// Start address: 0x1f02df0
int EvProgFishKey()
{
	DramaDemo_PlayInfo tsuri;
	CharaData_DemoList chara_data[4];
	// Line 589, Address: 0x1f02df0, Func Offset: 0
	// Line 609, Address: 0x1f02df8, Func Offset: 0x8
	// Line 611, Address: 0x1f02e34, Func Offset: 0x44
	// Line 612, Address: 0x1f02e4c, Func Offset: 0x5c
	// Line 613, Address: 0x1f02e60, Func Offset: 0x70
	// Line 614, Address: 0x1f02e6c, Func Offset: 0x7c
	// Line 615, Address: 0x1f02e80, Func Offset: 0x90
	// Line 619, Address: 0x1f02e94, Func Offset: 0xa4
	// Line 620, Address: 0x1f02ec0, Func Offset: 0xd0
	// Line 623, Address: 0x1f02ec8, Func Offset: 0xd8
	// Line 624, Address: 0x1f02ed8, Func Offset: 0xe8
	// Line 625, Address: 0x1f02ef0, Func Offset: 0x100
	// Line 626, Address: 0x1f02f04, Func Offset: 0x114
	// Line 629, Address: 0x1f02f0c, Func Offset: 0x11c
	// Line 630, Address: 0x1f02f18, Func Offset: 0x128
	// Line 631, Address: 0x1f02f24, Func Offset: 0x134
	// Line 632, Address: 0x1f02f30, Func Offset: 0x140
	// Line 633, Address: 0x1f02f3c, Func Offset: 0x14c
	// Line 634, Address: 0x1f02f50, Func Offset: 0x160
	// Line 635, Address: 0x1f02f58, Func Offset: 0x168
	// Line 636, Address: 0x1f02f64, Func Offset: 0x174
	// Line 638, Address: 0x1f02f70, Func Offset: 0x180
	// Line 639, Address: 0x1f02f74, Func Offset: 0x184
	// Func End, Address: 0x1f02f84, Func Offset: 0x194
}

// 
// Start address: 0x1f02f90
int EvProgBoxWithKey()
{
	int i;
	int work;
	// Line 911, Address: 0x1f02f90, Func Offset: 0
	// Line 913, Address: 0x1f02fa8, Func Offset: 0x18
	// Func End, Address: 0x1f02fb0, Func Offset: 0x20
	// Line 651, Address: 0x1f02f90, Func Offset: 0
	// Line 655, Address: 0x1f02f9c, Func Offset: 0xc
	// Line 657, Address: 0x1f03050, Func Offset: 0xc0
	// Line 658, Address: 0x1f03064, Func Offset: 0xd4
	// Line 659, Address: 0x1f03094, Func Offset: 0x104
	// Line 660, Address: 0x1f030bc, Func Offset: 0x12c
	// Line 661, Address: 0x1f030c8, Func Offset: 0x138
	// Line 662, Address: 0x1f030f0, Func Offset: 0x160
	// Line 663, Address: 0x1f030fc, Func Offset: 0x16c
	// Line 664, Address: 0x1f03124, Func Offset: 0x194
	// Line 665, Address: 0x1f03130, Func Offset: 0x1a0
	// Line 666, Address: 0x1f03140, Func Offset: 0x1b0
	// Line 670, Address: 0x1f03154, Func Offset: 0x1c4
	// Line 673, Address: 0x1f03178, Func Offset: 0x1e8
	// Line 674, Address: 0x1f03188, Func Offset: 0x1f8
	// Line 675, Address: 0x1f0319c, Func Offset: 0x20c
	// Line 678, Address: 0x1f031a4, Func Offset: 0x214
	// Line 679, Address: 0x1f031ac, Func Offset: 0x21c
	// Line 680, Address: 0x1f031b4, Func Offset: 0x224
	// Line 681, Address: 0x1f031bc, Func Offset: 0x22c
	// Line 682, Address: 0x1f031c4, Func Offset: 0x234
	// Line 683, Address: 0x1f031d4, Func Offset: 0x244
	// Line 684, Address: 0x1f031fc, Func Offset: 0x26c
	// Line 685, Address: 0x1f03218, Func Offset: 0x288
	// Line 686, Address: 0x1f0322c, Func Offset: 0x29c
	// Line 689, Address: 0x1f03234, Func Offset: 0x2a4
	// Line 690, Address: 0x1f0323c, Func Offset: 0x2ac
	// Line 691, Address: 0x1f03244, Func Offset: 0x2b4
	// Line 692, Address: 0x1f0324c, Func Offset: 0x2bc
	// Line 693, Address: 0x1f03254, Func Offset: 0x2c4
	// Line 694, Address: 0x1f0325c, Func Offset: 0x2cc
	// Line 695, Address: 0x1f03274, Func Offset: 0x2e4
	// Line 698, Address: 0x1f0329c, Func Offset: 0x30c
	// Line 699, Address: 0x1f032b0, Func Offset: 0x320
	// Line 700, Address: 0x1f032c8, Func Offset: 0x338
	// Line 701, Address: 0x1f032e0, Func Offset: 0x350
	// Line 702, Address: 0x1f032f4, Func Offset: 0x364
	// Line 704, Address: 0x1f032fc, Func Offset: 0x36c
	// Line 707, Address: 0x1f0332c, Func Offset: 0x39c
	// Line 708, Address: 0x1f03348, Func Offset: 0x3b8
	// Line 709, Address: 0x1f0335c, Func Offset: 0x3cc
	// Line 710, Address: 0x1f03364, Func Offset: 0x3d4
	// Line 713, Address: 0x1f0338c, Func Offset: 0x3fc
	// Line 714, Address: 0x1f033a0, Func Offset: 0x410
	// Line 715, Address: 0x1f033b8, Func Offset: 0x428
	// Line 716, Address: 0x1f033d0, Func Offset: 0x440
	// Line 717, Address: 0x1f033e4, Func Offset: 0x454
	// Line 719, Address: 0x1f033f8, Func Offset: 0x468
	// Line 722, Address: 0x1f03400, Func Offset: 0x470
	// Line 723, Address: 0x1f03408, Func Offset: 0x478
	// Line 724, Address: 0x1f03410, Func Offset: 0x480
	// Line 725, Address: 0x1f03418, Func Offset: 0x488
	// Line 726, Address: 0x1f03424, Func Offset: 0x494
	// Line 727, Address: 0x1f0342c, Func Offset: 0x49c
	// Line 728, Address: 0x1f03434, Func Offset: 0x4a4
	// Line 733, Address: 0x1f034c0, Func Offset: 0x530
	// Line 734, Address: 0x1f034cc, Func Offset: 0x53c
	// Line 735, Address: 0x1f034e4, Func Offset: 0x554
	// Line 736, Address: 0x1f034f8, Func Offset: 0x568
	// Line 742, Address: 0x1f03588, Func Offset: 0x5f8
	// Line 743, Address: 0x1f03594, Func Offset: 0x604
	// Line 744, Address: 0x1f035ac, Func Offset: 0x61c
	// Line 745, Address: 0x1f035c0, Func Offset: 0x630
	// Line 746, Address: 0x1f035e4, Func Offset: 0x654
	// Line 748, Address: 0x1f035f8, Func Offset: 0x668
	// Line 751, Address: 0x1f03600, Func Offset: 0x670
	// Line 752, Address: 0x1f0361c, Func Offset: 0x68c
	// Line 753, Address: 0x1f03634, Func Offset: 0x6a4
	// Line 754, Address: 0x1f0363c, Func Offset: 0x6ac
	// Line 757, Address: 0x1f03674, Func Offset: 0x6e4
	// Line 758, Address: 0x1f03690, Func Offset: 0x700
	// Line 760, Address: 0x1f036a8, Func Offset: 0x718
	// Line 761, Address: 0x1f036b0, Func Offset: 0x720
	// Line 762, Address: 0x1f036b8, Func Offset: 0x728
	// Line 763, Address: 0x1f036c0, Func Offset: 0x730
	// Line 764, Address: 0x1f036c8, Func Offset: 0x738
	// Line 767, Address: 0x1f036d0, Func Offset: 0x740
	// Line 768, Address: 0x1f036ec, Func Offset: 0x75c
	// Line 769, Address: 0x1f03704, Func Offset: 0x774
	// Line 770, Address: 0x1f0370c, Func Offset: 0x77c
	// Line 773, Address: 0x1f03744, Func Offset: 0x7b4
	// Line 774, Address: 0x1f03760, Func Offset: 0x7d0
	// Line 776, Address: 0x1f03778, Func Offset: 0x7e8
	// Line 777, Address: 0x1f03780, Func Offset: 0x7f0
	// Line 778, Address: 0x1f03788, Func Offset: 0x7f8
	// Line 779, Address: 0x1f03790, Func Offset: 0x800
	// Line 780, Address: 0x1f03798, Func Offset: 0x808
	// Line 783, Address: 0x1f037a0, Func Offset: 0x810
	// Line 784, Address: 0x1f037bc, Func Offset: 0x82c
	// Line 785, Address: 0x1f037d4, Func Offset: 0x844
	// Line 786, Address: 0x1f037dc, Func Offset: 0x84c
	// Line 789, Address: 0x1f03814, Func Offset: 0x884
	// Line 790, Address: 0x1f03830, Func Offset: 0x8a0
	// Line 792, Address: 0x1f03848, Func Offset: 0x8b8
	// Line 793, Address: 0x1f03850, Func Offset: 0x8c0
	// Line 794, Address: 0x1f03858, Func Offset: 0x8c8
	// Line 795, Address: 0x1f03860, Func Offset: 0x8d0
	// Line 796, Address: 0x1f03868, Func Offset: 0x8d8
	// Line 799, Address: 0x1f03870, Func Offset: 0x8e0
	// Line 800, Address: 0x1f03878, Func Offset: 0x8e8
	// Line 801, Address: 0x1f03880, Func Offset: 0x8f0
	// Line 802, Address: 0x1f03888, Func Offset: 0x8f8
	// Line 804, Address: 0x1f038ac, Func Offset: 0x91c
	// Line 805, Address: 0x1f038b4, Func Offset: 0x924
	// Line 806, Address: 0x1f038cc, Func Offset: 0x93c
	// Line 807, Address: 0x1f038dc, Func Offset: 0x94c
	// Line 809, Address: 0x1f038f0, Func Offset: 0x960
	// Line 812, Address: 0x1f038f8, Func Offset: 0x968
	// Line 813, Address: 0x1f03900, Func Offset: 0x970
	// Line 814, Address: 0x1f03908, Func Offset: 0x978
	// Line 815, Address: 0x1f03914, Func Offset: 0x984
	// Line 816, Address: 0x1f0391c, Func Offset: 0x98c
	// Line 817, Address: 0x1f03954, Func Offset: 0x9c4
	// Line 818, Address: 0x1f03968, Func Offset: 0x9d8
	// Line 821, Address: 0x1f03970, Func Offset: 0x9e0
	// Line 822, Address: 0x1f03978, Func Offset: 0x9e8
	// Line 823, Address: 0x1f03980, Func Offset: 0x9f0
	// Line 824, Address: 0x1f0398c, Func Offset: 0x9fc
	// Line 825, Address: 0x1f03994, Func Offset: 0xa04
	// Line 826, Address: 0x1f0399c, Func Offset: 0xa0c
	// Line 827, Address: 0x1f039c4, Func Offset: 0xa34
	// Line 830, Address: 0x1f039cc, Func Offset: 0xa3c
	// Line 831, Address: 0x1f039e8, Func Offset: 0xa58
	// Line 832, Address: 0x1f03a04, Func Offset: 0xa74
	// Line 833, Address: 0x1f03a0c, Func Offset: 0xa7c
	// Line 835, Address: 0x1f03a20, Func Offset: 0xa90
	// Line 836, Address: 0x1f03a28, Func Offset: 0xa98
	// Line 837, Address: 0x1f03a30, Func Offset: 0xaa0
	// Line 839, Address: 0x1f03a6c, Func Offset: 0xadc
	// Line 840, Address: 0x1f03a74, Func Offset: 0xae4
	// Line 843, Address: 0x1f03a7c, Func Offset: 0xaec
	// Line 844, Address: 0x1f03a84, Func Offset: 0xaf4
	// Line 845, Address: 0x1f03a8c, Func Offset: 0xafc
	// Line 846, Address: 0x1f03a94, Func Offset: 0xb04
	// Line 847, Address: 0x1f03a9c, Func Offset: 0xb0c
	// Line 848, Address: 0x1f03ab4, Func Offset: 0xb24
	// Line 849, Address: 0x1f03ac8, Func Offset: 0xb38
	// Line 851, Address: 0x1f03adc, Func Offset: 0xb4c
	// Line 854, Address: 0x1f03ae4, Func Offset: 0xb54
	// Line 859, Address: 0x1f03b5c, Func Offset: 0xbcc
	// Line 860, Address: 0x1f03b68, Func Offset: 0xbd8
	// Line 861, Address: 0x1f03b94, Func Offset: 0xc04
	// Line 862, Address: 0x1f03bbc, Func Offset: 0xc2c
	// Line 864, Address: 0x1f03bd4, Func Offset: 0xc44
	// Line 865, Address: 0x1f03be8, Func Offset: 0xc58
	// Line 867, Address: 0x1f03bf4, Func Offset: 0xc64
	// Line 868, Address: 0x1f03bf8, Func Offset: 0xc68
	// Func End, Address: 0x1f03c0c, Func Offset: 0xc7c
}

// 
// Start address: 0x1f03c10
void EvProgSubKeyLayer()
{
	int i;
	int no;
	PicDraw_Data pic;
	short chn_tex[4][10];
	short chn_pos[3][10];
	unsigned char cyl_tex[4][9];
	short cyl_pos[2][4][9];
	// Line 873, Address: 0x1f03c10, Func Offset: 0
	// Line 910, Address: 0x1f03c1c, Func Offset: 0xc
	// Line 912, Address: 0x1f03c38, Func Offset: 0x28
	// Line 914, Address: 0x1f03c48, Func Offset: 0x38
	// Line 916, Address: 0x1f03c6c, Func Offset: 0x5c
	// Line 919, Address: 0x1f03c8c, Func Offset: 0x7c
	// Line 920, Address: 0x1f03cb8, Func Offset: 0xa8
	// Line 921, Address: 0x1f03cdc, Func Offset: 0xcc
	// Line 923, Address: 0x1f03ce4, Func Offset: 0xd4
	// Line 924, Address: 0x1f03d2c, Func Offset: 0x11c
	// Line 927, Address: 0x1f03d38, Func Offset: 0x128
	// Line 928, Address: 0x1f03d44, Func Offset: 0x134
	// Line 934, Address: 0x1f03d54, Func Offset: 0x144
	// Line 937, Address: 0x1f03e24, Func Offset: 0x214
	// Line 938, Address: 0x1f03e98, Func Offset: 0x288
	// Line 940, Address: 0x1f03ea0, Func Offset: 0x290
	// Line 941, Address: 0x1f03eec, Func Offset: 0x2dc
	// Line 942, Address: 0x1f03ef8, Func Offset: 0x2e8
	// Line 943, Address: 0x1f03f0c, Func Offset: 0x2fc
	// Line 945, Address: 0x1f03f10, Func Offset: 0x300
	// Line 948, Address: 0x1f03f30, Func Offset: 0x320
	// Line 949, Address: 0x1f03f5c, Func Offset: 0x34c
	// Line 950, Address: 0x1f03f84, Func Offset: 0x374
	// Line 952, Address: 0x1f03f8c, Func Offset: 0x37c
	// Line 953, Address: 0x1f03fd4, Func Offset: 0x3c4
	// Line 956, Address: 0x1f03fe0, Func Offset: 0x3d0
	// Line 958, Address: 0x1f04000, Func Offset: 0x3f0
	// Line 962, Address: 0x1f0400c, Func Offset: 0x3fc
	// Line 965, Address: 0x1f040d0, Func Offset: 0x4c0
	// Line 966, Address: 0x1f04144, Func Offset: 0x534
	// Line 968, Address: 0x1f04164, Func Offset: 0x554
	// Line 969, Address: 0x1f041b0, Func Offset: 0x5a0
	// Line 970, Address: 0x1f041bc, Func Offset: 0x5ac
	// Line 971, Address: 0x1f041cc, Func Offset: 0x5bc
	// Line 972, Address: 0x1f041d0, Func Offset: 0x5c0
	// Func End, Address: 0x1f041e4, Func Offset: 0x5d4
}

// 
// Start address: 0x1f041f0
void EvProgSubKeyCursor()
{
	int j;
	int i;
	float work_y;
	float work_x;
	float cyl_touch[2][3][5];
	short btn_center_s[2][9];
	unsigned char cyl_touch_c[2][2][5];
	// Line 983, Address: 0x1f041f0, Func Offset: 0
	// Line 1000, Address: 0x1f041fc, Func Offset: 0xc
	// Line 1002, Address: 0x1f04218, Func Offset: 0x28
	// Line 1003, Address: 0x1f04224, Func Offset: 0x34
	// Line 1004, Address: 0x1f0425c, Func Offset: 0x6c
	// Line 1006, Address: 0x1f04298, Func Offset: 0xa8
	// Line 1007, Address: 0x1f042bc, Func Offset: 0xcc
	// Line 1008, Address: 0x1f042dc, Func Offset: 0xec
	// Line 1010, Address: 0x1f04314, Func Offset: 0x124
	// Line 1011, Address: 0x1f04334, Func Offset: 0x144
	// Line 1013, Address: 0x1f04344, Func Offset: 0x154
	// Line 1014, Address: 0x1f0435c, Func Offset: 0x16c
	// Line 1015, Address: 0x1f04368, Func Offset: 0x178
	// Line 1019, Address: 0x1f04450, Func Offset: 0x260
	// Line 1020, Address: 0x1f04468, Func Offset: 0x278
	// Line 1021, Address: 0x1f04498, Func Offset: 0x2a8
	// Line 1023, Address: 0x1f044b0, Func Offset: 0x2c0
	// Line 1027, Address: 0x1f04598, Func Offset: 0x3a8
	// Line 1028, Address: 0x1f045b0, Func Offset: 0x3c0
	// Line 1029, Address: 0x1f045e0, Func Offset: 0x3f0
	// Line 1031, Address: 0x1f045f8, Func Offset: 0x408
	// Line 1032, Address: 0x1f0460c, Func Offset: 0x41c
	// Line 1034, Address: 0x1f04610, Func Offset: 0x420
	// Line 1035, Address: 0x1f0461c, Func Offset: 0x42c
	// Line 1036, Address: 0x1f0465c, Func Offset: 0x46c
	// Line 1037, Address: 0x1f04688, Func Offset: 0x498
	// Line 1038, Address: 0x1f046b0, Func Offset: 0x4c0
	// Line 1039, Address: 0x1f046ec, Func Offset: 0x4fc
	// Line 1040, Address: 0x1f046f4, Func Offset: 0x504
	// Line 1041, Address: 0x1f0470c, Func Offset: 0x51c
	// Line 1042, Address: 0x1f04710, Func Offset: 0x520
	// Line 1043, Address: 0x1f04724, Func Offset: 0x534
	// Func End, Address: 0x1f04738, Func Offset: 0x548
}

// 
// Start address: 0x1f04740
void EvProgSubHairInBox(int alpha)
{
	PicDraw_Data pic;
	// Line 1048, Address: 0x1f04740, Func Offset: 0
	// Line 1051, Address: 0x1f04750, Func Offset: 0x10
	// Line 1053, Address: 0x1f0476c, Func Offset: 0x2c
	// Line 1055, Address: 0x1f0477c, Func Offset: 0x3c
	// Line 1056, Address: 0x1f047a4, Func Offset: 0x64
	// Line 1057, Address: 0x1f047ac, Func Offset: 0x6c
	// Line 1058, Address: 0x1f047d8, Func Offset: 0x98
	// Line 1059, Address: 0x1f04804, Func Offset: 0xc4
	// Line 1060, Address: 0x1f04810, Func Offset: 0xd0
	// Func End, Address: 0x1f04824, Func Offset: 0xe4
}

// 
// Start address: 0x1f04830
int EvProgEmptyBox()
{
	// Line 1066, Address: 0x1f04830, Func Offset: 0
	// Line 1067, Address: 0x1f04838, Func Offset: 0x8
	// Line 1069, Address: 0x1f0484c, Func Offset: 0x1c
	// Func End, Address: 0x1f0485c, Func Offset: 0x2c
}

// 
// Start address: 0x1f04860
int EvProgSetPassNumberT()
{
	int i;
	// Line 1076, Address: 0x1f04860, Func Offset: 0
	// Line 1079, Address: 0x1f04868, Func Offset: 0x8
	// Line 1081, Address: 0x1f048bc, Func Offset: 0x5c
	// Line 1082, Address: 0x1f048d0, Func Offset: 0x70
	// Line 1083, Address: 0x1f048dc, Func Offset: 0x7c
	// Line 1084, Address: 0x1f0490c, Func Offset: 0xac
	// Line 1085, Address: 0x1f0491c, Func Offset: 0xbc
	// Line 1089, Address: 0x1f04930, Func Offset: 0xd0
	// Line 1092, Address: 0x1f04954, Func Offset: 0xf4
	// Line 1093, Address: 0x1f04964, Func Offset: 0x104
	// Line 1097, Address: 0x1f04978, Func Offset: 0x118
	// Line 1098, Address: 0x1f04980, Func Offset: 0x120
	// Line 1099, Address: 0x1f049a4, Func Offset: 0x144
	// Line 1102, Address: 0x1f049ac, Func Offset: 0x14c
	// Line 1103, Address: 0x1f049b4, Func Offset: 0x154
	// Line 1104, Address: 0x1f049bc, Func Offset: 0x15c
	// Line 1106, Address: 0x1f049f0, Func Offset: 0x190
	// Line 1107, Address: 0x1f04a04, Func Offset: 0x1a4
	// Line 1108, Address: 0x1f04a14, Func Offset: 0x1b4
	// Line 1111, Address: 0x1f04a1c, Func Offset: 0x1bc
	// Line 1112, Address: 0x1f04a40, Func Offset: 0x1e0
	// Line 1115, Address: 0x1f04a48, Func Offset: 0x1e8
	// Line 1116, Address: 0x1f04a5c, Func Offset: 0x1fc
	// Line 1117, Address: 0x1f04a6c, Func Offset: 0x20c
	// Line 1119, Address: 0x1f04a78, Func Offset: 0x218
	// Line 1120, Address: 0x1f04a7c, Func Offset: 0x21c
	// Func End, Address: 0x1f04a8c, Func Offset: 0x22c
	// Line 1179, Address: 0x1f04860, Func Offset: 0
	// Line 1180, Address: 0x1f04868, Func Offset: 0x8
	// Line 1182, Address: 0x1f04878, Func Offset: 0x18
	// Func End, Address: 0x1f04888, Func Offset: 0x28
}

// 
// Start address: 0x1f04a90
void EvProgSubSetNumberPicDisp()
{
	PicDraw_Data pic;
	// Line 1125, Address: 0x1f04a90, Func Offset: 0
	// Line 1128, Address: 0x1f04abc, Func Offset: 0x2c
	// Line 1129, Address: 0x1f04ac4, Func Offset: 0x34
	// Line 1130, Address: 0x1f04acc, Func Offset: 0x3c
	// Line 1132, Address: 0x1f04aec, Func Offset: 0x5c
	// Line 1134, Address: 0x1f04b04, Func Offset: 0x74
	// Line 1136, Address: 0x1f04b14, Func Offset: 0x84
	// Line 1137, Address: 0x1f04b3c, Func Offset: 0xac
	// Line 1138, Address: 0x1f04b68, Func Offset: 0xd8
	// Line 1139, Address: 0x1f04b74, Func Offset: 0xe4
	// Line 1140, Address: 0x1f04bb0, Func Offset: 0x120
	// Line 1141, Address: 0x1f04be4, Func Offset: 0x154
	// Line 1142, Address: 0x1f04bf0, Func Offset: 0x160
	// Line 1143, Address: 0x1f04c04, Func Offset: 0x174
	// Line 1145, Address: 0x1f04c10, Func Offset: 0x180
	// Line 1146, Address: 0x1f04c3c, Func Offset: 0x1ac
	// Line 1147, Address: 0x1f04c64, Func Offset: 0x1d4
	// Line 1150, Address: 0x1f04c70, Func Offset: 0x1e0
	// Line 1151, Address: 0x1f04c90, Func Offset: 0x200
	// Line 1152, Address: 0x1f04c98, Func Offset: 0x208
	// Func End, Address: 0x1f04ccc, Func Offset: 0x23c
}

// 
// Start address: 0x1f04cd0
void EvProgSubSetNumberButton()
{
	int j;
	int i;
	float r;
	float y;
	float x;
	int button[2][9];
	// Line 1155, Address: 0x1f04cd0, Func Offset: 0
	// Line 1166, Address: 0x1f04cd8, Func Offset: 0x8
	// Line 1168, Address: 0x1f04cf4, Func Offset: 0x24
	// Line 1169, Address: 0x1f04d08, Func Offset: 0x38
	// Line 1170, Address: 0x1f04d14, Func Offset: 0x44
	// Line 1171, Address: 0x1f04d48, Func Offset: 0x78
	// Line 1173, Address: 0x1f04d68, Func Offset: 0x98
	// Line 1174, Address: 0x1f04d84, Func Offset: 0xb4
	// Line 1175, Address: 0x1f04d90, Func Offset: 0xc0
	// Line 1176, Address: 0x1f04dc4, Func Offset: 0xf4
	// Line 1177, Address: 0x1f04dd0, Func Offset: 0x100
	// Line 1178, Address: 0x1f04de8, Func Offset: 0x118
	// Line 1180, Address: 0x1f04df0, Func Offset: 0x120
	// Line 1183, Address: 0x1f04e08, Func Offset: 0x138
	// Line 1185, Address: 0x1f04e24, Func Offset: 0x154
	// Line 1187, Address: 0x1f04e70, Func Offset: 0x1a0
	// Line 1188, Address: 0x1f04e88, Func Offset: 0x1b8
	// Line 1190, Address: 0x1f04ea0, Func Offset: 0x1d0
	// Line 1191, Address: 0x1f04ea8, Func Offset: 0x1d8
	// Line 1193, Address: 0x1f04ef4, Func Offset: 0x224
	// Line 1194, Address: 0x1f04f0c, Func Offset: 0x23c
	// Line 1197, Address: 0x1f04f24, Func Offset: 0x254
	// Func End, Address: 0x1f04f34, Func Offset: 0x264
}

// 
// Start address: 0x1f04f40
int EvProgLouiseTakecare()
{
	// Line 1202, Address: 0x1f04f40, Func Offset: 0
	// Line 1203, Address: 0x1f04f48, Func Offset: 0x8
	// Line 1205, Address: 0x1f04f84, Func Offset: 0x44
	// Line 1206, Address: 0x1f04fb4, Func Offset: 0x74
	// Line 1207, Address: 0x1f04fc8, Func Offset: 0x88
	// Line 1208, Address: 0x1f04fdc, Func Offset: 0x9c
	// Line 1211, Address: 0x1f04fe4, Func Offset: 0xa4
	// Line 1212, Address: 0x1f04ff8, Func Offset: 0xb8
	// Line 1213, Address: 0x1f05008, Func Offset: 0xc8
	// Line 1214, Address: 0x1f05010, Func Offset: 0xd0
	// Line 1215, Address: 0x1f05024, Func Offset: 0xe4
	// Line 1217, Address: 0x1f05040, Func Offset: 0x100
	// Line 1220, Address: 0x1f05048, Func Offset: 0x108
	// Line 1221, Address: 0x1f0505c, Func Offset: 0x11c
	// Line 1222, Address: 0x1f05070, Func Offset: 0x130
	// Line 1225, Address: 0x1f05078, Func Offset: 0x138
	// Line 1226, Address: 0x1f0508c, Func Offset: 0x14c
	// Line 1228, Address: 0x1f05098, Func Offset: 0x158
	// Line 1229, Address: 0x1f0509c, Func Offset: 0x15c
	// Func End, Address: 0x1f050ac, Func Offset: 0x16c
}

// 
// Start address: 0x1f050b0
int EvProgUseElevatorKey()
{
	// Line 1234, Address: 0x1f050b0, Func Offset: 0
	// Line 1235, Address: 0x1f050b8, Func Offset: 0x8
	// Line 1239, Address: 0x1f050e8, Func Offset: 0x38
	// Func End, Address: 0x1f050f8, Func Offset: 0x48
}

// 
// Start address: 0x1f05100
int EvProgFromRoof()
{
	float jms_pos[4];
	<unknown fundamental type (0xa510)>* anim_adr;
	DramaDemo_PlayInfo info;
	// Line 1244, Address: 0x1f05100, Func Offset: 0
	// Line 1252, Address: 0x1f05108, Func Offset: 0x8
	// Line 1254, Address: 0x1f05138, Func Offset: 0x38
	// Line 1255, Address: 0x1f05150, Func Offset: 0x50
	// Line 1257, Address: 0x1f05180, Func Offset: 0x80
	// Line 1258, Address: 0x1f05198, Func Offset: 0x98
	// Line 1259, Address: 0x1f051a8, Func Offset: 0xa8
	// Line 1260, Address: 0x1f051c8, Func Offset: 0xc8
	// Line 1261, Address: 0x1f051dc, Func Offset: 0xdc
	// Line 1262, Address: 0x1f051e4, Func Offset: 0xe4
	// Line 1266, Address: 0x1f051f8, Func Offset: 0xf8
	// Line 1267, Address: 0x1f05224, Func Offset: 0x124
	// Line 1270, Address: 0x1f0522c, Func Offset: 0x12c
	// Line 1271, Address: 0x1f05240, Func Offset: 0x140
	// Line 1272, Address: 0x1f05260, Func Offset: 0x160
	// Line 1273, Address: 0x1f05284, Func Offset: 0x184
	// Line 1274, Address: 0x1f0528c, Func Offset: 0x18c
	// Line 1275, Address: 0x1f05298, Func Offset: 0x198
	// Line 1276, Address: 0x1f052a4, Func Offset: 0x1a4
	// Line 1278, Address: 0x1f052b0, Func Offset: 0x1b0
	// Line 1279, Address: 0x1f052b4, Func Offset: 0x1b4
	// Func End, Address: 0x1f052c4, Func Offset: 0x1c4
}

// 
// Start address: 0x1f052d0
int EvCharaDataClear(int room)
{
	// Line 1285, Address: 0x1f052d0, Func Offset: 0
	// Line 1287, Address: 0x1f052d8, Func Offset: 0x8
	// Func End, Address: 0x1f052e0, Func Offset: 0x10
}

// 
// Start address: 0x1f052e0
void EvRoomInit()
{
	int room;
	SubCharacter* scp;
	float vec0[4];
	CharaData_DemoList chara_data[2];
	// Line 1292, Address: 0x1f052e0, Func Offset: 0
	// Line 1303, Address: 0x1f052e8, Func Offset: 0x8
	// Line 1305, Address: 0x1f052f0, Func Offset: 0x10
	// Line 1306, Address: 0x1f052fc, Func Offset: 0x1c
	// Line 1307, Address: 0x1f05314, Func Offset: 0x34
	// Line 1308, Address: 0x1f05328, Func Offset: 0x48
	// Line 1310, Address: 0x1f05334, Func Offset: 0x54
	// Line 1311, Address: 0x1f05348, Func Offset: 0x68
	// Line 1312, Address: 0x1f05350, Func Offset: 0x70
	// Line 1313, Address: 0x1f0536c, Func Offset: 0x8c
	// Line 1314, Address: 0x1f05388, Func Offset: 0xa8
	// Line 1315, Address: 0x1f05398, Func Offset: 0xb8
	// Line 1317, Address: 0x1f053b4, Func Offset: 0xd4
	// Line 1319, Address: 0x1f053d0, Func Offset: 0xf0
	// Line 1321, Address: 0x1f053ec, Func Offset: 0x10c
	// Line 1323, Address: 0x1f05404, Func Offset: 0x124
	// Func End, Address: 0x1f05414, Func Offset: 0x134
}

// 
// Start address: 0x1f05420
void EvAllTimeFunc()
{
	// Line 1329, Address: 0x1f05420, Func Offset: 0
	// Func End, Address: 0x1f05428, Func Offset: 0x8
}

