/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */
	{run_command, "[%s - ",  "/home/binette/.local/bin/statusbar/sb-nettraf" },
	{run_command, "%s] ",  "/home/binette/.local/bin/statusbar/sb-internet" },
	{cpu_perc, "[ %s%% | ", NULL },
	{temp, "%s°c] ",        "/sys/class/thermal/thermal_zone0/temp" },
//	{run_command, "[%s] ",  "/home/binette/.local/bin/statusbar/sb-volume" },
//	{run_command, "[%s] | ",  "/home/binette/.local/bin/statusbar/sb-battery" },
	{run_command, "%s",  "date '+[%b %d (%a) %Y - %I:%M%p] '" },
	//{disk_used, "[STO] %s/", "/home" },
	//{disk_total, "%s | ", "/home" },*/
	};

