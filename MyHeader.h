#pragma once

typedef enum _Action {
	act_NONE,
	act_LABIRINT,
	act_LABIRINTEXIT,
	act_LABIRINTPATH,
	act_RECURSION,
	act_BREAK
} MyAction, *pMyAction;