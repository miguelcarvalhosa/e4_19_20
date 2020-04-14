#ifndef _TRANSFER_H
#define _TRANSFER_H

#include <stdint.h>
#include "../../XC32_mock/mem_map.h"

#define PWM_STEPS		256

uint16_t transfer_func(uint16_t dist);

#endif