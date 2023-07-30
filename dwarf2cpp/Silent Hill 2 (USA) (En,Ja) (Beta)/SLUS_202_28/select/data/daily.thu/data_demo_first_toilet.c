typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[35];
typedef char type_1[27];
typedef fsFile type_2[1];
typedef fsFileIndex type_3[1];
typedef fsFile type_4[1];
typedef fsFile type_5[1];
typedef char type_6[40];
typedef fsFileIndex type_7[1];
typedef char type_8[35];
typedef fsFileIndex type_9[1];
typedef fsFile type_10[1];
typedef fsFileIndex type_11[1];

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

char z_data_demo_first_toilet_mgf__name[27];
fsFile z_data_demo_first_toilet_mgf__info[1];
fsFileIndex data_demo_first_toilet_mgf[1];
char z_data_demo_first_toilet_first_toilet_dds__name[40];
fsFile z_data_demo_first_toilet_first_toilet_dds__info[1];
fsFileIndex data_demo_first_toilet_first_toilet_dds[1];
char z_data_demo_first_toilet_hhh_jms_anm__name[35];
fsFile z_data_demo_first_toilet_hhh_jms_anm__info[1];
fsFileIndex data_demo_first_toilet_hhh_jms_anm[1];
char z_data_demo_first_toilet_hhh_jms_cls__name[35];
fsFile z_data_demo_first_toilet_hhh_jms_cls__info[1];
fsFileIndex data_demo_first_toilet_hhh_jms_cls[1];


