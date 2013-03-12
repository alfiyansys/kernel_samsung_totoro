/*
 *  mod from linux/include/linux/cpufreq.h
 *
 *  Copyright (C) 2001 Russell King
 *            (C) 2002 - 2003 Dominik Brodowski <linux@brodo.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef _LINUX_CPUFREQ_H
#define _LINUX_CPUFREQ_H

#include <linux/mutex.h>
#include <linux/notifier.h>
#include <linux/threads.h>
#include <linux/device.h>
#include <linux/kobject.h>
#include <linux/sysfs.h>
#include <linux/completion.h>
#include <linux/workqueue.h>
#include <linux/cpumask.h>
#include <asm/div64.h>

#ifdef defined(CONFIG_CPU_FREQ_DEFAULT_GOV_ARCTURUSENERGY)
extern struct cpufreq_governor cpufreq_gov_arcturusenergy;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_arcturusenergy)
#endif
#endif
