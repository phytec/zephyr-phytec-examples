/*
 * Copyright (c) 2024 PHYTEC
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <zephyr/kernel.h>

#include "heartbeat.h"
#include "uart_loopback.h"

K_THREAD_DEFINE(heartbeat_tid, HEARTBEAT_STACKSIZE, heartbeat, NULL, NULL,
		NULL, HEARTBEAT_PRIORITY, 0, 0);

K_THREAD_DEFINE(uart_loopback_tid, UART_LOOPBACK_STACKSIZE, uart_loopback,
		NULL, NULL, NULL, UART_LOOPBACK_PRIORITY, 0, 0);
