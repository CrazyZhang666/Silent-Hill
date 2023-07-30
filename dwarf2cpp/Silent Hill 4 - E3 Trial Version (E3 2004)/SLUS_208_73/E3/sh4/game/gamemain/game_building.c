typedef struct sfObj;
typedef union _anon0;
typedef struct _GAME_WORK;
typedef struct EventFlag;
typedef struct _EventDriver;

typedef void(*type_0)(sfObj*);
typedef int(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef int(*type_21)(sfObj*);
typedef int(*type_22)(sfObj*);
typedef int(*type_23)(sfObj*);

typedef int type_3[1];
typedef _anon0 type_4[4];
typedef int type_5[1];
typedef float type_7[4];
typedef float type_8[4][4];
typedef int type_9[1];
typedef int type_10[1];
typedef int type_11[1];
typedef float type_12[4];
typedef int type_13[1];
typedef short type_14[2];
typedef unsigned short type_15[2];
typedef char type_16[4];
typedef unsigned char type_17[320];
typedef unsigned char type_18[4];
typedef float type_19[1];
typedef int type_20[1];
typedef _anon0 type_24[256];
typedef int type_25[1];

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union _anon0
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

struct _GAME_WORK
{
	int init_at_cold[1];
	int logo_displayed;
	int init_at_warm[1];
	int game_init_executed;
	void* warm_memory_top;
	int load_stage_start;
	int continue_play;
	int game_overed;
	int risky_continue_count;
	int level;
	int init_at_game[1];
	void* game_memory_top;
	int stage;
	int scene;
	int prev_scene;
	int prev_stage;
	int next_stage;
	int next_scene;
	int start_door;
	int world;
	int real_scene;
	float current_camera_mtx[4][4];
	float next_camera_mtx[4][4];
	float game_camera_back[4][4];
	float game_view_angle;
	float game_view_angle_back;
	float map_offset[4];
	void* player;
	int control;
	int player_pos;
	unsigned int next_flags;
	int gameover;
	int gameover_ok;
	int game_complete;
	int gauge;
	int event_disable;
	int eileen_status;
	int cynthia_status;
	int pause_disable_contine;
	unsigned int play_time;
	unsigned int continue_count;
	unsigned int killed_enemy;
	unsigned int held_ghost;
	int update_continue;
	int continue_item;
	int now_peeping;
	unsigned int pre_eil_timer;
	unsigned int eil_interval;
	int pre_demo_index;
	unsigned int pre_demo_type;
	unsigned int pre_door_timer;
	unsigned int door_interval;
	unsigned int pre_door_demo_no;
	int init_at_stage[1];
	void* stage_memory_top;
	int stage_data_save;
	int init_at_scene[1];
	void* scene_memory_top;
	void* snap_texture_load_buffer;
	int game_mode;
	int shadow_density;
	int door_move_disable;
	int fog_effect_off;
	int init_at_loop[1];
	int game_in_action;
	int player_touch_door_no;
	int* passing_door;
	int work_end[1];
	int open_door_sn;
	int open_door_dn;
	int close_door_se_disable;
	int close_door_se_reserve;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon0 val[4];
};

_GAME_WORK gamew;
int g_clock_slot;
EventFlag event_flag;
int g_clock_slot2;
_EventDriver ev_building0_bd_2245;

void GamebuildingStageInit();
void GamebuildingSceneMain();
void GamebuildingSceneInit();

// 
// Start address: 0x1ed3f80
void GamebuildingStageInit()
{
	// Line 21, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 37, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 42, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 111, Address: 0x1ed3f80, Func Offset: 0
	// Line 114, Address: 0x1ed3fc0, Func Offset: 0x40
	// Line 115, Address: 0x1ed3fcc, Func Offset: 0x4c
	// Line 117, Address: 0x1ed3fd4, Func Offset: 0x54
	// Line 118, Address: 0x1ed3fdc, Func Offset: 0x5c
	// Line 120, Address: 0x1ed3fe0, Func Offset: 0x60
	// Line 121, Address: 0x1ed3ff0, Func Offset: 0x70
	// Line 122, Address: 0x1ed3ffc, Func Offset: 0x7c
	// Line 123, Address: 0x1ed400c, Func Offset: 0x8c
	// Line 124, Address: 0x1ed4014, Func Offset: 0x94
	// Line 125, Address: 0x1ed401c, Func Offset: 0x9c
	// Line 127, Address: 0x1ed4030, Func Offset: 0xb0
	// Line 128, Address: 0x1ed4088, Func Offset: 0x108
	// Line 129, Address: 0x1ed4090, Func Offset: 0x110
	// Line 130, Address: 0x1ed40b0, Func Offset: 0x130
	// Line 129, Address: 0x1ed40b4, Func Offset: 0x134
	// Line 130, Address: 0x1ed40b8, Func Offset: 0x138
	// Line 129, Address: 0x1ed40bc, Func Offset: 0x13c
	// Line 130, Address: 0x1ed40c0, Func Offset: 0x140
	// Line 131, Address: 0x1ed40c4, Func Offset: 0x144
	// Line 132, Address: 0x1ed40ec, Func Offset: 0x16c
	// Line 134, Address: 0x1ed4108, Func Offset: 0x188
	// Line 132, Address: 0x1ed410c, Func Offset: 0x18c
	// Line 134, Address: 0x1ed4114, Func Offset: 0x194
	// Line 132, Address: 0x1ed4118, Func Offset: 0x198
	// Line 134, Address: 0x1ed4120, Func Offset: 0x1a0
	// Line 133, Address: 0x1ed4124, Func Offset: 0x1a4
	// Line 134, Address: 0x1ed4128, Func Offset: 0x1a8
	// Line 135, Address: 0x1ed412c, Func Offset: 0x1ac
	// Line 137, Address: 0x1ed4134, Func Offset: 0x1b4
	// Line 139, Address: 0x1ed414c, Func Offset: 0x1cc
	// Line 140, Address: 0x1ed415c, Func Offset: 0x1dc
	// Line 141, Address: 0x1ed416c, Func Offset: 0x1ec
	// Line 142, Address: 0x1ed417c, Func Offset: 0x1fc
	// Line 143, Address: 0x1ed4180, Func Offset: 0x200
	// Func End, Address: 0x1ed41c4, Func Offset: 0x244
	// Line 38, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 69, Address: 0x1ed3f80, Func Offset: 0
	// Line 72, Address: 0x1ed3f84, Func Offset: 0x4
	// Line 69, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 72, Address: 0x1ed3f8c, Func Offset: 0xc
	// Line 69, Address: 0x1ed3f90, Func Offset: 0x10
	// Line 72, Address: 0x1ed3f98, Func Offset: 0x18
	// Line 73, Address: 0x1ed3fa0, Func Offset: 0x20
	// Line 74, Address: 0x1ed3fc0, Func Offset: 0x40
	// Func End, Address: 0x1ed3fd0, Func Offset: 0x50
	// Line 24, Address: 0x1ed3f80, Func Offset: 0
	// Line 25, Address: 0x1ed3f84, Func Offset: 0x4
	// Func End, Address: 0x1ed3f8c, Func Offset: 0xc
	// Line 22, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 20, Address: 0x1ed3f80, Func Offset: 0
	// Line 24, Address: 0x1ed3f84, Func Offset: 0x4
	// Line 25, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 26, Address: 0x1ed3f8c, Func Offset: 0xc
	// Func End, Address: 0x1ed3f94, Func Offset: 0x14
}

// 
// Start address: 0x1ed3f90
void GamebuildingSceneMain()
{
	float pos[4];
	// Line 31, Address: 0x1ed3f90, Func Offset: 0
	// Func End, Address: 0x1ed3f98, Func Offset: 0x8
	// Line 56, Address: 0x1ed3f90, Func Offset: 0
	// Func End, Address: 0x1ed3fa0, Func Offset: 0x10
	// Line 45, Address: 0x1ed3f90, Func Offset: 0
	// Line 48, Address: 0x1ed3f94, Func Offset: 0x4
	// Line 45, Address: 0x1ed3f98, Func Offset: 0x8
	// Line 50, Address: 0x1ed3f9c, Func Offset: 0xc
	// Line 48, Address: 0x1ed3fa0, Func Offset: 0x10
	// Line 50, Address: 0x1ed3fa4, Func Offset: 0x14
	// Line 51, Address: 0x1ed3fe4, Func Offset: 0x54
	// Line 52, Address: 0x1ed3fe8, Func Offset: 0x58
	// Line 53, Address: 0x1ed3ff8, Func Offset: 0x68
	// Line 54, Address: 0x1ed4000, Func Offset: 0x70
	// Line 55, Address: 0x1ed4018, Func Offset: 0x88
	// Line 56, Address: 0x1ed4030, Func Offset: 0xa0
	// Line 57, Address: 0x1ed4048, Func Offset: 0xb8
	// Line 59, Address: 0x1ed4050, Func Offset: 0xc0
	// Line 61, Address: 0x1ed4058, Func Offset: 0xc8
	// Line 62, Address: 0x1ed4068, Func Offset: 0xd8
	// Line 63, Address: 0x1ed4070, Func Offset: 0xe0
	// Line 64, Address: 0x1ed4088, Func Offset: 0xf8
	// Line 65, Address: 0x1ed40a0, Func Offset: 0x110
	// Line 66, Address: 0x1ed40b8, Func Offset: 0x128
	// Line 67, Address: 0x1ed40c0, Func Offset: 0x130
	// Line 68, Address: 0x1ed40c8, Func Offset: 0x138
	// Line 69, Address: 0x1ed40d0, Func Offset: 0x140
	// Line 70, Address: 0x1ed40e8, Func Offset: 0x158
	// Line 71, Address: 0x1ed4100, Func Offset: 0x170
	// Line 72, Address: 0x1ed4118, Func Offset: 0x188
	// Line 74, Address: 0x1ed4120, Func Offset: 0x190
	// Line 77, Address: 0x1ed4128, Func Offset: 0x198
	// Line 78, Address: 0x1ed4130, Func Offset: 0x1a0
	// Line 81, Address: 0x1ed4138, Func Offset: 0x1a8
	// Line 82, Address: 0x1ed4140, Func Offset: 0x1b0
	// Line 83, Address: 0x1ed4154, Func Offset: 0x1c4
	// Line 84, Address: 0x1ed415c, Func Offset: 0x1cc
	// Line 83, Address: 0x1ed4160, Func Offset: 0x1d0
	// Line 84, Address: 0x1ed4164, Func Offset: 0x1d4
	// Line 85, Address: 0x1ed416c, Func Offset: 0x1dc
	// Line 86, Address: 0x1ed4180, Func Offset: 0x1f0
	// Line 88, Address: 0x1ed4188, Func Offset: 0x1f8
	// Line 91, Address: 0x1ed4190, Func Offset: 0x200
	// Line 89, Address: 0x1ed4194, Func Offset: 0x204
	// Line 91, Address: 0x1ed4198, Func Offset: 0x208
	// Line 89, Address: 0x1ed419c, Func Offset: 0x20c
	// Line 91, Address: 0x1ed41a0, Func Offset: 0x210
	// Line 89, Address: 0x1ed41a4, Func Offset: 0x214
	// Line 91, Address: 0x1ed41a8, Func Offset: 0x218
	// Line 96, Address: 0x1ed41b0, Func Offset: 0x220
	// Line 97, Address: 0x1ed41c0, Func Offset: 0x230
	// Line 98, Address: 0x1ed41c8, Func Offset: 0x238
	// Line 99, Address: 0x1ed41d0, Func Offset: 0x240
	// Line 100, Address: 0x1ed41d8, Func Offset: 0x248
	// Line 101, Address: 0x1ed41e0, Func Offset: 0x250
	// Func End, Address: 0x1ed41ec, Func Offset: 0x25c
	// Line 46, Address: 0x1ed3f90, Func Offset: 0
	// Line 47, Address: 0x1ed3f94, Func Offset: 0x4
	// Line 46, Address: 0x1ed3f98, Func Offset: 0x8
	// Line 47, Address: 0x1ed3f9c, Func Offset: 0xc
	// Line 49, Address: 0x1ed3fac, Func Offset: 0x1c
	// Line 52, Address: 0x1ed3fc0, Func Offset: 0x30
	// Line 53, Address: 0x1ed3fcc, Func Offset: 0x3c
	// Line 54, Address: 0x1ed3fd8, Func Offset: 0x48
	// Line 53, Address: 0x1ed3fdc, Func Offset: 0x4c
	// Line 54, Address: 0x1ed3fe4, Func Offset: 0x54
	// Line 55, Address: 0x1ed3ff4, Func Offset: 0x64
	// Line 56, Address: 0x1ed4018, Func Offset: 0x88
	// Line 58, Address: 0x1ed4044, Func Offset: 0xb4
	// Line 59, Address: 0x1ed4050, Func Offset: 0xc0
	// Line 60, Address: 0x1ed405c, Func Offset: 0xcc
	// Line 62, Address: 0x1ed4070, Func Offset: 0xe0
	// Line 64, Address: 0x1ed4098, Func Offset: 0x108
	// Line 65, Address: 0x1ed40a8, Func Offset: 0x118
	// Line 66, Address: 0x1ed40b0, Func Offset: 0x120
	// Line 67, Address: 0x1ed40cc, Func Offset: 0x13c
	// Line 71, Address: 0x1ed40f0, Func Offset: 0x160
	// Line 72, Address: 0x1ed4104, Func Offset: 0x174
	// Line 76, Address: 0x1ed4114, Func Offset: 0x184
	// Line 83, Address: 0x1ed4120, Func Offset: 0x190
	// Func End, Address: 0x1ed412c, Func Offset: 0x19c
	// Line 28, Address: 0x1ed3f90, Func Offset: 0
	// Line 29, Address: 0x1ed3f94, Func Offset: 0x4
	// Line 28, Address: 0x1ed3f98, Func Offset: 0x8
	// Line 29, Address: 0x1ed3f9c, Func Offset: 0xc
	// Line 30, Address: 0x1ed3fac, Func Offset: 0x1c
	// Line 31, Address: 0x1ed3fb4, Func Offset: 0x24
	// Line 32, Address: 0x1ed3fbc, Func Offset: 0x2c
	// Line 33, Address: 0x1ed3fc0, Func Offset: 0x30
	// Line 34, Address: 0x1ed3fd4, Func Offset: 0x44
	// Line 35, Address: 0x1ed3fdc, Func Offset: 0x4c
	// Line 37, Address: 0x1ed3fe0, Func Offset: 0x50
	// Line 39, Address: 0x1ed4000, Func Offset: 0x70
	// Line 40, Address: 0x1ed4008, Func Offset: 0x78
	// Line 44, Address: 0x1ed4010, Func Offset: 0x80
	// Line 45, Address: 0x1ed4024, Func Offset: 0x94
	// Line 46, Address: 0x1ed4034, Func Offset: 0xa4
	// Line 47, Address: 0x1ed403c, Func Offset: 0xac
	// Line 49, Address: 0x1ed4040, Func Offset: 0xb0
	// Func End, Address: 0x1ed404c, Func Offset: 0xbc
	// Line 177, Address: 0x1ed3f90, Func Offset: 0
	// Line 184, Address: 0x1ed3f98, Func Offset: 0x8
	// Line 177, Address: 0x1ed3f9c, Func Offset: 0xc
	// Line 184, Address: 0x1ed3fb8, Func Offset: 0x28
	// Line 185, Address: 0x1ed3fcc, Func Offset: 0x3c
	// Line 187, Address: 0x1ed3ff8, Func Offset: 0x68
	// Line 189, Address: 0x1ed4008, Func Offset: 0x78
	// Line 195, Address: 0x1ed4018, Func Offset: 0x88
	// Line 196, Address: 0x1ed401c, Func Offset: 0x8c
	// Line 195, Address: 0x1ed4020, Func Offset: 0x90
	// Line 196, Address: 0x1ed4024, Func Offset: 0x94
	// Line 198, Address: 0x1ed4028, Func Offset: 0x98
	// Line 195, Address: 0x1ed402c, Func Offset: 0x9c
	// Line 196, Address: 0x1ed4034, Func Offset: 0xa4
	// Line 197, Address: 0x1ed4048, Func Offset: 0xb8
	// Line 198, Address: 0x1ed4058, Func Offset: 0xc8
	// Line 199, Address: 0x1ed4078, Func Offset: 0xe8
	// Line 202, Address: 0x1ed40ac, Func Offset: 0x11c
	// Line 203, Address: 0x1ed40b4, Func Offset: 0x124
	// Line 202, Address: 0x1ed40b8, Func Offset: 0x128
	// Line 203, Address: 0x1ed40e4, Func Offset: 0x154
	// Line 206, Address: 0x1ed40f0, Func Offset: 0x160
	// Line 207, Address: 0x1ed4104, Func Offset: 0x174
	// Line 208, Address: 0x1ed4128, Func Offset: 0x198
	// Line 209, Address: 0x1ed4140, Func Offset: 0x1b0
	// Line 212, Address: 0x1ed4154, Func Offset: 0x1c4
	// Line 213, Address: 0x1ed416c, Func Offset: 0x1dc
	// Line 216, Address: 0x1ed4178, Func Offset: 0x1e8
	// Line 217, Address: 0x1ed418c, Func Offset: 0x1fc
	// Line 218, Address: 0x1ed41a4, Func Offset: 0x214
	// Line 220, Address: 0x1ed41c8, Func Offset: 0x238
	// Line 221, Address: 0x1ed41d0, Func Offset: 0x240
	// Func End, Address: 0x1ed41f4, Func Offset: 0x264
}

// 
// Start address: 0x1ed4130
void GamebuildingSceneInit()
{
	float pos[4];
	float len;
	// Line 85, Address: 0x1ed4130, Func Offset: 0
	// Line 87, Address: 0x1ed413c, Func Offset: 0xc
	// Line 85, Address: 0x1ed4140, Func Offset: 0x10
	// Line 90, Address: 0x1ed4144, Func Offset: 0x14
	// Line 85, Address: 0x1ed4148, Func Offset: 0x18
	// Line 87, Address: 0x1ed414c, Func Offset: 0x1c
	// Line 88, Address: 0x1ed4154, Func Offset: 0x24
	// Line 90, Address: 0x1ed4158, Func Offset: 0x28
	// Line 91, Address: 0x1ed4160, Func Offset: 0x30
	// Line 92, Address: 0x1ed416c, Func Offset: 0x3c
	// Line 91, Address: 0x1ed4170, Func Offset: 0x40
	// Line 92, Address: 0x1ed4178, Func Offset: 0x48
	// Line 94, Address: 0x1ed4188, Func Offset: 0x58
	// Line 96, Address: 0x1ed41ac, Func Offset: 0x7c
	// Line 94, Address: 0x1ed41b0, Func Offset: 0x80
	// Line 96, Address: 0x1ed41b4, Func Offset: 0x84
	// Line 97, Address: 0x1ed41dc, Func Offset: 0xac
	// Line 98, Address: 0x1ed41e8, Func Offset: 0xb8
	// Line 99, Address: 0x1ed41f8, Func Offset: 0xc8
	// Line 101, Address: 0x1ed4200, Func Offset: 0xd0
	// Line 102, Address: 0x1ed4208, Func Offset: 0xd8
	// Line 104, Address: 0x1ed422c, Func Offset: 0xfc
	// Line 109, Address: 0x1ed4250, Func Offset: 0x120
	// Line 112, Address: 0x1ed4264, Func Offset: 0x134
	// Line 114, Address: 0x1ed4274, Func Offset: 0x144
	// Line 116, Address: 0x1ed427c, Func Offset: 0x14c
	// Line 118, Address: 0x1ed4280, Func Offset: 0x150
	// Line 119, Address: 0x1ed4288, Func Offset: 0x158
	// Line 121, Address: 0x1ed4298, Func Offset: 0x168
	// Line 123, Address: 0x1ed42b0, Func Offset: 0x180
	// Line 124, Address: 0x1ed42b8, Func Offset: 0x188
	// Line 125, Address: 0x1ed42c4, Func Offset: 0x194
	// Line 127, Address: 0x1ed42c8, Func Offset: 0x198
	// Line 128, Address: 0x1ed42e8, Func Offset: 0x1b8
	// Line 129, Address: 0x1ed42f4, Func Offset: 0x1c4
	// Line 132, Address: 0x1ed42f8, Func Offset: 0x1c8
	// Line 134, Address: 0x1ed4304, Func Offset: 0x1d4
	// Line 135, Address: 0x1ed430c, Func Offset: 0x1dc
	// Line 137, Address: 0x1ed4310, Func Offset: 0x1e0
	// Func End, Address: 0x1ed4320, Func Offset: 0x1f0
}

