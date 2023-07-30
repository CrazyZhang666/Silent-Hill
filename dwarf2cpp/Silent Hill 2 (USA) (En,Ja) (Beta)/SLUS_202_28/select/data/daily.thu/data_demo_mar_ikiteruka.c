typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef fsFile type_0[1];
typedef char type_1[36];
typedef char type_2[28];
typedef fsFileIndex type_3[1];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef fsFile type_6[1];
typedef char type_7[36];
typedef fsFileIndex type_8[1];
typedef fsFile type_9[1];
typedef fsFile type_10[1];
typedef char type_11[36];
typedef fsFileIndex type_12[1];
typedef char type_13[40];
typedef fsFileIndex type_14[1];
typedef fsFile type_15[1];
typedef char type_16[36];
typedef fsFileIndex type_17[1];
typedef fsFile type_18[1];
typedef char type_19[40];
typedef fsFileIndex type_20[1];

union fsFile
{
	_anon0 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

struct _anon0
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

union fsFileIndex
{
	_anon1 index;
	unsigned long pack;
};

struct _anon1
{
	fsFile* fp;
	char* name;
};

char z_data_demo_mar_ikiteruka_mgf__name[28];
fsFile z_data_demo_mar_ikiteruka_mgf__info[1];
fsFileIndex data_demo_mar_ikiteruka_mgf[1];
char z_data_demo_mar_ikiteruka_hhh_jms_anm__name[36];
fsFile z_data_demo_mar_ikiteruka_hhh_jms_anm__info[1];
fsFileIndex data_demo_mar_ikiteruka_hhh_jms_anm[1];
char z_data_demo_mar_ikiteruka_hhh_jms_cls__name[36];
fsFile z_data_demo_mar_ikiteruka_hhh_jms_cls__info[1];
fsFileIndex data_demo_mar_ikiteruka_hhh_jms_cls[1];
char z_data_demo_mar_ikiteruka_hhh_mar_anm__name[36];
fsFile z_data_demo_mar_ikiteruka_hhh_mar_anm__info[1];
fsFileIndex data_demo_mar_ikiteruka_hhh_mar_anm[1];
char z_data_demo_mar_ikiteruka_hhh_mar_cls__name[36];
fsFile z_data_demo_mar_ikiteruka_hhh_mar_cls__info[1];
fsFileIndex data_demo_mar_ikiteruka_hhh_mar_cls[1];
char z_data_demo_mar_ikiteruka_ikiteruka_1_dds__name[40];
fsFile z_data_demo_mar_ikiteruka_ikiteruka_1_dds__info[1];
fsFileIndex data_demo_mar_ikiteruka_ikiteruka_1_dds[1];
char z_data_demo_mar_ikiteruka_ikiteruka_2_dds__name[40];
fsFile z_data_demo_mar_ikiteruka_ikiteruka_2_dds__info[1];
fsFileIndex data_demo_mar_ikiteruka_ikiteruka_2_dds[1];


