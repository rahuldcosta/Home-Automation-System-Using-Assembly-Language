/* sscc : C CODE OF SORTED EQUATIONS temp_controller - INLINE MODE */

/* AUXILIARY DECLARATIONS */

#ifndef STRLEN
#define STRLEN 81
#endif
#define _COND(A,B,C) ((A)?(B):(C))
#ifdef TRACE_ACTION
#include <stdio.h>
#endif
#ifndef NULL
#define NULL ((char*)0)
#endif

#ifndef __EXEC_STATUS_H_LOADED
#define __EXEC_STATUS_H_LOADED

typedef struct {
unsigned int start:1;
unsigned int kill:1;
unsigned int active:1;
unsigned int suspended:1;
unsigned int prev_active:1;
unsigned int prev_suspended:1;
unsigned int exec_index;
unsigned int task_exec_index;
void (*pStart)();
void (*pRet)();
} __ExecStatus;

#endif
#define __ResetExecStatus(status) {\
   status.prev_active = status.active; \
   status.prev_suspended = status.suspended; \
   status.start = status.kill = status.active = status.suspended = 0; }
#define __DSZ(V) (--(V)<=0)
#define BASIC_TYPES_DEFINED
typedef int boolean;
typedef int integer;
typedef char* string;
#define _true 1
#define _false 0
#define __temp_controller_GENERIC_TEST(TEST) return TEST;
typedef void (*__temp_controller_APF)();
static __temp_controller_APF *__temp_controller_PActionArray;

                   
/* EXTERN DECLARATIONS */

#ifndef _NO_EXTERN_DEFINITIONS
#endif

/* INITIALIZED CONSTANTS */

/* MEMORY ALLOCATION */

static integer __temp_controller_V0;
static boolean __temp_controller_V1;
static boolean __temp_controller_V2;
static boolean __temp_controller_V3;
static integer __temp_controller_V4;
static integer __temp_controller_V5;


/* INPUT FUNCTIONS */

void temp_controller_I_TEMP (integer __V) {
__temp_controller_V0 = __V;
__temp_controller_V1 = _true;
}
void temp_controller_I_SAMPLE_TIME () {
__temp_controller_V2 = _true;
}
void temp_controller_I_DELTA_T () {
__temp_controller_V3 = _true;
}

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

#define __temp_controller_A1 \
__temp_controller_V1
#define __temp_controller_A2 \
__temp_controller_V2
#define __temp_controller_A3 \
__temp_controller_V3

/* OUTPUT ACTIONS */

#define __temp_controller_A4 \
temp_controller_O_FAN_ON()
#define __temp_controller_A5 \
temp_controller_O_FAN_OFF()
#define __temp_controller_A6 \
temp_controller_O_AC_ON()
#define __temp_controller_A7 \
temp_controller_O_AC_OFF()
#define __temp_controller_A8 \
temp_controller_O_HEATER_ON()
#define __temp_controller_A9 \
temp_controller_O_HEATER_OFF()

/* ASSIGNMENTS */

#define __temp_controller_A10 \
__temp_controller_V1 = _false
#define __temp_controller_A11 \
__temp_controller_V0 = 50
#define __temp_controller_A12 \
__temp_controller_V2 = _false
#define __temp_controller_A13 \
__temp_controller_V3 = _false
#define __temp_controller_A14 \
__temp_controller_V4 = 50
#define __temp_controller_A15 \
__temp_controller_V4 = __temp_controller_V0
#define __temp_controller_A16 \
__temp_controller_V0 = __temp_controller_V4
#define __temp_controller_A17 \
__temp_controller_V0 = __temp_controller_V4+1
#define __temp_controller_A18 \
__temp_controller_V0 = __temp_controller_V4
#define __temp_controller_A19 \
__temp_controller_V0 = __temp_controller_V4-1
#define __temp_controller_A20 \
__temp_controller_V0 = __temp_controller_V4
#define __temp_controller_A21 \
__temp_controller_V0 = __temp_controller_V4-1
#define __temp_controller_A22 \
__temp_controller_V5 = 0
#define __temp_controller_A23 \
__temp_controller_V5 = __temp_controller_V5+1
#define __temp_controller_A24 \
__temp_controller_V5 = __temp_controller_V5+2
#define __temp_controller_A25 \
__temp_controller_V5 = __temp_controller_V5+3

/* PROCEDURE CALLS */

/* CONDITIONS */

#define __temp_controller_A26 \
__temp_controller_V0<=20
#define __temp_controller_A27 \
(__temp_controller_V0>=21)&&(__temp_controller_V0<=28)
#define __temp_controller_A28 \
__temp_controller_V0>=29
#define __temp_controller_A29 \
__temp_controller_V0>21
#define __temp_controller_A30 \
__temp_controller_V0<29
#define __temp_controller_A31 \
__temp_controller_V0<=20
#define __temp_controller_A32 \
(__temp_controller_V0>=21)&&(__temp_controller_V0<=23)
#define __temp_controller_A33 \
(__temp_controller_V0>=24)&&(__temp_controller_V0<=26)
#define __temp_controller_A34 \
(__temp_controller_V0>=27)&&(__temp_controller_V0<=29)
#define __temp_controller_A35 \
__temp_controller_V0>=30

/* DECREMENTS */

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

/* ACTION SEQUENCES */

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int temp_controller_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */



static void __temp_controller__reset_input () {
__temp_controller_V1 = _false;
__temp_controller_V2 = _false;
__temp_controller_V3 = _false;
}

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __temp_controller_R[3] = {_true,
 _false,
 _false};

/* AUTOMATON ENGINE */

int temp_controller () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[10];
E[0] = __temp_controller_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__temp_controller_A1));
if (E[0]) {
__temp_controller_A11;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A11\n");
#endif
}
if (__temp_controller_R[0]) {
__temp_controller_A14;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A14\n");
#endif
}
E[1] = (
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__temp_controller_A1)||__temp_controller_R[0];
if (__temp_controller_R[0]) {
__temp_controller_A16;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A16\n");
#endif
}
if (__temp_controller_R[0]) {
__temp_controller_A18;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A18\n");
#endif
}
if (__temp_controller_R[0]) {
__temp_controller_A20;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A20\n");
#endif
}
E[2] = __temp_controller_R[2]||__temp_controller_R[1];
E[3] = E[2]&&!(__temp_controller_R[0]);
E[4] = E[3]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__temp_controller_A2);
E[3] = E[3]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__temp_controller_A2));
E[5] = __temp_controller_R[1]&&E[3];
E[6] = (E[4]&&E[1])||(E[5]&&E[1]);
E[7] = E[6]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 26\n"),
#endif
__temp_controller_A26);
E[6] = E[6]&&!(E[7]);
E[8] = E[6]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 27\n"),
#endif
__temp_controller_A27);
E[6] = E[6]&&!(E[8]);
E[9] = E[6]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 28\n"),
#endif
__temp_controller_A28);
__temp_controller_R[2] = __temp_controller_R[0]||E[7]||E[8]||E[9]||(E[6]&&!(E[9]))||(__temp_controller_R[2]&&E[3]);
__temp_controller_R[1] = (E[4]&&!(E[1]))||(__temp_controller_R[1]&&E[5]&&!(E[1]));
E[2] = (__temp_controller_R[2]||__temp_controller_R[1])&&(__temp_controller_R[2]||__temp_controller_R[1])&&(E[2]||__temp_controller_R[0])&&(E[2]||__temp_controller_R[0])&&(E[2]||__temp_controller_R[0]);
if (E[1]&&E[2]) {
__temp_controller_A15;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A15\n");
#endif
}
if (!(_true)) {
__temp_controller_A4;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A4\n");
#endif
}
if (!(_true)) {
__temp_controller_A5;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A5\n");
#endif
}
if (!(_true)) {
__temp_controller_A6;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A6\n");
#endif
}
if (!(_true)) {
__temp_controller_A7;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A7\n");
#endif
}
if (!(_true)) {
__temp_controller_A8;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A8\n");
#endif
}
if (!(_true)) {
__temp_controller_A9;
#ifdef TRACE_ACTION
fprintf(stderr, "__temp_controller_A9\n");
#endif
}
E[5] = !(_true);
__temp_controller_R[0] = !(_true);
__temp_controller__reset_input();
return E[2];
}

/* AUTOMATON RESET */

int temp_controller_reset () {
__temp_controller_R[0] = _true;
__temp_controller_R[1] = _false;
__temp_controller_R[2] = _false;
__temp_controller__reset_input();
return 0;
}
