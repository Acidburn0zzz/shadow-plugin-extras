/*
 * The Shadow Simulator
 * See LICENSE for licensing information
 */

#ifndef SHD_TOR_CTL_CIRCUITBUILD_H_
#define SHD_TOR_CTL_CIRCUITBUILD_H_

#include <glib.h>
#include <shd-library.h>

#include "torcontrol.h"

typedef struct _TorCtlCircuitBuild TorCtlCircuitBuild;

TorCtlCircuitBuild *torControlCircuitBuild_new(ShadowLogFunc logFunc, gint sockd,
		gchar **moduleArgs, TorControl_EventHandlers *handlers);

#endif /* SHD_TOR_CTL_CIRCUITBUILD_H_ */
