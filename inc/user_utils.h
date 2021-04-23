#ifndef __USER_UTILS_H__
#define __USER_UTILS_H__
/**
 * @file user_utils.h
 * @author Bharath.G ()
 * @brief User defined utilities used across the project
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"
#include <util/delay.h>

/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void delay_ms(uint32_t delay_time);

#endif /* __USER_UTILS_H__ */