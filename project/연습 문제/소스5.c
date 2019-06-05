#include <stdio.h>
#include <string.h>

struct inf {
	int ksg;
	float jdw;
	char nwh;
};

typedef struct comen {
	int kh;
	float abw;
	char kri;
}ce;

typedef struct {
	int wkud;
	float isj;
	char kd;
}ikm;

void main() {
	struct inf ins;
	ce kjn;
	ikm bbs;

	scanf("%d %f %c", &ins.ksg, &ins.jdw, &ins.nwh);

	kjn.kh = 10;
	kjn.abw = 97.5;
	kjn.kri = 'M';

	bbs.wkud = 18;
	bbs.isj = 28.9;
	bbs.kd = 'Y';

	printf("%d %.1f %c\n", ins.ksg, ins.jdw, ins.nwh);
	printf("%d %.1f %c\n", kjn.kh, kjn.abw, kjn.kri);
	printf("%d %.1f %c\n", bbs.wkud, bbs.isj, bbs.kd);
}