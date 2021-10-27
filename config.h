/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */
	//{run_command, "%s",  "/home/binette/.local/bin/slstatus/resources.sh" },
	{ battery_perc, " %s%%", "BAT1" },
        { battery_state, "%s", "BAT1" },
        { battery_remaining, " %s |", "BAT1" },
	{ram_used, "[RAM] %s/", NULL },
	{ram_total, "%s ", NULL },
	{cpu_perc, "[CPU] %s%% ", NULL },
	{disk_used, "[STO] %s/", "/home" },
	{disk_total, "%s | ", "/home" },
	{ datetime, "%s",     "%F [%T]" },
};
