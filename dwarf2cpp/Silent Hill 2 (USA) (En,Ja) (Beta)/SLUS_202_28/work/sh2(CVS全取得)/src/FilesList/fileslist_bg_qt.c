typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct FilesBgBlock;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;


typedef FilesBgBlock type_0[1];
typedef FilesBgBlock type_1[1];
typedef FilesBgBlock* type_2[11];
typedef FilesBgBlock type_3[1];
typedef FilesBgBlock type_4[1];
typedef FilesBgBlock type_5[1];
typedef FilesBgBlock type_6[1];
typedef int type_7[1];
typedef FilesBgBlock type_8[1];
typedef FilesBgBlock type_9[1];
typedef FilesBgBlock type_10[1];
typedef FilesBgBlock type_11[1];
typedef FilesBgBlock type_12[1];

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon1 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct FilesBgBlock
{
	fsFileIndex* map;
	fsFileIndex* cld;
	fsFileIndex* cam;
	fsFileIndex* kg2;
	fsFileIndex* tex;
	fsFileIndex* ex0;
	fsFileIndex* ex1;
	fsFileIndex* ex2;
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

struct _anon1
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

FilesBgBlock bg_bid_qt00[1];
FilesBgBlock bg_bid_qt01[1];
FilesBgBlock bg_bid_qt02[1];
FilesBgBlock bg_bid_qt03[1];
FilesBgBlock bg_bid_qt04[1];
FilesBgBlock bg_bid_qt05[1];
FilesBgBlock bg_bid_qt06[1];
FilesBgBlock bg_bid_qt07[1];
FilesBgBlock bg_bid_qt08[1];
FilesBgBlock bg_bid_qt09[1];
FilesBgBlock bg_bid_qt10[1];
int FilesBgBlockMax_qt[1];
FilesBgBlock* FilesBgBlockList_qt[11];


