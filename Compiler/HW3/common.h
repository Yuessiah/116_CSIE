#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef enum { VOID_t, INT_t, FLOAT_t ,STRING_t } SEMTYPE;
typedef enum { ADD_t, SUB_t, MUL_t, DIV_t, MOD_t, INC_t, DEC_t, LT_t, LE_t, EQ_t, GE_t, GT_t, NE_t, AND_t, OR_t, NOT_t, NONE_t } OPERATOR;
typedef enum { PRINT_t, PRINTLN_t } FUNC;
typedef enum { ADDASGN_t, SUBASGN_t, MULASGN_t, DIVASGN_t, MODASGN_t } ASGN;


typedef struct rule_type {
    int i_val, reg;
    double f_val;
    char* id;
    char* string;
    SEMTYPE type;
    OPERATOR op;
    FUNC func;
    ASGN asgn;
} RULE_TYPE;

#endif
