#pragma once

typedef enum _Action {
	act_NONE,
	act_LABIRINT,
	act_LABIRINTEXIT,
	act_LABIRINTPATH,
	act_RECURSION,
	act_RECURSION3_1,
	act_BREAK,
	act_CLASSES,
	act_UNIT
} MyAction, *pMyAction;